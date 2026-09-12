
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "Pronouns.hpp"

class Verbs_Future_Simple {
public:
  std::vector<std::string> Endings_Future_Simple = {"é",    "ás",  "á",
                                                    "emos", "éis", "án"};

  std::string Conjugation_Future_Simple(std::string Verb, Pronoun pronoun) ;
};