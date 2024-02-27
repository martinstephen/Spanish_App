add_executable(Present multiply_test.cpp)

target_link_libraries(Present
 PRIVATE
  GTest::GTest
  multiply)

add_test(multiply_gtests Present)