#include <iostream>
#include "Dialog.hpp"

int Dialog::Inital_Dialog()
{
  int i = 0;
  int Number_of_rounds = 0;
  // std::cout << "In dialog:: ú í ó á é" << "\n"; // set seed for random number generation
  std::cout << "Enter the number of times you want to test each tense " << "\n";
  std::cin >> Number_of_rounds;
  std::cin.ignore();

  return Number_of_rounds;
}