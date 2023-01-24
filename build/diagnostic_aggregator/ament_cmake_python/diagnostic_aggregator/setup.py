import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='diagnostic_aggregator',
    version='2.1.3',
    packages=find_packages(
        include=('diagnostic_aggregator', 'diagnostic_aggregator.*')),
)
