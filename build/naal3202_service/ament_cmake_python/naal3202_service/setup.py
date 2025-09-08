from setuptools import find_packages
from setuptools import setup

setup(
    name='naal3202_service',
    version='0.0.0',
    packages=find_packages(
        include=('naal3202_service', 'naal3202_service.*')),
)
