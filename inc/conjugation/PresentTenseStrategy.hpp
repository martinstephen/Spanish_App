#include "ConjugationStrategy.hpp"
#include "Pronouns.hpp"
#include <vector>
#include <string>
class PresentTenseStrategy : public ConjugationStrategy {
public:
    std::string conjugate(const std::string& verb, Pronoun p) const override;
private:
    std::vector<std::string> endings;
};