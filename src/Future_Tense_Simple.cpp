#include "Future_Tense_Simple.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
std::string Verbs_Future_Simple::Conjugation_Future_Simple(std::string Verb, int Pronoun_index) {

  return Verb.append(Endings_Future_Simple[Pronoun_index]);
}
