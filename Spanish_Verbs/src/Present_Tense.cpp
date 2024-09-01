#include <iostream>
#include <vector>
#include "Present_Tense.hpp"
#include <cstdlib>
#include <ctime>

#include "Pronouns.hpp"
#include "Verbs_Infinitive.hpp"


std::string Verbs_Present_Tense::AR_Congrugation_Present_Tense(std::string Verb, int Pronoun_index) {
  if (Verb == "Estar") {
  
    return Estar_Endings_Present_Tense[Pronoun_index];
  }
  if (Verb == "Dar") {
    return Dar_Endings_Present_Tense[Pronoun_index];
  }
  if (Verb == "Pensar") {
    return Pensar_Endings_Present_Tense[Pronoun_index];
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
    if (Verb == "Decir") {
      return Decir_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Pedir") {
      return Pedir_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Salir") {
      return Salir_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Venir") {
      return Venir_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Oír") {
      return Oír_Endings_Present_Tense[Pronoun_index];
    }

    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(IR_Endings_Present_Tense[Pronoun_index]);
  }
std::string Verbs_Present_Tense::ER_Congrugation_Present_Tense(
    std::string Verb,
                                            int Pronoun_index) {
    if (Verb == "Coger") {
      return Coger_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Conocer") {
      return Conocer_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Haber") {
      return Haber_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Hacer") {
      return Hacer_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Pensar") {
      return Pensar_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Poder") {
      return Poder_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Poner") {
      return Poner_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Querer") {
      return Querer_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Saber") {
      return Saber_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Ser") {
      return Ser_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Tener") {
      return Tener_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Traer") {
      return Decir_Endings_Present_Tense[Pronoun_index];
    }
    if (Verb == "Ver") {
      return Ver_Endings_Present_Tense[Pronoun_index];
    }

    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(ER_Endings_Present_Tense[Pronoun_index]);
  }
std::string Verbs_Present_Tense::Generate_Present_Tense() {
    int index, verbs_index;
    Verbs_Present_Tense Present_tense;
    Verbs_Pronouns Pronoun;
    Verbs_Infinitve Verb;

    auto it = Verb.verbs_map.begin();
    std::advance(it, rand() % Verb.verbs_map.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();
    verbs_index = rand() % Verb.verbs_map.size();
    std::cout << "Present: " << Pronoun.pronouns[index] + " " + random_key
              << std::endl;
    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      return Present_tense.AR_Congrugation_Present_Tense(
          Verb.verbs_map[random_key], index);
    }
    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.IR_ending) {
      return Present_tense.IR_Congrugation_Present_Tense(
          Verb.verbs_map[random_key], index);
    }
    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending) {
      return Present_tense.ER_Congrugation_Present_Tense(
          Verb.verbs_map[random_key], index);
      
    }
    return 0;
}
