#include "ouvrier.hpp"

int Ouvrier::compteur = 0;

Ouvrier::Ouvrier() : id(++compteur), disponible(true), chantier() {}

int Ouvrier::getCompteur() {
    return compteur;
}

int Ouvrier::getId() {
    return id;
}

bool Ouvrier::getDisponible() {
    return disponible;
}

Adresse Ouvrier::getChantier() {
    return chantier;
}

void Ouvrier::setDisponible(bool newDisponible) {
    disponible = newDisponible; 
}

void Ouvrier::setChantier(Adresse newChantier) {
    if (!disponible) {
        throw std::runtime_error("L'ouvrier est déjà en chantier");
    }
    chantier = newChantier;
    disponible = false;
}

void Ouvrier::travailler(std::ostream& os) {
    os << "Ouvrier #" << id << " travaille à ";
    chantier.toStream(os);
    os << std::endl;
}
