
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Verbs_Future_Simple {
public:
  std::vector<std::string> Endings_Future_Simple = {"é",    "ás",  "á",
                                                    "emos", "éis", "án"};

  std::string Congrugation_Future_Simple(std::string Verb, int Pronoun_index) ;
};