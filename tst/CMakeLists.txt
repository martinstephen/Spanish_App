# CMakeLists.txt for tests
include (CTest)

include_directories(../inc/ ../src/)
add_executable(Test_Present_Tense Test_Present_Tense.cpp ../src/Present_Tense.cpp ../src/Pronouns.cpp)
target_link_libraries(Test_Present_Tense PRIVATE Catch2::Catch2WithMain)

add_test(NAME Test_Present_Tense COMMAND Test_Present_Tense)
