#include <iostream>
#include <vector>
#include <map>



class Verbs_Infinitve {
public:
  //std::vector<std::string> verbs_regular = {"Hablar", "Comer", "Vivir"};
  std::map<std::string, std::string>verbs_regular = {
      {"To Speak", "Hablar"},
      {"to Eat", "Comer"}, 
      {"To live", "Vivir"}};
  std::vector<std::string> verbs_nonregular = {"Estar", "Ir"};
};