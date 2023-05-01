#include <iostream>
#include <vector>
#include <map>



class Verbs_Infinitve {
public:
  std::string AR_ending = "ar";
  std::string ER_ending = "er";
  std::string IR_ending = "ir";
  int Get_last_2_Letters = 2;
  std::map<std::string, std::string>verbs_regular = {
      {"To Speak", "Hablar"},
      {"To Eat", "Comer"}, 
      {"To Live", "Vivir"}};
  std::vector<std::string> verbs_nonregular = {"Estar", "Ir"};
};