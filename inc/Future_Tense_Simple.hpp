
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Verbs_Future_Simple {
public:
  std::vector<std::string> Endings_Future_Simple = {"a",    "as",  "a",
                                                    "emos", "as", "an"};

  std::string Conjugation_Future_Simple(std::string Verb, int Pronoun_index) ;
};