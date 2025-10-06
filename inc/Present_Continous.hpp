
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Verbs_Present_Continuous {
public:
  std::string AR_Endings_Present_Continous = {"ando"};
  std::string ER_IR_Endings_Present_Continous = {"iendo"};

  std::string Ir_Present_Continous = {"Yendo"};
  std::string Leer_Present_Continous = {"Leyendo"};
  std::string Creer_Present_Continous = {"Creyendo"};
  std::string Oír_Present_Continous = {"Oyendo"};
  std::string Traer_Present_Continous = {"Trayendo"};
  std::string Pedir_Present_Continous = {"Pidiendo"};
  std::string Venir_Present_Continous = {"Viniendo"};
  std::string Decir_Present_Continous = {"Diciendo"};

  std::string AR_Conjugation_Present_Continous(std::string Verb);
  std::string ER_IR_Conjugation_Present_Continous(std::string Verb);

  static std::string Generate_Present_Continous();
};