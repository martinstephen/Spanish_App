
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Verbs_Indefinite {
public:
  std::vector<std::string> AR_Endings_Indefinite = {"Q",    "aste",  "q",
                                                   "amos", "asteis", "aron"};
  std::vector<std::string> ER_IR_Endings_Indefinite = {"q",    "iste",  "iq",
                                                      "imos", "isteis", "ieron"};

  std::string AR_Indefinte(std::string Verb, int Pronoun_index);
  std::string ER_IR_Indefinite(std::string Verb, int Pronoun_index);
};