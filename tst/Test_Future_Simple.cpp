
#include <catch2/catch_test_macros.hpp>
#include "Pronouns.hpp"
#include "Future_Tense_Simple.hpp"

TEST_CASE("AR_Conjugation_Future_Simple returns correct conjugation", "[future_simple]") {
    Verbs_Future_Simple pt;
    REQUIRE(pt.Conjugation_Future_Simple("hablar", Pronoun::Yo) == "hablaré");
    REQUIRE(pt.Conjugation_Future_Simple("hablar", Pronoun::Tu) == "hablarás");
    REQUIRE(pt.Conjugation_Future_Simple("hablar", Pronoun::Ellos_Ellas_Ustedes) == "hablarán");
    REQUIRE(pt.Conjugation_Future_Simple("trabajar", Pronoun::Nosotros) == "trabajaremos");
    REQUIRE(pt.Conjugation_Future_Simple("cantar", Pronoun::Yo) == "cantaré");
    REQUIRE(pt.Conjugation_Future_Simple("bailar", Pronoun::Yo) == "bailaré");
}

TEST_CASE("ER_Conjugation_Future_Simple returns correct conjugation", "[future_simple]") {
    Verbs_Future_Simple pt;
    REQUIRE(pt.Conjugation_Future_Simple("comer", Pronoun::Yo) == "comeré");
    REQUIRE(pt.Conjugation_Future_Simple("comer", Pronoun::Tu) == "comerás");
    REQUIRE(pt.Conjugation_Future_Simple("comer", Pronoun::El_Ella_Usted) == "comerá");
    REQUIRE(pt.Conjugation_Future_Simple("beber", Pronoun::Nosotros) == "beberemos");
    REQUIRE(pt.Conjugation_Future_Simple("leer", Pronoun::Vosotros) == "leeréis");
    REQUIRE(pt.Conjugation_Future_Simple("correr", Pronoun::Ellos_Ellas_Ustedes) == "correrán");
}

TEST_CASE("IR_Conjugation_Future_Simple returns correct conjugation", "[future_simple]") {
    Verbs_Future_Simple pt;
    REQUIRE(pt.Conjugation_Future_Simple("vivir", Pronoun::Yo) == "viviré");
    REQUIRE(pt.Conjugation_Future_Simple("vivir", Pronoun::Tu) == "vivirás");
    REQUIRE(pt.Conjugation_Future_Simple("vivir", Pronoun::El_Ella_Usted) == "vivirá");
    REQUIRE(pt.Conjugation_Future_Simple("escribir", Pronoun::Nosotros) == "escribiremos");
    REQUIRE(pt.Conjugation_Future_Simple("abrir", Pronoun::Vosotros) == "abriréis");
    REQUIRE(pt.Conjugation_Future_Simple("recibir", Pronoun::Ellos_Ellas_Ustedes) == "recibirán");
}

// TEST_CASE("Irregular verbs in present tense", "[present_tense]") {
//     Verbs_Present_Tense pt;
//     REQUIRE(pt.AR_Conjugation_Present_Tense("Estar", 0) == "Estoy");
//     REQUIRE(pt.AR_Conjugation_Present_Tense("Dar", 1) == "Das");
//     REQUIRE(pt.AR_Conjugation_Present_Tense("Pensar", 2) == "Piensa");
//     REQUIRE(pt.IR_Conjugation_Present_Tense("ir", 0) == "Voy");
//     REQUIRE(pt.IR_Conjugation_Present_Tense("Decir", 1) == "Dices");
// }