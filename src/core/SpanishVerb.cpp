#include "core/SpanishVerb.hpp"
#include "conjugation/ConjugationStrategy.hpp"
#include "Pronouns.hpp"
#include "conjugation/PresentTenseStrategy.hpp"
#include <memory>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <iostream>

void setup();
int Checker(std::string);
int Dialog();


// ctor
SpanishVerb::SpanishVerb(std::string infinitive)
    : infinitive(std::move(infinitive)), strategy(nullptr) {}

// inject a strategy (e.g., PresentTenseStrategy)
void SpanishVerb::setStrategy(std::shared_ptr<ConjugationStrategy> s) {
    strategy = std::move(s);
}

// produce conjugated form; requires a strategy to be set
std::string SpanishVerb::conjugate(Pronoun p) const {
    if (!strategy) {
        throw std::runtime_error("Conjugation strategy not set for verb: " + infinitive);
    }
    return strategy->conjugate(infinitive, p);
}
void setup()
{
  //SetConsoleOutputCP(CP_UTF8); // set output for spanish characters
  srand(time(0));              // set seed for random number generation
  std::cout << "In setup:: ú í ó á é" << "\n";
}

int Dialog()
{
  int i = 0;
  int Number_of_rounds = 0;
  std::cout << "In dialog:: ú í ó á é" << "\n"; // set seed for random number generation
  std::cout << "Enter the number of times you want to test each tense " << "\n";
  std::cin >> Number_of_rounds;
  std::cin.ignore();

  return Number_of_rounds;
}

int main() {

     setup();
    // Create a verb object
    SpanishVerb hablar("hablar");
    SpanishVerb IR("ir");
    // Create the present tense strategy
    auto presentStrategy = std::make_shared<PresentTenseStrategy>();

    // Assign the strategy to the verb
    hablar.setStrategy(presentStrategy);
    IR.setStrategy(presentStrategy);

    // Conjugate for 'Yo'
    std::string yoForm = hablar.conjugate(Pronoun::Yo);
    std::cout << "Yo form: " << yoForm << std::endl; // expected "hablo"

     std::string yoIR = IR.conjugate(Pronoun::Yo);
    std::cout << "Yo form: " << yoIR << std::endl; // expected "voy"
    // Conjugate for 'Nosotros'
    std::string nosotrosForm = hablar.conjugate(Pronoun::Nosotros);
    std::cout << "Nosotros form: " << nosotrosForm << std::endl; // expected "hablamos"

    return 0;
}