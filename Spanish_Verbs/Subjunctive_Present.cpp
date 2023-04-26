#include "Subjunctive_Present.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
std::string
Verbs_Subjunctive_Present::AR_Subjunctive_Present(std::string Verb) {

  Verb.pop_back();
  Verb.pop_back();
  return Verb.append(AR_Endings_Subjunctive_Present);
}
std::string Verbs_Subjunctive_Present::ER_IR_Subjunctive_Presents(
    std::string Verb) {

  Verb.pop_back();
  Verb.pop_back();
  return Verb.append(ER_IR_Endings_Subjunctive_Present);
}