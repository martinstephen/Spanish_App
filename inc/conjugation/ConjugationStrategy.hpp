#ifndef CONJUGATION_STRATEGY_HPP
#define CONJUGATION_STRATEGY_HPP    
        
#include <string>
#include <vector>
#include <map>
#include "Pronouns.hpp"

class ConjugationStrategy {
public:
    virtual ~ConjugationStrategy() = default;
    virtual std::string conjugate(const std::string& verb, Pronoun p) const = 0;
    std::string getStem(const std::string& verb) const;
    bool isIrregular(const std::string& verb) const;
    std::string getEnding(const std::string& verb, Pronoun pronoun) const;
    void addIrregularVerb(const std::string& verb, const std::vector<std::string>& conjugations);

protected:
    std::vector<std::string> arEndings;
    std::vector<std::string> erEndings;
    std::vector<std::string> irEndings;
    std::map<std::string, std::vector<std::string>> irregularVerbs;
};

#endif