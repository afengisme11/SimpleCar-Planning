#!/bin/sh
echo "###### RO47005 Group 9 ######"
echo "Configuring and building the project ..."

mkdir data
mkdir build
cd build
cmake ..
make
