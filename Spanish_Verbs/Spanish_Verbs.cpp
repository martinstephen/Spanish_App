// Spanish_Verbs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Spanish_Verbs.hpp"
#include <cstdlib>
#include <ctime>
//using namespace std;

class Verbs {
public:
    std::vector <std::string> pronouns = { "Yo", "Tu", "El / Elle / Usted", "Nosostros / as", "Vosostros / as", "Ellos / Ellas / Ustedes" };
    std::vector <std::string> verbs_regular;
    std::vector <std::string> verbs_nonregular;
    std::string AR_Congrugation( std::string Verb, std::string Pronoun );
    std::vector <std::string> IR_Congrugation( std::string Verb );
    std::vector <std::string> ER_Congrugation( std::string Verb );


};
std::string get_regular_root(std::string Verb)
{
    Verb.pop_back();
    Verb.pop_back();
    return Verb;


}

int main()
{
    srand(time(0));
    Verbs Test;
    int index;
    for (int i = 0; i< 10; i++)
    {
         index = rand() % 6;
         std::cout << Test.pronouns[index] << std::endl;
    }
    get_regular_root("cambinar");
    get_regular_root("hablar");
}

