#include <string.h>
#include <iostream>

class Adresse{
    private:
        std::string nom;
        double latitude;
        double longitude;
    public: 
        Adresse(); 
        Adresse(std::string nom, double latitude, double longitude);
        std::string getNom();
        double getLatitude();
        double getLongitude();
        void setNom(std::string nom);
        void setLatitude(double latitude);
        void setLongitude(double longitude);
        void toStream(std::ostream& stream = std::cout);
};