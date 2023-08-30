# 将该子项目下包含的内容反馈到主项目中
include_directories(.)

add_executable(other-bind_function bind_function.cpp)
add_executable(other-std_move_function std_move_function.cpp)
add_executable(other-std_head_source_file head_source_file.cpp head_source_file.h)
add_executable(other-kmp_algorithm kmp_algorithm.cpp)
add_executable(other-try try.cpp)

