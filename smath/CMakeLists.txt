cmake_minimum_required(VERSION 3.2)
add_library (smath SHARED simple_math.c)
target_link_libraries(smath scal)
target_include_directories(smath PRIVATE ../scal)

install(TARGETS smath DESTINATION lib COMPONENT nml)
install(TARGETS smath DESTINATION lib COMPONENT dev)
install(FILES simple_math.h DESTINATION include COMPONENT dev)


