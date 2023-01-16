import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='diagnostic_updater',
    version='2.1.3',
    packages=find_packages(
        include=('diagnostic_updater', 'diagnostic_updater.*')),
)
