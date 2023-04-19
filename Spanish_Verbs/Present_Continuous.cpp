#include <iostream>
#include <vector>
#include "Present_Continous.hpp"
#include <cstdlib>
#include <ctime>
  std::string Verbs_Present_Continuous::AR_Congrugation_Present_Continous(std::string Verb) {

    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(AR_Endings_Present_Continous);
  }
  std::string Verbs_Present_Continuous::ER_IR_Congrugation_Present_Continous(
      std::string Verb) {

    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(ER_IR_Endings_Present_Continous);
  }