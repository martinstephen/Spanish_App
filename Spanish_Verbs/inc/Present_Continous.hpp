
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Verbs_Present_Continuous {
public:
  std::string AR_Endings_Present_Continous = {"ando"};
  std::string ER_IR_Endings_Present_Continous = {"iendo"};

  std::string AR_Congrugation_Present_Continous(std::string Verb);
  std::string ER_IR_Congrugation_Present_Continous(std::string Verb);
};