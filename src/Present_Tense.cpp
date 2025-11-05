#include <iostream>
#include <vector>

#include <cstdlib>
#include <ctime>


#include "Verbs_Infinitive.hpp"
#include "Present_Tense.hpp"
#include "String_Helper.hpp"


std::string Verbs_Present_Tense::AR_Conjugation_Present_Tense(std::string Verb, Pronoun pronoun) {
  if (Verb == "Estar") {
  
    return Estar_Endings_Present_Tense[static_cast<int>(pronoun)];
  }
  if (Verb == "Dar") {
    return Dar_Endings_Present_Tense[static_cast<int>(pronoun)];
  }
  if (Verb == "Pensar") {
    return Pensar_Endings_Present_Tense[static_cast<int>(pronoun)];
  }
    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(AR_Endings_Present_Tense[static_cast<int>(pronoun)]);
  }
// std::string Verbs_Present_Tense::IR_Conjugation_Present_Tense(std::string Verb,
//                                             Pronoun pronoun) {
//     if (Verb == "ir") {
//       Verb.append(Ir_Endings_Present_Tense[static_cast<int>(pronoun)];
//       return Verb.erase(0, 2);
//     }
//     if (Verb == "Decir") {
//       return Decir_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Pedir") {
//       return Pedir_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Salir") {
//       return Salir_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Venir") {
//       return Venir_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Oír") {
//       return Oír_Endings_Present_Tense[pronoun];
//     }

//     Verb.pop_back();
//     Verb.pop_back();
//     return Verb.append(IR_Endings_Present_Tense[static_cast<int>(pronoun)];
//   }
// std::string Verbs_Present_Tense::ER_Conjugation_Present_Tense(
//     std::string Verb,
//                                             Pronoun pronoun) {
//     if (Verb == "Coger") {
//       return Coger_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Conocer") {
//       return Conocer_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Haber") {
//       return Haber_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Hacer") {
//       return Hacer_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Pensar") {
//       return Pensar_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Poder") {
//       return Poder_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Poner") {
//       return Poner_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Querer") {
//       return Querer_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Saber") {
//       return Saber_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Ser") {
//       return Ser_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Tener") {
//       return Tener_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Traer") {
//       return Traer_Endings_Present_Tense[pronoun];
//     }
//     if (Verb == "Ver") {
//       return Ver_Endings_Present_Tense[pronoun];
//     }

//     Verb.pop_back();
//     Verb.pop_back();
//     return Verb.append(ER_Endings_Present_Tense[static_cast<int>(pronoun)];
//   }
std::string Verbs_Present_Tense::Generate_Present_Tense() {
    std::string End_of_Func = "End of Function";
    int index, verbs_index;
    Verbs_Present_Tense Present_tense;
   // Verbs_Pronouns Pronoun;
    Verbs_Infinitve Verb;

    auto it = Verb.verbs_map.begin();
    std::advance(it, rand() % Verb.verbs_map.size());
    std::string random_key = it->first;
    int random_index = rand() % static_cast<int>(Pronoun::Count);
    Pronoun random_pronoun = static_cast<Pronoun>(random_index);
    verbs_index = rand() % Verb.verbs_map.size();
    std::cout << "Present: " << pronounToString(random_pronoun)+ " " + random_key
              << std::endl;
    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      return Present_tense.AR_Conjugation_Present_Tense(
          Verb.verbs_map[random_key], random_pronoun);
    }
    // if (it->second.substr(Verb.verbs_map[random_key].length() -
    //                       Verb.Get_last_2_Letters) == Verb.IR_ending) {
    //   return Present_tense.IR_Conjugation_Present_Tense(
    //       Verb.verbs_map[random_key], random_pronoun);
    // }
    // if (it->second.substr(Verb.verbs_map[random_key].length() -
    //                       Verb.Get_last_2_Letters) == Verb.ER_ending) {
    //   return Present_tense.ER_Conjugation_Present_Tense(
    //       Verb.verbs_map[random_key], random_pronoun);
      
    //}
    return End_of_Func; // should never return this
}
