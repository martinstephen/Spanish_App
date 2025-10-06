#include <iostream>
#include <vector>
#include "Present_Continous.hpp"
#include <cstdlib>
#include <ctime>

#include "Pronouns.hpp"
#include "Verbs_Infinitive.hpp"
#include "Present_Tense.hpp"

  std::string Verbs_Present_Continuous::AR_Conjugation_Present_Continous(std::string Verb) {

    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(AR_Endings_Present_Continous);
  }
  std::string Verbs_Present_Continuous::ER_IR_Conjugation_Present_Continous(
      std::string Verb) {

    if (Verb == "ir") {
      return Ir_Present_Continous;
    }
    if (Verb == "Leer") {
      return Leer_Present_Continous;
    }
    if (Verb == "Creer") {
      return Creer_Present_Continous;
    }
    if (Verb == "Oír") {
      return Oír_Present_Continous;
    }
    if (Verb == "Traer") {
      return Traer_Present_Continous;
    }
    if (Verb == "Pedir") {
      return Pedir_Present_Continous;
    }
    if (Verb == "Venir") {
      return Venir_Present_Continous;
    }
    if (Verb == "Decir") {
      return Decir_Present_Continous;
    }

    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(ER_IR_Endings_Present_Continous);
  }
    std::string Verbs_Present_Continuous::Generate_Present_Continous()
    {
      int index;
      Verbs_Present_Continuous Verbs_Present_Continuous;
      Verbs_Present_Tense Verbs_Present_Tense;
      Verbs_Pronouns Pronoun;
      Verbs_Infinitve Verb;

      auto it = Verb.verbs_map.begin();
      std::advance(it, rand() % Verb.verbs_map.size());
      std::string random_key = it->first;
      index = rand() % Pronoun.pronouns.size();
      std::string output;
      std::cout << "Present Continous: "
                << Pronoun.pronouns[index] + " " + random_key << std::endl;
      if (it->second.substr(Verb.verbs_map[random_key].length() -
                            Verb.Get_last_2_Letters) == Verb.AR_ending) {
        return Verbs_Present_Tense.AR_Conjugation_Present_Tense("Estar",
                                                                 index) +
               " " +
               Verbs_Present_Continuous.AR_Conjugation_Present_Continous(
                   Verb.verbs_map[random_key]);
      }
      if (it->second.substr(Verb.verbs_map[random_key].length() -
                            Verb.Get_last_2_Letters) == Verb.ER_ending ||
          it->second.substr(Verb.verbs_map[random_key].length() -
                            Verb.Get_last_2_Letters) == Verb.ER_ending) {
        return Verbs_Present_Tense.AR_Conjugation_Present_Tense("Estar",
                                                                 index) +
               " " +
               Verbs_Present_Continuous.ER_IR_Conjugation_Present_Continous(
                   Verb.verbs_map[random_key]);
      }
      return 0;
    }
  