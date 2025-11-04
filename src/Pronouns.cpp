#include "Pronouns.hpp"
#include <string>

std::string pronounToString(Pronoun p) {
    switch (p) {
        case Pronoun::Yo: return "Yo";
        case Pronoun::Tu: return "Tú";
        case Pronoun::El_Ella_Usted: return "Él/Ella/Usted";
        case Pronoun::Nosotros: return "Nosotros";
        case Pronoun::Vosotros: return "Vosotros";
        case Pronoun::Ellos_Ellas_Ustedes: return "Ellos/Ellas/Ustedes";
        default: return "NOK";
    }
}