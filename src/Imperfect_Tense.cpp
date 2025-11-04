#include "Imperfect_Tense.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include "Pronouns.hpp"
#include "Verbs_Infinitive.hpp"
std::string Verbs_Imperfect::AR_Imperfect(std::string Verb,
                                                  int pronoun) {

  Verb.pop_back();
  Verb.pop_back();
  return Verb.append(AR_Endings_Imperfect[static_cast<int>(pronoun)];
}
std::string Verbs_Imperfect::ER_IR_Imperfect(std::string Verb,
                                                      int pronoun) {

    if (Verb == "Ser") {
    return Ser_Endings_Imperfect_Tense[pronoun];
  }
    if (Verb == "Ver") {
    return Ver_Endings_Imperfect_Tense[pronoun];
    }
    if (Verb == "ir") {
    Verb.append(Ir_Endings_Imperfect_Tense[static_cast<int>(pronoun)];
    return Verb.erase(0, 2);
    }

  Verb.pop_back();
  Verb.pop_back();
  return Verb.append(ER_IR_Endings_Imperfect[static_cast<int>(pronoun)];
}
std::string Verbs_Imperfect::Generate_Imperfect() {
  int index;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  Verbs_Imperfect Imperfect;
  int Get_last_2_Letters = 2;

  auto it = Verb.verbs_map.begin();
  std::advance(it, rand() % Verb.verbs_map.size());
  std::string random_key = it->first;
  index = rand() % Pronoun.pronouns.size();
  std::cout << "Imperfect: " << Pronoun.pronouns[index] + " " + random_key
            << std::endl;

  if (it->second.substr(Verb.verbs_map[random_key].length() -
                        Verb.Get_last_2_Letters) == Verb.AR_ending) {
    return Imperfect.AR_Imperfect(Verb.verbs_map[random_key], index);
  }
  if (it->second.substr(Verb.verbs_map[random_key].length() -
                        Verb.Get_last_2_Letters) == Verb.IR_ending ||
      it->second.substr(Verb.verbs_map[random_key].length() -
                        Verb.Get_last_2_Letters) == Verb.ER_ending) {
    return Imperfect.ER_IR_Imperfect(Verb.verbs_map[random_key], index);
  }

  return "Fail";
}