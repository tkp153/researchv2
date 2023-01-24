import os

import unittest

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.events import matches_action
from launch.events.process import ShutdownProcess

import launch_testing
import launch_testing.actions
import launch_testing.asserts
import launch_testing.util
import launch_testing_ros


test_listener = ExecuteProcess(
    cmd=[
        "/usr/bin/python3",
        "/root/researchv2/src/diagnostics/diagnostic_aggregator/test/test_listener.py"
        ],
    name='test_listener',
    emulate_tty=True,
    output='screen')

def generate_test_description():
    global test_listener

    os.environ['OSPL_VERBOSITY'] = '8'
    os.environ['RCUTILS_CONSOLE_OUTPUT_FORMAT'] = '{message}'

    aggregator_node = ExecuteProcess(
        cmd=[
            "/root/researchv2/install/diagnostic_aggregator/lib/diagnostic_aggregator/aggregator_node",
            "--ros-args",
            "--params-file",
            "/root/researchv2/src/diagnostics/diagnostic_aggregator/test/analyzer_group.yaml"
            ],
        name='aggregator_node',
        emulate_tty=True,
        output='screen')

    launch_description = LaunchDescription()
    launch_description.add_action(aggregator_node)
    launch_description.add_action(test_listener)
    launch_description.add_action(launch_testing.util.KeepAliveProc())
    launch_description.add_action(launch_testing.actions.ReadyToTest())
    return launch_description, locals()

class TestAggregator(unittest.TestCase):

    def test_processes_output(self, launch_service, proc_info, proc_output):
        """Check aggregator logging output for expected strings."""
        global test_listener

        from launch_testing.tools.output import get_default_filtered_prefixes
        output_filter = launch_testing_ros.tools.basic_output_filter(
            filtered_prefixes=get_default_filtered_prefixes() + ['service not available, waiting...'],
            filtered_rmw_implementation=''
        )

        proc_info.assertWaitForStartup(process=test_listener, timeout=2)
        proc_output.assertWaitFor(
            expected_output=launch_testing.tools.expected_output_from_file(path="/root/researchv2/src/diagnostics/diagnostic_aggregator/test/expected_output/output_analyzer_group"),
            process=test_listener,
            output_filter=output_filter,
            timeout=15
        )

        import time
        time.sleep(1)

@launch_testing.post_shutdown_test()
class TestAggregatorShutdown(unittest.TestCase):

    def test_last_process_exit_code(self, proc_info, aggregator_node):
        launch_testing.asserts.assertExitCodes(proc_info, process=aggregator_node)
