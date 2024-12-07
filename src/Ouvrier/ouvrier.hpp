#include <iostream>
#include <stdexcept>
#include "../Autres/adresse.hpp"
#include "../Autres/indisponibleException.hpp"

class Ouvrier {
    private:
        static int compteur;
        int id;
        bool disponible;
        Adresse chantier;

    public:
        Ouvrier(); 
        static int getCompteur();
        int getId();
        bool getDisponible();
        Adresse getChantier();
        void setDisponible(bool newDisponible);
        void setChantier(Adresse newChantier);
        void travailler(std::ostream& os = std::cout);
};