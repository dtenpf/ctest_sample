# Reference

- CMake/CTest
  - http://opencv.jp/cmake/cmake_tutorial.html

- Debian Package
  - https://cmake.org/Wiki/CMake/CPack/Examples/Linux/DEB
  - http://neurosuite.sourceforge.net/packaging.html

# Build/Test/Create Package

~~~~
git clone -b test_multi_package https://github.com/dtenpf/ctest_sample.git
mkdir -p build/scal
mkdir -p build/smath
cd build/scal 
cmake -DCMAKE_INSTALL_PREFIX=../ ../../program/scal
make 
make test
make install
make package

cd ../smath
cmake -DCMAKE_INSTALL_PREFIX=../ ../../program/smath
make
make test
make install
make package
~~~~
