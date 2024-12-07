#include "../Ouvrier/ouvrier.hpp"
#include <vector>
#include <algorithm>

class Chef : public Ouvrier {
    private:
        std::vector<Ouvrier*> equipe; 
        static const int MAX_EQUIPE = 20;

    public:
        Chef(); 
        void ajouter(Ouvrier* ouvrier); 
        void setChantier(Adresse newChantier);
};

