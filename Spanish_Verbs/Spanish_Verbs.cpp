// Spanish_Verbs.cpp : This file contains the 'main' function. Program execution
// begins and ends there.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <map>
#include <vector>

#include "Present_Continous.hpp"
#include "Present_Tense.hpp"
#include "Future_Tense_Simple.hpp"
#include "Pronouns.hpp"
#include "Verbs_Infinitive.hpp"

void setup();
void Generate_Present_Tense();
void Generate_Present_Continous();
void Generate_Future_Simple();

int main() {
  setup();
  Generate_Present_Tense();
  Generate_Present_Continous();
  Generate_Future_Simple();
}
void setup() {
  setlocale(LC_ALL, "Spanish"); // allows spainish characters to be printed
  srand(time(0));
}

void Generate_Future_Simple() {
  int index;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  Verbs_Future_Simple Future_Simple;
  for (int i = 0; i < 10; i++) {
    auto it = Verb.verbs_regular.begin();
    std::advance(it, rand() % Verb.verbs_regular.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();

  
      std::cout
          << Pronoun.pronouns[index] << " "
         
          << Future_Simple.Congrugation_Future_Simple(
                     Verb.verbs_regular[random_key], index)
          << std::endl;
    }
  }
  void Generate_Present_Continous() {
  int index;
  std::string AR_ending = "ar";
  std::string ER_ending = "er";
  std::string IR_ending = "ir";
  int Get_last_2_Letters = 2;
  Verbs_Present_Continuous Verbs_Present_Continuous;
  Verbs_Present_Tense Verbs_Present_Tense;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  for (int i = 0; i < 10; i++) {
    auto it = Verb.verbs_regular.begin();
    std::advance(it, rand() % Verb.verbs_regular.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();
    
    ;
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Get_last_2_Letters) == AR_ending) {
      std::cout << Pronoun.pronouns[index] << " "
                << Verbs_Present_Tense.AR_Congrugation_Present_Tense("Estar",
                                                                     index)
                << " "
                << Verbs_Present_Continuous.AR_Congrugation_Present_Continous(
                       Verb.verbs_regular[random_key])
                << std::endl;
    }
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Get_last_2_Letters) == ER_ending
      ||
       it->second.substr(Verb.verbs_regular[random_key].length() -
                          Get_last_2_Letters) == ER_ending) {
      std::cout
          << Pronoun.pronouns[index] << " "
          << Verbs_Present_Tense.AR_Congrugation_Present_Tense("Estar", index)
          << " "
          << Verbs_Present_Continuous.ER_IR_Congrugation_Present_Continous(
                 Verb.verbs_regular[random_key])
          << std::endl;
    }
  }
}
void Generate_Present_Tense() {
  int index, verbs_index;
  std::string AR_ending = "ar";
  std::string ER_ending = "er";
  std::string IR_ending = "ir";
  int Get_last_2_Letters = 2;
  Verbs_Present_Tense Present_tense;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;  
  for (int i = 0; i < 10; i++) {
    auto it = Verb.verbs_regular.begin();
    std::advance(it, rand() % Verb.verbs_regular.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();
    verbs_index = rand() % Verb.verbs_regular.size();
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Get_last_2_Letters) == AR_ending) {
      std::cout << Pronoun.pronouns[index] << " "
                << Present_tense.AR_Congrugation_Present_Tense(
                       Verb.verbs_regular[random_key], index)
                << std::endl;
    }
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Get_last_2_Letters) == IR_ending) {
      std::cout << Pronoun.pronouns[index] << " "
                << Present_tense.IR_Congrugation_Present_Tense(
                       Verb.verbs_regular[random_key], index)
                << std::endl;
    }
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Get_last_2_Letters) == ER_ending) {
      std::cout << Pronoun.pronouns[index] << " "
                << Present_tense.ER_Congrugation_Present_Tense(
                       Verb.verbs_regular[random_key], index)
                << std::endl;
    }
  }
}
