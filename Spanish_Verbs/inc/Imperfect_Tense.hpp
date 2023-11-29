
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Verbs_Imperfect {
public:
  std::vector<std::string> AR_Endings_Imperfect = {
      "aba", "abas", "aba", "Abamos", "abais", "aban"};
  std::vector<std::string> ER_IR_Endings_Imperfect = {
      "aa", "aas", "aa", "Aamos", "Aais", "Aan"};
  std::vector<std::string> Ser_Endings_Imperfect_Tense = {"Era", " Eras"
                                            , " era ",
                                                        "qramos", "Erais", "Eran"};
  std::vector<std::string> Ver_Endings_Imperfect_Tense = {"Veqa",   "Veqas", "Veqa",
                                                        "Veqamos", "Veqais", "Veqn"};
  std::vector<std::string> Ir_Endings_Imperfect_Tense = {"Iba",   "Ibas", "Iba",
                                                        "qbamos", "Ibais", "Iban"};

  std::string AR_Imperfect(std::string Verb, int Pronoun_index);
  std::string ER_IR_Imperfect(std::string Verb, int Pronoun_index);
  static std::string Generate_Imperfect();
};