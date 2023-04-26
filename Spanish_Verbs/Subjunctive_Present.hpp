
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Verbs_Subjunctive_Present {
public:
  std::string AR_Endings_Subjunctive_Present= {"ando"};
  std::string ER_IR_Endings_Subjunctive_Present = {"iendo"};

  std::string AR_Subjunctive_Present(std::string Verb);
  std::string ER_IR_Subjunctive_Presents(std::string Verb);
};