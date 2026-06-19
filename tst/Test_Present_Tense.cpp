#include <catch2/catch_test_macros.hpp>
#include "Pronouns.hpp"
#include "Present_Tense.hpp"

TEST_CASE("AR_Conjugation_Present_Tense returns correct conjugation", "[present_tense]") {
    Verbs_Present_Tense pt;
    REQUIRE(pt.AR_Conjugation_Present_Tense("hablar", Pronoun::Yo) == "hablo");
    REQUIRE(pt.AR_Conjugation_Present_Tense("hablar", Pronoun::Tu) == "hablas");
    REQUIRE(pt.AR_Conjugation_Present_Tense("hablar", Pronoun::Ellos_Ellas_Ustedes) == "hablan");
    REQUIRE(pt.AR_Conjugation_Present_Tense("trabajar", Pronoun::Nosotros) == "trabajamos");
    REQUIRE(pt.AR_Conjugation_Present_Tense("cantar", Pronoun::Yo) == "canto");
    REQUIRE(pt.AR_Conjugation_Present_Tense("bailar", Pronoun::Yo) == "bailo");
}

TEST_CASE("ER_Conjugation_Present_Tense returns correct conjugation", "[present_tense]") {
    Verbs_Present_Tense pt;
    REQUIRE(pt.ER_Conjugation_Present_Tense("comer", Pronoun::Yo) == "como");
    REQUIRE(pt.ER_Conjugation_Present_Tense("comer", Pronoun::Tu) == "comes");
    REQUIRE(pt.ER_Conjugation_Present_Tense("comer", Pronoun::El_Ella_Usted) == "come");
    REQUIRE(pt.ER_Conjugation_Present_Tense("beber", Pronoun::Nosotros) == "bebemos");
    REQUIRE(pt.ER_Conjugation_Present_Tense("leer", Pronoun::Vosotros) == "leéis");
    REQUIRE(pt.ER_Conjugation_Present_Tense("correr", Pronoun::Ellos_Ellas_Ustedes) == "corren");
}

TEST_CASE("IR_Conjugation_Present_Tense returns correct conjugation", "[present_tense]") {
    Verbs_Present_Tense pt;
    REQUIRE(pt.IR_Conjugation_Present_Tense("vivir", Pronoun::Yo) == "vivo");
    REQUIRE(pt.IR_Conjugation_Present_Tense("vivir", Pronoun::Tu) == "vives");
    REQUIRE(pt.IR_Conjugation_Present_Tense("vivir", Pronoun::El_Ella_Usted) == "vive");
    REQUIRE(pt.IR_Conjugation_Present_Tense("escribir", Pronoun::Nosotros) == "escribimos");
    REQUIRE(pt.IR_Conjugation_Present_Tense("abrir", Pronoun::Vosotros) == "abrís");
    REQUIRE(pt.IR_Conjugation_Present_Tense("recibir", Pronoun::Ellos_Ellas_Ustedes) == "reciben");
}

// TEST_CASE("Irregular verbs in present tense", "[present_tense]") {
//     Verbs_Present_Tense pt;
//     REQUIRE(pt.AR_Conjugation_Present_Tense("Estar", 0) == "Estoy");
//     REQUIRE(pt.AR_Conjugation_Present_Tense("Dar", 1) == "Das");
//     REQUIRE(pt.AR_Conjugation_Present_Tense("Pensar", 2) == "Piensa");
//     REQUIRE(pt.IR_Conjugation_Present_Tense("ir", 0) == "Voy");
//     REQUIRE(pt.IR_Conjugation_Present_Tense("Decir", 1) == "Dices");
// }