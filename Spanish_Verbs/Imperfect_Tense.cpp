#include "Imperfect_Tense.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
std::string Verbs_Imperfect::AR_Imperfect(std::string Verb,
                                                  int Pronoun_index) {

  Verb.pop_back();
  Verb.pop_back();
  return Verb.append(AR_Endings_Imperfect[Pronoun_index]);
}
std::string Verbs_Imperfect::ER_IR_Imperfect(std::string Verb,
                                                      int Pronoun_index) {

  Verb.pop_back();
  Verb.pop_back();
  return Verb.append(ER_IR_Endings_Imperfect[Pronoun_index]);
}