// Spanish_Verbs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Spanish_Verbs.hpp"
#include <cstdlib>
#include <ctime>


class Verbs_Infinitve {
public:
    std::vector <std::string> verbs_regular = {"Hablar", "Comer", "Vivir"};
    std::vector <std::string> verbs_nonregular;
};
class Verbs_Pronouns {
public:
    std::vector <std::string> pronouns = { "Yo", "Tú", "Él/Ella/Usted", "Nosostros/as", "Vosostros/as", "Ellos/Ellas/Ustedes" };
};

class Verbs_Present_Tense {
public:

    std::vector <std::string> AR_Endings_Present_Tense = { "o", "as","a","amos", "áis", "an" };
    std::vector <std::string> ER_Endings_Present_Tense = { "o", "es","e","emos", "éis", "en" };
    std::vector <std::string> IR_Endings_Present_Tense = { "o", "es","e","imos", "ís", "en" };
    std::string AR_Congrugation_Present_Tense(std::string Verb, std::string Pronoun);
    std::string ER_Congrugation_Present_Tense(std::string Verb, std::string Pronoun);
    std::string IR_Congrugation_Present_Tense(std::string Verb, std::string Pronoun);


    std::string AR_Congrugation_Present_Tense(std::string Verb, int Pronoun_index) {
     
        Verb.pop_back();
        Verb.pop_back();
        return Verb.append(AR_Endings_Present_Tense[Pronoun_index]);

    }
    std::string IR_Congrugation_Present_Tense(std::string Verb, int Pronoun_index) {

        Verb.pop_back();
        Verb.pop_back();
        return Verb.append(IR_Endings_Present_Tense[Pronoun_index]);

    }
    std::string ER_Congrugation_Present_Tense(std::string Verb, int Pronoun_index) {

        Verb.pop_back();
        Verb.pop_back();
        return Verb.append(ER_Endings_Present_Tense[Pronoun_index]);

    }
};
int main()
{
    setlocale(LC_ALL, "Spanish"); // allows spainish characters
    srand(time(0));
    Verbs_Present_Tense Present_tense;
    Verbs_Pronouns Pronoun;
    Verbs_Infinitve Verb;
    int index,verbs_index;
    for (int i = 0; i< 10; i++)
    {
         index = rand() % 6;
         verbs_index = rand() % 2;
         std::cout << Pronoun.pronouns[index] << " " << Present_tense.AR_Congrugation_Present_Tense("hablar", index) << std::endl;
         std::cout << Pronoun.pronouns[index] << " " << Present_tense.IR_Congrugation_Present_Tense("Vivir", index) << std::endl;
         std::cout << Pronoun.pronouns[index] << " " << Present_tense.ER_Congrugation_Present_Tense("Comer", index) << std::endl;

    }
}

