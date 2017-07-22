# Reference

- CMake/CTest
  - http://opencv.jp/cmake/cmake_tutorial.html

- Debian Package
  - https://cmake.org/Wiki/CMake/CPack/Examples/Linux/DEB
  - http://neurosuite.sourceforge.net/packaging.html

# Build/Test/Create Package

~~~~
git clone https://github.com/dtenpf/ctest_sample.git
mkdir -p build
cd build 
cmake ..
make 
make test
cpack
~~~~
