#include <catch2/catch_test_macros.hpp>
#include "Present_Tense.hpp"

TEST_CASE("AR_Conjugation_Present_Tense returns correct conjugation", "[present_tense]") {
    Verbs_Present_Tense pt;
    REQUIRE(pt.AR_Conjugation_Present_Tense("hablar", 0) == "hablo");
    REQUIRE(pt.AR_Conjugation_Present_Tense("hablar", 1) == "hablas");
    REQUIRE(pt.AR_Conjugation_Present_Tense("hablar", 2) == "habla");
    REQUIRE(pt.AR_Conjugation_Present_Tense("trabajar", 3) == "trabajamos");
    REQUIRE(pt.AR_Conjugation_Present_Tense("cantar", 4) == "cantáis");
    REQUIRE(pt.AR_Conjugation_Present_Tense("bailar", 5) == "bailan");
}

TEST_CASE("ER_Conjugation_Present_Tense returns correct conjugation", "[present_tense]") {
    Verbs_Present_Tense pt;
    REQUIRE(pt.ER_Conjugation_Present_Tense("comer", 0) == "como");
    REQUIRE(pt.ER_Conjugation_Present_Tense("comer", 1) == "comes");
    REQUIRE(pt.ER_Conjugation_Present_Tense("comer", 2) == "come");
    REQUIRE(pt.ER_Conjugation_Present_Tense("beber", 3) == "bebemos");
    REQUIRE(pt.ER_Conjugation_Present_Tense("leer", 4) == "leéis");
    REQUIRE(pt.ER_Conjugation_Present_Tense("correr", 5) == "corren");
}

TEST_CASE("IR_Conjugation_Present_Tense returns correct conjugation", "[present_tense]") {
    Verbs_Present_Tense pt;
    REQUIRE(pt.IR_Conjugation_Present_Tense("vivir", 0) == "vivo");
    REQUIRE(pt.IR_Conjugation_Present_Tense("vivir", 1) == "vives");
    REQUIRE(pt.IR_Conjugation_Present_Tense("vivir", 2) == "vive");
    REQUIRE(pt.IR_Conjugation_Present_Tense("escribir", 3) == "escribimos");
    REQUIRE(pt.IR_Conjugation_Present_Tense("abrir", 4) == "abrís");
    REQUIRE(pt.IR_Conjugation_Present_Tense("recibir", 5) == "reciben");
}

TEST_CASE("Irregular verbs in present tense", "[present_tense]") {
    Verbs_Present_Tense pt;
    REQUIRE(pt.AR_Conjugation_Present_Tense("Estar", 0) == "Estoy");
    REQUIRE(pt.AR_Conjugation_Present_Tense("Dar", 1) == "Das");
    REQUIRE(pt.AR_Conjugation_Present_Tense("Pensar", 2) == "Piensa");
    REQUIRE(pt.IR_Conjugation_Present_Tense("ir", 0) == "Voy");
    REQUIRE(pt.IR_Conjugation_Present_Tense("Decir", 1) == "Dices");
}