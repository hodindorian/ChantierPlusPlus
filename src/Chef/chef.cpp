#include "chef.hpp"

Chef::Chef() : Ouvrier() {}

void Chef::ajouter(Ouvrier* ouvrier) {
    if (equipe.size() < MAX_EQUIPE && 
        std::find(equipe.begin(), equipe.end(), ouvrier) == equipe.end()) {
        equipe.push_back(ouvrier);
        ouvrier->setChantier(getChantier());
    }
}

void Chef::setChantier(Adresse newAdresse) {
    Ouvrier::setChantier(newAdresse); // Modifier l'adresse du chef
    for (auto* ouvrier : equipe) {
        ouvrier->setDisponible(true);
        ouvrier->setChantier(newAdresse); // Synchroniser avec les ouvriers
    }
}

