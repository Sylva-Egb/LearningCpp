#include <iostream>
#include <string>
using namespace std;

class Ville{
    string nom;
    string departement;
    public:
        Ville(string, string);
        void getdep(){
            cout << "La ville " << nom << " est dans le département " << departement;
        }
};

Ville::Ville(string nom, string departement){
    nom=nom;
    departement= departement;
}

int main(){
    Ville ville("Cotonou", "Littoral");
    ville.getdep();
    return 0;
}