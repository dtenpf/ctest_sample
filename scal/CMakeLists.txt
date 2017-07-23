cmake_minimum_required(VERSION 3.2)
add_library (scal SHARED simple_calc.c)

install(TARGETS scal DESTINATION /opt/ftl/lib COMPONENT nml)
install(TARGETS scal DESTINATION /opt/ftl/lib COMPONENT dev)
install(FILES simple_calc.h DESTINATION /opt/ftl/include COMPONENT dev)
