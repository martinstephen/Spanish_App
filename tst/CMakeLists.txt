# CMakeLists.txt for tests
include (CTest)

include_directories(../inc/ ../src/)
add_executable(Test_Present_Tense Test_Present_Tense.cpp ../src/Present_Tense.cpp ../src/util/String_Helper.cpp)
add_executable(Test_Future_Simple Test_Future_Simple.cpp ../src/Future_Tense_Simple.cpp ../src/util/String_Helper.cpp)
target_link_libraries(Test_Present_Tense PRIVATE Catch2::Catch2WithMain)
target_link_libraries(Test_Future_Simple PRIVATE Catch2::Catch2WithMain)

add_test(NAME Test_Present_Tense COMMAND Test_Present_Tense)
add_test(NAME Test_Future_Simple COMMAND Test_Future_Simple)
