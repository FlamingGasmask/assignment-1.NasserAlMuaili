from setuptools import find_packages, setup

package_name = 'naal3202_hw2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='nasser',
    maintainer_email='nasser.almuaili@colorado.edu',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'services_server = naal3202_hw2.services_server:main',
            'services_client = naal3202_hw2.services_client:main'
        ],
    },
)
