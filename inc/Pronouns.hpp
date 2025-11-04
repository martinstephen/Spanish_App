#ifndef PRONOUNS_HPP
#define PRONOUNS_HPP
#include <string>
enum class Pronoun {
    Yo = 0,
    Tu,
    El_Ella_Usted,
    Nosotros,
    Vosotros,
    Ellos_Ellas_Ustedes,
    Count // Always last
};

std::string pronounToString(Pronoun p);
#endif // PRONOUNS_HPP