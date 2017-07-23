cmake_minimum_required(VERSION 3.2)
add_executable(Test test.c)
target_link_libraries(Test scal)
target_link_libraries(Test smath)
target_include_directories(Test PRIVATE ../scal)
target_include_directories(Test PRIVATE ../smath)
# you can get the detail log from "./Testing/Temporary/LastTest.log"
target_compile_options(Test PRIVATE "-DLOG_LEVEL=2")

# to get more information 
# - https://cmake.org/cmake/help/v3.8/command/add_test.html
# - https://cmake.org/cmake/help/v3.8/manual/cmake-properties.7.html#properties-on-tests
add_test(test_01 Test 1)
set_tests_properties (test_01 PROPERTIES PASS_REGULAR_EXPRESSION "TestPassed")
add_test(test_02 Test 2)
add_test(test_03 Test 3)
set_tests_properties (test_03 PROPERTIES WILL_FAIL ON)
add_test(test_04 Test 4)
set_tests_properties (test_04 PROPERTIES FAIL_REGULAR_EXPRESSION "Error")
add_test(test_05 Test 5)
set_tests_properties (test_05 PROPERTIES FAIL_REGULAR_EXPRESSION "Error")

