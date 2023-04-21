#include <iostream>
#include <vector>
#include <map>



class Verbs_Infinitve {
public:
  //std::vector<std::string> verbs_regular = {"Hablar", "Comer", "Vivir"};
  std::map<std::string, std::string>verbs_regular = {
      {"To Speak", "Hablar"},
      {"To Eat", "Comer"}, 
      {"To Live", "Vivir"}};
  std::vector<std::string> verbs_nonregular = {"Estar", "Ir"};
};