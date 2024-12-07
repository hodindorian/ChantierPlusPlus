#include <iostream>
#include "Chef/chef.hpp"



int main(int , char **){

    // Test Adresse
    Adresse isima;

    Adresse test = Adresse("Test",25.5,13.5);

    isima.toStream();

    test.toStream();

    // Test Ouvrier
    int n = Ouvrier::getCompteur();

    std::cout << "Valeur de base du compteur : " << n << std::endl;
    Ouvrier o1;

    std::cout << "Test de l'ID de l'ouvrier 1 : ";
    if((n+1) == o1.getId()){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }
    Ouvrier o2;

    std::cout << "Test de l'ID de l'ouvrier 1 après création de l'ouvrier 2 : ";
    if((n+1) == o1.getId()){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }

    std::cout << "Test de l'ID de l'ouvrier 2 : ";
    if((n+2) == o2.getId()){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }

    std::cout << "Test du compteur des ouvriers : ";
    if((n+2) == Ouvrier::getCompteur()){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }

    // Test Chef
    int nChef = Ouvrier::getCompteur() +1 ;
    Ouvrier * c = new Chef();

    std::cout << "Test de l'ID du chef : ";
    if((nChef == c->getId())){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }

    std::cout << "Test du compteur du chef : ";
    if((nChef == Ouvrier::getCompteur())){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }

    delete c;

    Ouvrier o1Chef;
    Ouvrier o2Chef;
    Chef * c2 = new Chef();

    std::cout << "Test du chantier de l'ouvrier 1 : ";
    if((o1Chef.getChantier().getNom() == "ISIMA")){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }

    std::cout << "Test du chantier de l'ouvrier 2 : ";
    if((o2Chef.getChantier().getNom() == "ISIMA")){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }


    std::cout << "Test du chantier du chef : ";
    if((c2->getChantier().getNom() == "ISIMA")){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }


    c2->ajouter(&o1Chef);
    c2->ajouter(&o2Chef);
    c2->setChantier(Adresse("notre dame", 48.8531, 2.3499));

    std::cout << "Test du nouveau chantier de l'ouvrier 1 : ";
    if((o1Chef.getChantier().getNom() == "notre dame")){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }

    std::cout << "Test du nouveau chantier de l'ouvrier 2 : ";
    if((o2Chef.getChantier().getNom() == "notre dame") ){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }


    std::cout << "Test du nouveau chantier du chef : ";
    if((c2->getChantier().getNom() == "notre dame")){
        std::cout << "Réussi" << std::endl;
    }else{
        std::cout << "Échec" << std::endl;
    }

    delete c2;

    return 0;
}