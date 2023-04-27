#include "Indefinite_Tense.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
std::string Verbs_Indefinite::AR_Indefinte(std::string Verb,
                                           int Pronoun_index) {

  Verb.pop_back();
  Verb.pop_back();
  return Verb.append(AR_Endings_Indefinite[Pronoun_index]);
}
std::string Verbs_Indefinite::ER_IR_Indefinite(std::string Verb,
                                             int Pronoun_index) {

  Verb.pop_back();
  Verb.pop_back();
  return Verb.append(ER_IR_Endings_Indefinite[Pronoun_index]);
}