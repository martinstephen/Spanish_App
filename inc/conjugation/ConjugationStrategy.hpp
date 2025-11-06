#ifndef CONJUGATION_STRATEGY_HPP
#define CONJUGATION_STRATEGY_HPP    
        

class ConjugationStrategy {
public:
    virtual ~ConjugationStrategy() = default;
    virtual std::string conjugate(const std::string& verb, Pronoun p) const = 0;
};

#endif