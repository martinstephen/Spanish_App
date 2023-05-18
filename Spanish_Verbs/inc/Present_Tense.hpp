#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


class Verbs_Present_Tense {
public:
  std::vector<std::string> AR_Endings_Present_Tense = {"o",    "as",  "a",
                                                       "amos", "áis", "an"};
  std::vector<std::string> ER_Endings_Present_Tense = {"o",    "es",  "e",
                                                       "emos", "éis", "en"};
  std::vector<std::string> IR_Endings_Present_Tense = {"o",    "es", "e",
                                                       "imos", "ís", "en"};
  std::vector<std::string> ESTAR_Endings_Present_Tense = {"oy",   "ás",  "á",
                                                          "amos", "áis", "án"};
  std::vector<std::string> Ir_Endings_Present_Tense = {
      "Voy", "Vas", "Va", "Vamous", "vameis", "Van"};

  std::string AR_Congrugation_Present_Tense(std::string Verb,
                                            int Pronoun_index);
  std::string IR_Congrugation_Present_Tense(std::string Verb,
                                            int Pronoun_index);
  std::string ER_Congrugation_Present_Tense(std::string Verb,
                                            int Pronoun_index);
};