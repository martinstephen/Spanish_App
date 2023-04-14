// Spanish_Verbs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Spanish_Verbs.hpp"
//using namespace std;

class Verbs {
    std::vector <std::string> pronouns = { "Yo", "Tu", "El / Elle / Usted", "Nosostros / as", "Vosostros / as", "Ellos / Ellas / Ustedes" };
    std::vector <std::string> verbs_regular;
    std::vector <std::string> verbs_nonregular;
    std::vector <std::string> AR_Congrugation( std::string Verb );
    std::vector <std::string> IR_Congrugation( std::string Verb );
    std::vector <std::string> ER_Congrugation( std::string Verb );

};

int main()
{
    std::cout << "Hello World!\n";
}

