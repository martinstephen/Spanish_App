#include "core/SpanishVerb.hpp"
#include "conjugation/ConjugationStrategy.hpp"
#include "core/Pronoun.hpp"   // adjust include path to match your headers
#include <memory>
#include <stdexcept>

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

int main() {
    // Create a verb object
    SpanishVerb hablar("hablar");

    // Create the present tense strategy
    auto presentStrategy = std::make_shared<PresentTenseStrategy>();

    // Assign the strategy to the verb
    hablar.setStrategy(presentStrategy);

    // Conjugate for 'Yo'
    std::string yoForm = hablar.conjugate(Pronoun::Yo);
    std::cout << "Yo form: " << yoForm << std::endl; // expected "hablo"

    // Conjugate for 'Nosotros'
    std::string nosotrosForm = hablar.conjugate(Pronoun::Nosotros);
    std::cout << "Nosotros form: " << nosotrosForm << std::endl; // expected "hablamos"

    return 0;
}