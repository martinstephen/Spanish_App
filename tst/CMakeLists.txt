# CMakeLists.txt for tests

add_executable(Test_Present_Tense Test_Present_Tense.cpp)
target_link_libraries(Test_Present_Tense PRIVATE Catch2::Catch2WithMain)

add_test(NAME Test_Present_Tense COMMAND Test_Present_Tense)
