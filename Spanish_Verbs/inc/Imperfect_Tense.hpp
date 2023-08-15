
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Verbs_Imperfect {
public:
  std::vector<std::string> AR_Endings_Imperfect = {
      "aba", "abas", "aba", "�bamos", "abais", "aban"};
  std::vector<std::string> ER_IR_Endings_Imperfect = {
      "�a", "�as", "�a", "�amos", "�ais", "�an"};
  std::vector<std::string> Ser_Endings_Imperfect_Tense = {"Era", " Eras"
                                            , " era ",
                                                        "�ramos", "Erais", "Eran"};
  std::vector<std::string> Ver_Endings_Imperfect_Tense = {"Ve�a",   "Ve�as", "Ve�a",
                                                        "Ve�amos", "Ve�ais", "Ve�an"};
  std::vector<std::string> Ir_Endings_Imperfect_Tense = {"Iba",   "Ibas", "Iba",
                                                        "�bamos", "Ibais", "Iban"};

  std::string AR_Imperfect(std::string Verb, int Pronoun_index);
  std::string ER_IR_Imperfect(std::string Verb, int Pronoun_index);
  static std::string Generate_Imperfect();
};