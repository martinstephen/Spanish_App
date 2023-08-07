// Spanish_Verbs.cpp : This file contains the 'main' function. 


#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <clocale>
#include <windows.h> 

#include "Present_Continous.hpp"
#include "Present_Tense.hpp"
#include "Future_Tense_Simple.hpp"
#include "Pronouns.hpp"
#include "Verbs_Infinitive.hpp"
#include "Subjunctive_Present.hpp"
#include "Imperfect_Tense.hpp"
#include "Indefinite_Tense.hpp"

void setup();
std::string Generate_Present_Continous();
std::string Generate_Future_Simple();
std::string Generate_Subjunctive_Present();
std::string Generate_Imperfect();
std::string Generate_Indefinite();
int Checker(std::string);


int main() {
  setup();
   int i = 0;
  int Number_of_rounds;
  std::cout << "Enter the number of times you want to test each tense "<< std::endl;
  std::cin >> Number_of_rounds;
  std::cout << "Hit enter to start " << std::endl;
  
  while (i < Number_of_rounds) {
    i++;
    Checker(Verbs_Present_Tense::Generate_Present_Tense());
    //Checker(Generate_Present_Tense_Irregular());
    //Checker(Generate_Present_Continous());
    //Checker(Generate_Future_Simple());
    //Checker(Generate_Subjunctive_Present());
    //Checker(Generate_Imperfect());
    //Checker(Generate_Indefinite());
  }
  return 0;

}
void setup() {
  SetConsoleCP(1252);       // input
  SetConsoleOutputCP(1252); // output
  setlocale(LC_ALL, "Spanish"); // allows spainish characters to be printed
  srand(time(0)); //set seed for random number generation
}


int Checker(std::string Verb_input) { 
    std::string input;
    std::getline (std::cin, input);
    std::cout << "The Answer:" << Verb_input << std::endl;
    std::cout << "What was entered: " << input << std::endl;
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);
    std::transform(Verb_input.begin(), Verb_input.end(), Verb_input.begin(),
                   ::tolower);
    if (input == Verb_input)
    {
      std::cout << "SUCCESSS" << std::endl;
      return 1;
    }
    std::cout << "FAILURE" << std::endl;
    return 0;
}
std::string Generate_Indefinite() {
  int index;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  Verbs_Indefinite Indefinite;
  
    std::map<std::string, std::string>::iterator it = Verb.verbs_map.begin();
    std::advance(it, rand() % Verb.verbs_map.size());
    std::cout << it->first << std::endl;
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();
    std::string Generated_verb;

    std::cout << "Indefinite: "
              << Pronoun.pronouns[index] + " " + random_key
              << std::endl;

    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      Generated_verb=   Indefinite.AR_Indefinte(Verb.verbs_map[random_key], index);
    std::cout << Generated_verb << std::endl;
      return Generated_verb;
    }
    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.IR_ending ||
        it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending) {
      return Indefinite.ER_IR_Indefinite(Verb.verbs_map[random_key], index);
    }
  
  return "Fail";
}
std::string Generate_Imperfect() {
  int index;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  Verbs_Imperfect Imperfect;
  int Get_last_2_Letters = 2;

    auto it = Verb.verbs_map.begin();
    std::advance(it, rand() % Verb.verbs_map.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();
    std::cout << "Imperfect: "
             << Pronoun.pronouns[index] + " " +
                     random_key              << std::endl;

    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      return  Imperfect.AR_Imperfect(Verb.verbs_map[random_key], index);
    }
    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.IR_ending ||
        it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending) {
      return Imperfect.ER_IR_Imperfect(Verb.verbs_map[random_key], index);
    }
  
  return "Fail";
}
std::string Generate_Subjunctive_Present() {
  int index;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  Verbs_Subjunctive_Present Subjunctive_Present;

 
    auto it = Verb.verbs_map.begin();
    std::advance(it, rand() % Verb.verbs_map.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();
    std::cout << "Subjunctive: "
              << Pronoun.pronouns[index] + " " + random_key
              << std::endl;
    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      return Subjunctive_Present.AR_Subjunctive_Present(
                   Verb.verbs_map[random_key], index);
    }
    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.IR_ending ||
        it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending) {
      return Subjunctive_Present.ER_IR_Subjunctive_Presents(
                   Verb.verbs_map[random_key], index);
    
    return 0;
  }
}
std::string Generate_Future_Simple() {
  int index;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  Verbs_Future_Simple Future_Simple;

    auto it = Verb.verbs_map.begin();
    std::advance(it, rand() % Verb.verbs_map.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();

     std::cout << "Future: " << Pronoun.pronouns[index] + " " +
                        random_key
              << std::endl;

  
      return Future_Simple.Congrugation_Future_Simple(
                 Verb.verbs_map[random_key], index);
    return 0;
    
  }
std::string Generate_Present_Continous() {
  int index;
  Verbs_Present_Continuous Verbs_Present_Continuous;
  Verbs_Present_Tense Verbs_Present_Tense;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  
    auto it = Verb.verbs_map.begin();
    std::advance(it, rand() % Verb.verbs_map.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();
    std::string output;
    std::cout << "Present Continous: " << Pronoun.pronouns[index] + " " +
                       random_key
              << std::endl;
    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      return 
          Verbs_Present_Tense.AR_Congrugation_Present_Tense("Estar", index) +
          " " +
          Verbs_Present_Continuous.AR_Congrugation_Present_Continous(
              Verb.verbs_map[random_key]);
               
    }
    if (it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending
      ||
       it->second.substr(Verb.verbs_map[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending) {
      return
            Verbs_Present_Tense.AR_Congrugation_Present_Tense("Estar", index)
          + " "
          + Verbs_Present_Continuous.ER_IR_Congrugation_Present_Continous(
                 Verb.verbs_map[random_key])
          ;
    }
  
}
