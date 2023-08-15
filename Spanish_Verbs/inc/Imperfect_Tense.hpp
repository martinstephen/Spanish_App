
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Verbs_Imperfect {
public:
  std::vector<std::string> AR_Endings_Imperfect = {
      "aba", "abas", "aba", "ábamos", "abais", "aban"};
  std::vector<std::string> ER_IR_Endings_Imperfect = {
      "ía", "ías", "ía", "íamos", "íais", "ían"};
  std::vector<std::string> Ser_Endings_Imperfect_Tense = {"Era", " Eras"
                                            , " era ",
                                                        "Éramos", "Erais", "Eran"};
  std::vector<std::string> Ver_Endings_Imperfect_Tense = {"Veía",   "Veías", "Veía",
                                                        "Veíamos", "Veíais", "Veían"};
  std::vector<std::string> Ir_Endings_Imperfect_Tense = {"Iba",   "Ibas", "Iba",
                                                        "íbamos", "Ibais", "Iban"};

  std::string AR_Imperfect(std::string Verb, int Pronoun_index);
  std::string ER_IR_Imperfect(std::string Verb, int Pronoun_index);
  static std::string Generate_Imperfect();
};