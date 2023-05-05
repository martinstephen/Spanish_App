
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

  std::string AR_Imperfect(std::string Verb, int Pronoun_index);
  std::string ER_IR_Imperfect(std::string Verb, int Pronoun_index);
};