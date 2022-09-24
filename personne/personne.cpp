#include <iostream>
#include <string>

using namespace std;

class Personne{
    string nom;
    string prenom;
    string adresse;
    public:
        string getNom();
        string getPrenom();
        string getAdresse();
        void getPersonne();
        void setNom(string Nom);
        void setPrenom(string Prenom);
        void setAdresse(string Adresse);
        Personne(string,string, string);
};

string Personne::getNom(){
    return nom;
}

string Personne::getPrenom(){
    return prenom;
}

string Personne::getAdresse(){
    return  adresse;
}


void Personne::getPersonne(){
    cout <<"INFORMATION SUR UNE PERSONNE:\n"
    <<"NOM: "<< getNom()<<endl
    <<"Prenom: "<< getPrenom()<<endl
    <<"Adresse: " << getAdresse()<< endl; 
}

void Personne::setNom(string Nom){
    nom = Nom;
}

void Personne::setPrenom(string Prenom){
    prenom = Prenom;
}

void Personne::setAdresse(string Adresse){
    adresse = Adresse;
}

Personne::Personne(string Nom, string Prenom, string Adresse){
    setNom(Nom);
    setPrenom(Prenom);
    setAdresse(Adresse);
}

int main(){
    Personne personne1("EGBEWOLE", "Sylvanus", "Cotonou Akpakpa C/212");
    Personne personne2("RORONOA", "Zoro", "Ottawa");
    personne1.getPersonne();
    personne2.getPersonne();

    personne2.setAdresse("Paris");
    personne2.getPersonne();
    return 0;
}