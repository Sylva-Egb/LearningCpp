#include <iostream>
#include <string>
using namespace std;

class Ville{
    string nom;
    string departement;
    public:
        void setNom(string Nom){
            Nom = nom;
        }

        void setDepartement(string dep){
            dep= departement;
        }

        string getNom(){
            return nom;
        }

        string getDepartement(){
            return departement;
        }

        Ville(string Nom, string Departement){
            setNom(Nom);
            setDepartement(Departement);

        };
        void afficherdep(){ 
              cout << "La ville " << nom << " est dans le departement " << departement<< endl;
        }
};

/* Ville::Ville(char* Nom, char* Departement){
    Nom=nom;
    Departement=departement;
}
 */
int main(){
    Ville ville("Cotonou", "Littoral");
    ville.afficherdep();
    return 0;
}