set(test_source chess_test.cpp)

add_executable(tests ${test_source})
target_link_libraries(tests chesslib gtest gtest_main)
