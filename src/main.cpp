#include <iostream>
#include "Autres/adresse.cpp"


int main(int , char **){

    Adresse isima;

    Adresse moi = Adresse("Test",25.5,13.5);

    isima.toStream();

    moi.toStream();

    return 0;
}