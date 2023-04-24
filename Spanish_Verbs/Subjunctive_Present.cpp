#include "Subjunctive_Present.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
std::string
Verbs_Subjunctive_Present::AR_Subjunctive_Present(std::string Verb) {

  Verb.pop_back();
  Verb.pop_back();
  return Verb.append(AR_Endings_Present_Continous);
}
std::string
Verbs_Present_Continuous::ER__IR_Subjunctive_Presents(
    std::string Verb) {

  Verb.pop_back();
  Verb.pop_back();
  return Verb.append(ER_IR_Endings_Present_Continous);
}