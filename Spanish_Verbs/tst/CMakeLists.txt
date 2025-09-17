# CMakeLists.txt for tests
enable_testing()

add_executable(Test_Present_Tense Test_Present_Tense.cpp)
target_link_libraries(Test_Present_Tense PRIVATE Catch2::Catch2WithMain)

include(GoogleTest)
gtest_discover_tests(Test_Present_Tense)
