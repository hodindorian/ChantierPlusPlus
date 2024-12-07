#include "adresse.hpp"
#include <string.h>
#include <iostream>

Adresse::Adresse(){
    nom = "ISIMA";
    latitude = 45.7592;
    longitude = 3.1104;
}

Adresse::Adresse(std::string pNom, double pLatitude, double pLongitude){
    nom = pNom;
    latitude = pLatitude;
    longitude = pLongitude;
}

std::string Adresse::getNom(){
    return nom;
}

double Adresse::getLatitude(){
    return latitude;
}

double Adresse::getLongitude(){
    return longitude;
}

void Adresse::setNom(std::string pNom){
    nom = pNom;
}

void Adresse::setLatitude(double pLatitude){
    latitude = pLatitude;
}

void Adresse::setLongitude(double pLongitude){
    longitude = pLongitude;
}

void Adresse::toStream(std::ostream& stream){
    stream << nom << " ( " << latitude << " ; " << longitude << " )" << std::endl;
}


