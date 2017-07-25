cmake_minimum_required(VERSION 3.2)
link_directories(${CMAKE_INSTALL_PREFIX}/lib)
add_executable(Test test.c)
target_link_libraries(Test smath)
target_include_directories(Test PRIVATE ../src)
# you can get the detail log from "./Testing/Temporary/LastTest.log"
target_compile_options(Test PRIVATE "-DLOG_LEVEL=2")

# to get more information 
# - https://cmake.org/cmake/help/v3.8/command/add_test.html
# - https://cmake.org/cmake/help/v3.8/manual/cmake-properties.7.html#properties-on-tests
add_test(test_01 Test 1)
set_tests_properties (test_01 PROPERTIES FAIL_REGULAR_EXPRESSION "Error")

