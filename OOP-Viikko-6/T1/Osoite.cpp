//
// Created by samit on 4/27/2025.
//

#include "Osoite.h"
#include <iostream>
#include <string>
//Rakentaja
Osoite::Osoite() = default;

Osoite::Osoite(std::string katuosoite, std::string postinumero, std::string kunta) {
    m_katuosoite = katuosoite;
    m_postinumero = postinumero;
    m_kunta = kunta;
}

//Getterit
std::string Osoite::getKatuosoite() const {
    return m_katuosoite;
}
std::string Osoite::getPostinumero() const {
    return m_postinumero;
}
std::string Osoite::getKunta() const {
    return m_kunta;
}
//Setterit
void Osoite::setKatuosoite(std::string katuosoite) {
    m_katuosoite = katuosoite;
}
void Osoite::setPostinumero(std::string postinumero) {
    m_postinumero = postinumero;
}
void Osoite::setKunta(std::string kunta) {
    m_kunta = kunta;
}
//Tulosta osoitetiedot
void Osoite::tulostaOsoitetiedot() const {
    std::cout << "Katuosoite: " << m_katuosoite << '\n';
    std::cout << "Postinumero: " << m_postinumero << '\n';
    std::cout << "Kunta: " << m_kunta << '\n';
}