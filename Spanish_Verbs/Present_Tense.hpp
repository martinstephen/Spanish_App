#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


class Verbs_Present_Tense {
public:
  std::vector<std::string> AR_Endings_Present_Tense = {"o",    "as",  "a",
                                                       "amos", "�is", "an"};
  std::vector<std::string> ER_Endings_Present_Tense = {"o",    "es",  "e",
                                                       "emos", "�is", "en"};
  std::vector<std::string> IR_Endings_Present_Tense = {"o",    "es", "e",
                                                       "imos", "�s", "en"};
 
  
  std::vector<std::string> Coger_Endings_Present_Tense = {
      "Cojo", "Coges", "Coge", "Cogemos", "Cog�is", "Cogen"};
  std::vector<std::string> Conocer_Endings_Present_Tense = {
      "Conozco", "Conoces", "Conoce", "Conocemos", "Conoc�is", "Conocen"};
  std::vector<std::string> Dar_Endings_Present_Tense = {
      "Doy", "Das", "Da", "Damos", "Dais", "Dan"};
  std::vector<std::string> Decir_Endings_Present_Tense = {
      "Digo", "Dices", "Dice", "Decimos", "Decis", "Dicen"};
  std::vector<std::string> Estar_Endings_Present_Tense = 
  {"oy",   "�s",  "�","amos", "�is", "�n"};
  std::vector<std::string> Haber_Endings_Present_Tense = {
      "He", "Has", "Ha", "Hemos", "Heb�is", "Han"};
  std::vector<std::string> Hacer_Endings_Present_Tense = {
      "Hago", "Haces", "Hace", "Hacemos", "Hac�is", "Hacen"};
  std::vector<std::string> Ir_Endings_Present_Tense = {
      "Voy", "Vas", "Va", "Vamos", "Vais", "Van"};
  std::vector<std::string> Pedir_Endings_Present_Tense = {
      "Pido", "Pides", "Pide", "Pedimos", "Ped�s", "Piden"};
  std::vector<std::string> Pensar_Endings_Present_Tense = {
      "Pienso", "Piensas", "Piensa", "Pensamos", "Pens�is", "Piensan"};
  std::vector<std::string> Poder_Endings_Present_Tense = {
      "Puedo", "Peudes", "Peude", "Podemos", "Pod�is", "Peuden"};
  std::vector<std::string> Poner_Endings_Present_Tense = {
      "Pongo", "Pones", "Pone", "Ponemos", "Pon�is", "Ponen"};
  std::vector<std::string> Querer_Endings_Present_Tense = {
      "Voy", "Vas", "Va", "Vamous", "Vameis", "Van"};
  std::vector<std::string> Saber_Endings_Present_Tense = {
      "Voy", "Vas", "Va", "Vamous", "Vameis", "Van"};
  std::vector<std::string> Salir_Endings_Present_Tense = {
          "Voy", "Vas", "Va", "Vamous", "Vameis", "Van"};
  std::vector<std::string> Ser_Endings_Present_Tense = {
      "Soy", "Eres", "Es", "Somos", "Sois", "Son"};
  std::vector<std::string> Tener_Endings_Present_Tense = {
      "Tengo", "Tienes", "Tiene", "Tenemos", "Tien�s", "Tan"};
  std::vector<std::string> Traer_Endings_Present_Tense = {
      "", "Vas", "Va", "Vamous", "Vameis", "Van"};
  std::vector<std::string> Venir_Endings_Present_Tense = {
      "Vengo", "Vienes", "Viene", "Venimos", "Ven�s", "Vienen"};
  std::vector<std::string> Jugar_Endings_Present_Tense = {
      "Juego", "Juegas", "Juega", "Jugamos", "Jug�is", "Juegan"};
  std::vector<std::string> O�r_Endings_Present_Tense = {
      "Oigo", "Oyes", "Oye", "O�mos", "O�s", "Oyen"};
  std::vector<std::string> Ver_Endings_Present_Tense = {
      "Veo", "Ves", "Ve", "Vemous", "Veis", "Ven"};

  std::string AR_Congrugation_Present_Tense(std::string Verb,
                                            int Pronoun_index);
  std::string IR_Congrugation_Present_Tense(std::string Verb,
                                            int Pronoun_index);
  std::string ER_Congrugation_Present_Tense(std::string Verb,
                                            int Pronoun_index);

private:
};