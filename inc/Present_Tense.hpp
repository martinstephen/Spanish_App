#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Pronouns.hpp"

class Verbs_Present_Tense
{
public:
    std::vector<std::string> AR_Endings_Present_Tense = {
        "o", "as", "a", "amos", "áis", "an"};
    std::vector<std::string> ER_Endings_Present_Tense = {
        "o", "es", "e", "emos", "éis", "en"};
    std::vector<std::string> IR_Endings_Present_Tense = {
        "o", "es", "e", "imos", "ís", "en"};

    std::vector<std::string> Coger_Endings_Present_Tense = {
        "Cojo", "Coges", "Coge", "Cogemos", "Cogéis", "Cogen"};
    std::vector<std::string> Conocer_Endings_Present_Tense = {
        "Conozco", "Conoces", "Conoce", "Conocemos", "Conocéis", "Conocen"};
    std::vector<std::string> Dar_Endings_Present_Tense = {
        "Doy", "Das", "Da", "Damos", "Dais", "Dan"};
    std::vector<std::string> Decir_Endings_Present_Tense = {
        "Digo", "Dices", "Dice", "Decimos", "Decís", "Dicen"};
    std::vector<std::string> Estar_Endings_Present_Tense = {
        "Estoy", "Estás", "Está", "Estamos", "Estáis", "Están"};
    std::vector<std::string> Haber_Endings_Present_Tense = {
        "He", "Has", "Ha", "Hemos", "Habéis", "Han"};
    std::vector<std::string> Hacer_Endings_Present_Tense = {
        "Hago", "Haces", "Hace", "Hacemos", "Hacéis", "Hacen"};
    std::vector<std::string> Ir_Endings_Present_Tense =
        {"Voy", "Vas", "Va", "Vamos", "Vais", "Van"};
    std::vector<std::string> Pedir_Endings_Present_Tense = {
        "Pido", "Pides", "Pide", "Pedimos", "Pedís", "Piden"};
    std::vector<std::string> Pensar_Endings_Present_Tense = {
        "Pienso", "Piensas", "Piensa", "Pensamos", "Pensáis", "Piensan"};
    std::vector<std::string> Poder_Endings_Present_Tense = {
        "Puedo", "Puedes", "Puede", "Podemos", "Podeís", "Pueden"};
    std::vector<std::string> Poner_Endings_Present_Tense = {
        "Pongo", "Pones", "Pone", "Ponemos", "Ponéis", "Ponen"};
    std::vector<std::string> Querer_Endings_Present_Tense = {
        "Quiero", "Quieres", "Quiere", "Queremos", "Queréis", "Quieren"};
    std::vector<std::string> Salir_Endings_Present_Tense = {
        "Salgo", "Sales", "Sale", "Salimos", "Salís", "Salen"};
    std::vector<std::string> Saber_Endings_Present_Tense = {
        "Sé", "Sabes", "Sabe", "Sabemos", "Sabéis", "Saben"};
    std::vector<std::string> Ser_Endings_Present_Tense = {
        "Soy", "Eres", "Es", "Somos", "Sois", "Son"};
    std::vector<std::string> Tener_Endings_Present_Tense = {
        "Tengo", "Tienes", "Tiene", "Tenemos", "Tenéis", "Tienen"};
    std::vector<std::string> Traer_Endings_Present_Tense = {
        "Traigo", "Traes", "Trae", "Traemos", "Traéis", "Traen"};
    std::vector<std::string> Venir_Endings_Present_Tense = {
        "Vengo", "Vienes", "Viene", "Venimos", "Venís", "Vienen"};
    std::vector<std::string> Jugar_Endings_Present_Tense = {
        "Juego", "Juegas", "Juega", "Jugamos", "Jugáis", "Juegan"};
    std::vector<std::string> Oír_Endings_Present_Tense = {
        "Oigo", "Oyes", "Oye", "Oímos", "Oís", "Oyen"};
    std::vector<std::string> Ver_Endings_Present_Tense = {
        "Veo", "Ves", "Ve", "Vemos", "Veis", "Ven"};

    std::string AR_Conjugation_Present_Tense(std::string Verb,
                                              Pronoun pronoun);
    std::string IR_Conjugation_Present_Tense(std::string Verb,
                                              Pronoun pronoun);
    std::string ER_Conjugation_Present_Tense(std::string Verb,
                                              Pronoun pronoun);
    static std::string Generate_Present_Tense();

private:
};