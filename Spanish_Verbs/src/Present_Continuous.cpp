#include <iostream>
#include <vector>
#include "../inc/Present_Continous.hpp"
#include <cstdlib>
#include <ctime>
  std::string Verbs_Present_Continuous::AR_Congrugation_Present_Continous(std::string Verb) {

    Verb.pop_back();
    Verb.pop_back();
    return Verb.append(AR_Endings_Present_Continous);
  }
  std::string Verbs_Present_Continuous::ER_IR_Congrugation_Present_Continous(
      std::string Verb) {

      if (Verb == "ir")
      {
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