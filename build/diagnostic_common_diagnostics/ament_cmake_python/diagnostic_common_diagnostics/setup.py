import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='diagnostic_common_diagnostics',
    version='1.9.3',
    packages=find_packages(
        include=('diagnostic_common_diagnostics', 'diagnostic_common_diagnostics.*')),
)
