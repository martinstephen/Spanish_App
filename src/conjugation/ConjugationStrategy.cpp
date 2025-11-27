#include "conjugation/ConjugationStrategy.hpp"
#include <stdexcept>
#include <vector>

std::string ConjugationStrategy::getStem(const std::string& verb) const {
    if (verb.length() < 2) {
        throw std::invalid_argument("Verb must be at least 2 characters long");
    }
    // Remove the last two characters (ar, er, or ir ending)
    return verb.substr(0, verb.length() - 2);
}

bool ConjugationStrategy::isIrregular(const std::string& verb) const {
    // Check if verb is in the irregular verbs map
    return irregularVerbs.find(verb) != irregularVerbs.end();
}

std::string ConjugationStrategy::getEnding(const std::string& verb, Pronoun pronoun) const {
    // Check if verb exists in irregular verbs map
    if (isIrregular(verb)) {
        return irregularVerbs.at(verb).at(static_cast<size_t>(pronoun));
    }

    // Get regular ending based on verb type (ar, er, ir)
    std::string ending = verb.substr(verb.length() - 2);
    if (ending == "ar") {
        return arEndings.at(static_cast<size_t>(pronoun));
    } else if (ending == "er") {
        return erEndings.at(static_cast<size_t>(pronoun));
    } else if (ending == "ir") {
        return irEndings.at(static_cast<size_t>(pronoun));
    }

    throw std::invalid_argument("Invalid verb ending");
}

void ConjugationStrategy::addIrregularVerb(const std::string& verb, 
                                         const std::vector<std::string>& conjugations) {
    if (conjugations.size() != static_cast<size_t>(Pronoun::Count)) {
        throw std::invalid_argument("Invalid number of conjugations provided");
    }
    irregularVerbs[verb] = conjugations;
}