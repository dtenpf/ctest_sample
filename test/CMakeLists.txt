cmake_minimum_required(VERSION 3.2)
add_executable(Test test.c)
target_link_libraries(Test scal)
target_include_directories(Test PRIVATE ../src)

add_test(scal_test_01 Test 1)
set_tests_properties (scal_test_01 PROPERTIES PASS_REGULAR_EXPRESSION "True")
add_test(scal_test_02 Test 2)
set_tests_properties (scal_test_02 PROPERTIES PASS_REGULAR_EXPRESSION "True")
add_test(scal_test_03 Test 3)
set_tests_properties (scal_test_03 PROPERTIES PASS_REGULAR_EXPRESSION "True")
add_test(scal_test_04 Test 4)
set_tests_properties (scal_test_04 PROPERTIES PASS_REGULAR_EXPRESSION "True")

