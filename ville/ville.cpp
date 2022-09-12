#include <iostream>
#include <string>
using namespace std;

class Ville{
    string nom;
    string departement;
    public:
        Ville(string, string);
        void getdep(string nom, string departement){
            cout << "La ville " << nom << " est dans le département " << departement;
        }
};

Ville::Ville(string nom, string departement){
    nom=nom;
    departement= departement;
}

int main(){

    return 0;
}