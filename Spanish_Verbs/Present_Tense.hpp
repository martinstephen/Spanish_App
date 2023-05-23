#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


class Verbs_Present_Tense {
public:
  std::vector<std::string> AR_Endings_Present_Tense = {"o",    "as",  "a",
                                                       "amos", "áis", "an"};
  std::vector<std::string> ER_Endings_Present_Tense = {"o",    "es",  "e",
                                                       "emos", "éis", "en"};
  std::vector<std::string> IR_Endings_Present_Tense = {"o",    "es", "e",
                                                       "imos", "ís", "en"};
 
  std::vector<std::string> Ir_Endings_Present_Tense = {
      "Voy", "Vas", "Va", "Vamous", "Vameis", "Van"};
  std::vector<std::string> Coger_Endings_Present_Tense = {
      "Cojo", "Coges", "Coge", "Cogemos", "Cogéis", "Cogen"};
  std::vector<std::string> Conocer_Endings_Present_Tense = {
      "Conozco", "Conoces", "Conoce", "Conocemos", "Conocéis", "Conocen "};
  std::vector<std::string> Dar_Endings_Present_Tense = {
      "Doy", "Das", "Da", "Damous", "Dais", "Dan"};
  std::vector<std::string> Decir_Endings_Present_Tense = {
      "Voy", "Vas", "Va", "Vamous", "Vameis", "Van"};
  std::vector<std::string> Estar_Endings_Present_Tense = {"oy",   "ás",  "á",
                                                          "amos", "áis", "án"};
  std::vector<std::string> Haber_Endings_Present_Tense = {
      "He", "Has", "Ha", "Hemos", "Hebéis", "Han"};
  std::vector<std::string> Hacer_Endings_Present_Tense = {
      "Voy", "Vas", "Va", "Vamous", "Vameis", "Van"};
  std::vector<std::string> Ser_Endings_Present_Tense = {
      "Soy", "Eres", "Es", "Somos", "Sois", "Son"};

  std::string AR_Congrugation_Present_Tense(std::string Verb,
                                            int Pronoun_index);
  std::string IR_Congrugation_Present_Tense(std::string Verb,
                                            int Pronoun_index);
  std::string ER_Congrugation_Present_Tense(std::string Verb,
                                            int Pronoun_index);
};