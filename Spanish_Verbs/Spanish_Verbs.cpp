// Spanish_Verbs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Present_Tense.hpp"
#include "Present_Continous.hpp"
#include <cstdlib>
#include <ctime>

void Generate_Present_Tense();
void Generate_Present_Continous();

class Verbs_Infinitve {
public:
    std::vector <std::string> verbs_regular = {"Hablar", "Comer", "Vivir"};
    std::vector <std::string> verbs_nonregular = { "Estar" ,"Ir"};
};
class Verbs_Pronouns {
public:
    std::vector <std::string> pronouns = { "Yo", "T�", "�l/Ella/Usted", "Nosostros/as", "Vosostros/as", "Ellos/Ellas/Ustedes" };
};

int main()
{
    setlocale(LC_ALL, "Spanish"); // allows spainish characters
    srand(time(0));
    Generate_Present_Tense();
    Generate_Present_Continous();
    
}
void Generate_Present_Continous() {
    int index, verbs_index;
    std::string AR_ending = "ar";
    std::string ER_ending = "er";
    std::string IR_ending = "ir";
    int Get_last_2_Letters = 2;
    Verbs_Present_Continuous Verbs_Present_Continuous;
    Verbs_Present_Tense Verbs_Present_Tense;
    Verbs_Pronouns Pronoun;
    Verbs_Infinitve Verb;
    for (int i = 0; i < 100; i++)
    {
        index = rand() % Pronoun.pronouns.size();
        verbs_index = rand() % Verb.verbs_regular.size();
        if (Verb.verbs_regular[verbs_index].substr(Verb.verbs_regular[verbs_index].length() - Get_last_2_Letters) == AR_ending)
        {
            std::cout << Pronoun.pronouns[index] << " " << Verbs_Present_Tense.AR_Congrugation_Present_Tense("Estar", index) << " " << Verbs_Present_Continuous.AR_Congrugation_Present_Continous(Verb.verbs_regular[verbs_index]) << std::endl;
        }
        if (Verb.verbs_regular[verbs_index].substr(Verb.verbs_regular[verbs_index].length() - Get_last_2_Letters) == ER_ending ||
            Verb.verbs_regular[verbs_index].substr(Verb.verbs_regular[verbs_index].length() - Get_last_2_Letters) == IR_ending
            )
        {
            std::cout << Pronoun.pronouns[index] << " " << Verbs_Present_Tense.AR_Congrugation_Present_Tense("Estar", index) << " "<<  Verbs_Present_Continuous.ER_IR_Congrugation_Present_Continous(Verb.verbs_regular[verbs_index]) << std::endl;
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
    for (int i = 0; i < 100; i++)
    {
        index = rand() % Pronoun.pronouns.size();
        verbs_index = rand() % Verb.verbs_regular.size();
        if (Verb.verbs_regular[verbs_index].substr(Verb.verbs_regular[verbs_index].length() - Get_last_2_Letters) == AR_ending)
        {
            std::cout << Pronoun.pronouns[index] << " " << Present_tense.AR_Congrugation_Present_Tense(Verb.verbs_regular[verbs_index], index) << std::endl;
        }
        if (Verb.verbs_regular[verbs_index].substr(Verb.verbs_regular[verbs_index].length() - Get_last_2_Letters) == ER_ending)
        {
            std::cout << Pronoun.pronouns[index] << " " << Present_tense.ER_Congrugation_Present_Tense(Verb.verbs_regular[verbs_index], index) << std::endl;
        }
        if (Verb.verbs_regular[verbs_index].substr(Verb.verbs_regular[verbs_index].length() - Get_last_2_Letters) == IR_ending)
        {
            std::cout << Pronoun.pronouns[index] << " " << Present_tense.IR_Congrugation_Present_Tense(Verb.verbs_regular[verbs_index], index) << std::endl;
        }


    }
}

