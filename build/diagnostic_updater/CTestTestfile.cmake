# CMake generated Testfile for 
# Source directory: /root/researchv2/src/diagnostics/diagnostic_updater
# Build directory: /root/researchv2/build/diagnostic_updater
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(diagnostic_updater_test "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/diagnostic_updater_test.gtest.xml" "--package-name" "diagnostic_updater" "--output-file" "/root/researchv2/build/diagnostic_updater/ament_cmake_gtest/diagnostic_updater_test.txt" "--command" "/root/researchv2/build/diagnostic_updater/diagnostic_updater_test" "--gtest_output=xml:/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/diagnostic_updater_test.gtest.xml")
set_tests_properties(diagnostic_updater_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/researchv2/build/diagnostic_updater/diagnostic_updater_test" TIMEOUT "60" WORKING_DIRECTORY "/root/researchv2/build/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;40;ament_add_gtest;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(diagnostic_updater_test.py "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/diagnostic_updater_test.py.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/root/researchv2/build/diagnostic_updater/ament_cmake_pytest/diagnostic_updater_test.py.txt" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/root/researchv2/src/diagnostics/diagnostic_updater/test/diagnostic_updater_test.py" "-o" "cache_dir=/root/researchv2/build/diagnostic_updater/ament_cmake_pytest/diagnostic_updater_test.py/.cache" "--junit-xml=/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/diagnostic_updater_test.py.xunit.xml" "--junit-prefix=diagnostic_updater")
set_tests_properties(diagnostic_updater_test.py PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/root/researchv2/build/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;165;ament_add_test;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;55;ament_add_pytest_test;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(test_DiagnosticStatusWrapper.py "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/test_DiagnosticStatusWrapper.py.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/root/researchv2/build/diagnostic_updater/ament_cmake_pytest/test_DiagnosticStatusWrapper.py.txt" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/root/researchv2/src/diagnostics/diagnostic_updater/test/test_diagnostic_status_wrapper.py" "-o" "cache_dir=/root/researchv2/build/diagnostic_updater/ament_cmake_pytest/test_DiagnosticStatusWrapper.py/.cache" "--junit-xml=/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/test_DiagnosticStatusWrapper.py.xunit.xml" "--junit-prefix=diagnostic_updater")
set_tests_properties(test_DiagnosticStatusWrapper.py PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/root/researchv2/build/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;165;ament_add_test;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;56;ament_add_pytest_test;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/cppcheck.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/root/researchv2/build/diagnostic_updater/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/galactic/bin/ament_cppcheck" "--xunit-file" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/cppcheck.xunit.xml" "--include_dirs" "/root/researchv2/src/diagnostics/diagnostic_updater/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/root/researchv2/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;83;ament_package;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/cpplint.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/root/researchv2/build/diagnostic_updater/ament_cpplint/cpplint.txt" "--command" "/opt/ros/galactic/bin/ament_cpplint" "--xunit-file" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/root/researchv2/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/opt/ros/galactic/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;35;ament_cpplint;/opt/ros/galactic/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;83;ament_package;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/flake8.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/root/researchv2/build/diagnostic_updater/ament_flake8/flake8.txt" "--command" "/opt/ros/galactic/bin/ament_flake8" "--xunit-file" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/researchv2/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_flake8/cmake/ament_flake8.cmake;48;ament_add_test;/opt/ros/galactic/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/opt/ros/galactic/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;83;ament_package;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/lint_cmake.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/root/researchv2/build/diagnostic_updater/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/galactic/bin/ament_lint_cmake" "--xunit-file" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/researchv2/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;83;ament_package;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/pep257.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/root/researchv2/build/diagnostic_updater/ament_pep257/pep257.txt" "--command" "/opt/ros/galactic/bin/ament_pep257" "--xunit-file" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/researchv2/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/galactic/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/galactic/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;83;ament_package;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/uncrustify.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/root/researchv2/build/diagnostic_updater/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/galactic/bin/ament_uncrustify" "--xunit-file" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/researchv2/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;65;ament_add_test;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;34;ament_uncrustify;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;83;ament_package;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/xmllint.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/root/researchv2/build/diagnostic_updater/ament_xmllint/xmllint.txt" "--command" "/opt/ros/galactic/bin/ament_xmllint" "--xunit-file" "/root/researchv2/build/diagnostic_updater/test_results/diagnostic_updater/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/researchv2/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;83;ament_package;/root/researchv2/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
subdirs("gtest")
