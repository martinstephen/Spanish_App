#include <iostream>
#include <vector>
#include <map>



class Verbs_Infinitve {
public:
  std::string AR_ending = "ar";
  std::string ER_ending = "er";
  std::string IR_ending = "ir";
  int Get_last_2_Letters = 2;
  std::map<std::string, std::string> verbs_regular = {
          
                  {"to say", "decir"},
                  {"to come", "venir"},
          {"to see", "ver"},         {"to know(something)", "saber"},
          {"to want", "querer"},     {"to like", "gustar"},
          {"to love", "amar"},       {"to speak", "hablar"},
          {"to work", "trabajar"},   {"to study", "estudiar"},
          {"to play", "jugar"},      {"to live", "vivir"},
          {"to eat", "comer"},       {"to drink", "beber"},
          {"to sleep", "dormir"},    {"to run", "correr"},
          {"to walk", "caminar"},    {"to swim", "nadar"},
          {"to read", "leer"},       {"to write", "escribir"},
          {"to listen", "escuchar"}, {"to sing", "cantar"},
          {"to dance", "bailar"}};
  std::vector<std::string> verbs_nonregular = {"Estar", "Ir"};
};