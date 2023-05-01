// Spanish_Verbs.cpp : This file contains the 'main' function. Program execution
// begins and ends there.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <map>
#include <vector>
#include <string>

#include "Present_Continous.hpp"
#include "Present_Tense.hpp"
#include "Future_Tense_Simple.hpp"
#include "Pronouns.hpp"
#include "Verbs_Infinitive.hpp"
#include "Subjunctive_Present.hpp"
#include "Imperfect_Tense.hpp"
#include "Indefinite_Tense.hpp"

void setup();
std::string Generate_Present_Tense();
std::string Generate_Present_Continous();
std::string Generate_Future_Simple();
std::string Generate_Subjunctive_Present();
std::string Generate_Imperfect();
std::string Generate_Indefinite();
int Checker(std::string);


int main() {
  setup();
  Checker(Generate_Present_Tense());
  Checker(Generate_Present_Continous());
  Checker(Generate_Future_Simple());
  Checker(Generate_Subjunctive_Present());
  Checker(Generate_Imperfect());
  Checker(Generate_Indefinite());
}
void setup() {
  setlocale(LC_ALL, "Spanish"); // allows spainish characters to be printed
  srand(time(0)); //set seed for random number generation
}


int Checker(std::string Verb_input) { 
    std::string input;
    std::getline (std::cin, input);
    std::cout << Verb_input  << std::endl;
    std::cout << input << std::endl;
    if (input == Verb_input) {

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
  for (int i = 0; i < 10; i++) {
    auto it = Verb.verbs_regular.begin();
    std::advance(it, rand() % Verb.verbs_regular.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();
    std::string Generated_verb;

    std::cout << Pronoun.pronouns[index] + " " + Verb.verbs_regular[random_key]
              << std::endl;

    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      Generated_verb=  Pronoun.pronouns[index] + " "

             + Indefinite.AR_Indefinte(Verb.verbs_regular[random_key], index);
    std::cout << Generated_verb << std::endl;
      return Generated_verb;
    }
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.IR_ending ||
        it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending) {
      return Pronoun.pronouns[index] + " "

          + Indefinite.ER_IR_Indefinite(Verb.verbs_regular[random_key], index);
    }
  }
  return 0;
}
std::string Generate_Imperfect() {
  int index;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  Verbs_Imperfect Imperfect;
  int Get_last_2_Letters = 2;
  for (int i = 0; i < 10; i++) {
    auto it = Verb.verbs_regular.begin();
    std::advance(it, rand() % Verb.verbs_regular.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();

    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      return Pronoun.pronouns[index] + " "

             + Imperfect.AR_Imperfect(Verb.verbs_regular[random_key], index);
    }
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.IR_ending ||
        it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending) {
      return Pronoun.pronouns[index] + " "

             + Imperfect.ER_IR_Imperfect(Verb.verbs_regular[random_key], index);
    }
  }
  return 0;
}
std::string Generate_Subjunctive_Present() {
  int index;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  Verbs_Subjunctive_Present Subjunctive_Present;
  int Get_last_2_Letters = 2;
  for (int i = 0; i < 10; i++) {
    auto it = Verb.verbs_regular.begin();
    std::advance(it, rand() % Verb.verbs_regular.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();

    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      return Pronoun.pronouns[index] + " "

             + Subjunctive_Present.AR_Subjunctive_Present(
                   Verb.verbs_regular[random_key], index);
    }
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.IR_ending ||
        it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending) {
      return Pronoun.pronouns[index] + " "

             + Subjunctive_Present.ER_IR_Subjunctive_Presents(
                   Verb.verbs_regular[random_key], index);
    }
    return 0;
  }
}
std::string Generate_Future_Simple() {
  int index;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  Verbs_Future_Simple Future_Simple;
  for (int i = 0; i < 10; i++) {
    auto it = Verb.verbs_regular.begin();
    std::advance(it, rand() % Verb.verbs_regular.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();

  
      return Pronoun.pronouns[index] + " "

           + Future_Simple.Congrugation_Future_Simple(
                 Verb.verbs_regular[random_key], index);
    return 0;
    }
  }
std::string Generate_Present_Continous() {
  int index;
  Verbs_Present_Continuous Verbs_Present_Continuous;
  Verbs_Present_Tense Verbs_Present_Tense;
  Verbs_Pronouns Pronoun;
  Verbs_Infinitve Verb;
  for (int i = 0; i < 10; i++) {
    auto it = Verb.verbs_regular.begin();
    std::advance(it, rand() % Verb.verbs_regular.size());
    std::string random_key = it->first;
    index = rand() % Pronoun.pronouns.size();
    std::string output;
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      return 
          Pronoun.pronouns[index] + " " +
          Verbs_Present_Tense.AR_Congrugation_Present_Tense("Estar", index) +
          " " +
          Verbs_Present_Continuous.AR_Congrugation_Present_Continous(
              Verb.verbs_regular[random_key]);
               
    }
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending
      ||
       it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending) {
      return
           Pronoun.pronouns[index] + " "
          + Verbs_Present_Tense.AR_Congrugation_Present_Tense("Estar", index)
          + " "
          + Verbs_Present_Continuous.ER_IR_Congrugation_Present_Continous(
                 Verb.verbs_regular[random_key])
          ;
    }
  }
}
std::string Generate_Present_Tense() {
  int index, verbs_index;
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
                          Verb.Get_last_2_Letters) == Verb.AR_ending) {
      return Pronoun.pronouns[index] + " "
                + Present_tense.AR_Congrugation_Present_Tense(
                       Verb.verbs_regular[random_key], index)
                ;
    }
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.IR_ending) {
      return Pronoun.pronouns[index] + " "
                + Present_tense.IR_Congrugation_Present_Tense(
                       Verb.verbs_regular[random_key], index)
                ;
    }
    if (it->second.substr(Verb.verbs_regular[random_key].length() -
                          Verb.Get_last_2_Letters) == Verb.ER_ending) {
      return Pronoun.pronouns[index] + " " +
             Present_tense.ER_Congrugation_Present_Tense(
                 Verb.verbs_regular[random_key], index);
      return 0;
    }
  }
}
