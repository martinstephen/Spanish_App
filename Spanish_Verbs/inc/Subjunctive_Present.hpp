
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Verbs_Subjunctive_Present {
public:
  std::vector<std::string> AR_Endings_Subjunctive_Present = {
      "e", "es", "e", "emos", "Sis", "en"};
  std::vector<std::string> ER_IR_Endings_Subjunctive_Present = {
      "a", "as", "a",                            "amos", "Sis", "an"};
  

  std::string AR_Subjunctive_Present(std::string Verb, int Pronoun_index) ;
  std::string ER_IR_Subjunctive_Presents(std::string Verb, int Pronoun_index) ;
};