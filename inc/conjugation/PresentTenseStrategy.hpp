#include "ConjugationStrategy.hpp"
#include "Pronouns.hpp"
#include <vector>
#include <string>
class PresentTenseStrategy : public ConjugationStrategy {
public:
    PresentTenseStrategy(){
    // Initialize regular endings
    arEndings = {"o", "as", "a", "amos", "áis", "an"};
    erEndings = {"o", "es", "e", "emos", "éis", "en"};
    irEndings = {"o", "es", "e", "imos", "ís", "en"};

//     // Initialize irregular verbs
//     // addIrregularVerb("estar", {"estoy", "estás", "está", "estamos", "estáis", "están"});
//     // addIrregularVerb("ser", {"soy", "eres", "es", "somos", "sois", "son"});
//     // addIrregularVerb("ir", {"voy", "vas", "va", "vamos", "vais", "van"});
//     // addIrregularVerb("tener", {"tengo", "tienes", "tiene", "tenemos", "tenéis", "tienen"});
//     // addIrregularVerb("hacer", {"hago", "haces", "hace", "hacemos", "hacéis", "hacen"});
//     // Add more irregular verbs as needed
 };
    std::string conjugate(const std::string& verb, Pronoun p) const override;
    bool isStemChanging(const std::string& verb) const;
    std::string applyStemChange(const std::string& stem, Pronoun pronoun) const;
private:
    std::vector<std::string> endings;
};