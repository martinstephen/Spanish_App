#include <iostream>
#include <vector>
#include "Present_Tense.hpp"
#include <cstdlib>
#include <ctime>


std::string Verbs_Present_Tense::AR_Congrugation_Present_Tense(std::string Verb, int Pronoun_index) {
  if (Verb == "Estar") {
    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(Estar_Endings_Present_Tense[Pronoun_index]);
  }
    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(AR_Endings_Present_Tense[Pronoun_index]);
  }
std::string Verbs_Present_Tense::IR_Congrugation_Present_Tense(std::string Verb,
                                            int Pronoun_index) {
    if (Verb == "ir") {
      Verb.append(Ir_Endings_Present_Tense[Pronoun_index]);
      return Verb.erase(0, 2);
    }
    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(IR_Endings_Present_Tense[Pronoun_index]);
  }
std::string Verbs_Present_Tense::ER_Congrugation_Present_Tense(
    std::string Verb,
                                            int Pronoun_index) {

    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(ER_Endings_Present_Tense[Pronoun_index]);
  }
