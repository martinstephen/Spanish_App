#include "ConjugationStrategy.hpp"
#include "Pronouns.hpp"
#include <vector>
#include <string>
class PresentTenseStrategy : public ConjugationStrategy {
public:
    std::string conjugate(const std::string& verb, Pronoun p) const override;
    bool isStemChanging(const std::string& verb) const;
    std::string applyStemChange(const std::string& stem, Pronoun pronoun) const;
private:
    std::vector<std::string> endings;
};