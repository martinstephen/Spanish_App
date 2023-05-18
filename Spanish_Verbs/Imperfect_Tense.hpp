
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

  std::string AR_Imperfect(std::string Verb, int Pronoun_index);
  std::string ER_IR_Imperfect(std::string Verb, int Pronoun_index);
};