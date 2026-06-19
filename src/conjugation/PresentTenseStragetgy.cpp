#include "conjugation/PresentTenseStrategy.hpp"
#include "conjugation/ConjugationStrategy.hpp"
#include <stdexcept>
#include <set>

std::string PresentTenseStrategy::conjugate(const std::string& verb, Pronoun pronoun) const {
    // Check for null/empty verb
    if (verb.empty()) {
        throw std::invalid_argument("Verb cannot be empty");
    }

    // Check if it's an irregular verb first
    // if (isIrregular(verb)) {
    //     try {
    //         return irregularVerbs.at(verb).at(static_cast<size_t>(pronoun));
    //     } catch (const std::out_of_range& e) {
    //         throw std::runtime_error("Invalid pronoun index for irregular verb: " + verb);
    //     }
    // }

    // Handle regular verbs
    try {
        std::string stem = ConjugationStrategy::getStem(verb);
        std::string ending = ConjugationStrategy::getEnding(verb, pronoun);
      
        // Handle stem-changing verbs (e->ie, o->ue, etc.)
        if (isStemChanging(verb)) {
            stem = applyStemChange(stem, pronoun);
        }

  return stem + ending;
    } catch (const std::exception& e) {
        throw std::runtime_error("Error conjugating verb '" + verb + "': " + e.what());
    }
}

bool PresentTenseStrategy::isStemChanging(const std::string& verb) const {
    // List of stem-changing verbs
    static const std::set<std::string> stemChangingVerbs = {
        "pensar",  // e->ie
        "querer",  // e->ie
        "poder",   // o->ue
        "dormir"   // o->ue
        // Add more as needed
    };
    
    return stemChangingVerbs.find(verb) != stemChangingVerbs.end();
}

std::string PresentTenseStrategy::applyStemChange(const std::string& stem, Pronoun pronoun) const {
    // Only apply stem changes to all forms except nosotros/vosotros
    if (pronoun == Pronoun::Nosotros || pronoun == Pronoun::Vosotros) {
        return stem;
    }

    // Apply specific stem changes
    // This is a simplified example - you'd want to add more rules
    if (stem.find("pens") != std::string::npos) {
        return "piens";
    } else if (stem.find("pod") != std::string::npos) {
        return "pued";
    }
    
    return stem;
}