#include <catch2/catch_test_macros.hpp>
#include "Present_Tense.hpp"

TEST_CASE("AR_Congrugation_Present_Tense returns correct conjugation", "[present_tense]") {
    Verbs_Present_Tense pt;
    REQUIRE(pt.AR_Congrugation_Present_Tense("hablar", 0) == "hablo");
    REQUIRE(pt.AR_Congrugation_Present_Tense("hablar", 1) == "hablas");
    REQUIRE(pt.AR_Congrugation_Present_Tense("hablar", 2) == "habla");
}

TEST_CASE("IR_Congrugation_Present_Tense returns correct conjugation", "[present_tense]") {
    Verbs_Present_Tense pt;
    REQUIRE(pt.IR_Congrugation_Present_Tense("vivir", 0) == "vivo");
    REQUIRE(pt.IR_Congrugation_Present_Tense("vivir", 1) == "vives");
    REQUIRE(pt.IR_Congrugation_Present_Tense("vivir", 2) == "vive");
}