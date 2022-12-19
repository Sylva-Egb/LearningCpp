#include <iostream>
#include <string>


using namespace std;

class Personne{
    protected:
        string nom, prenom;

    public:
        string getNom();
        string getPrenom();
        void setNom(string);
        void setPrenom(string);
        Personne(string, string);
};

string Personne:: getNom(){
    return nom;
}

string Personne:: getPrenom(){
    return prenom;
}

void Personne:: setNom(string n){
    nom = n;
}

void Personne::setPrenom(string p){
    prenom = p;
}

Personne::Personne(string a,string b){
    setNom(a);
    setPrenom(b);
}

class Client: public Personne{
    string adresse;
    public:
        string getAdresse();
        void setAdresse(string);
        void setCoord();
        Client(string n, string p, string a):Personne(n,p),adresse(a){
            setNom(n);
            setPrenom(p);
            setAdresse(a);
        };
};

string Client::getAdresse(){
    return adresse;
}

void Client::setAdresse(string a){
    adresse =a;
}

void Client:: setCoord(){
    cout << "INFORMATIONS D'UN CLIENT\n" 
    << "NOM: " << getNom() << "\n"
    << "PRENOM: " << getPrenom() << "\n"
    << "ADRESSE: " << getAdresse() << "\n";
}


class Electeur: public Personne{
    string bureau_de_vote , vote;
    public:
        string getBureauV(){
            return bureau_de_vote;
        }
        void setBureauV(string bv){
            bureau_de_vote = bv;
        }
        void aVoter(){
            string x;
            getline(cin,x);
            cout <<"Le citoyen "<< nom << " a-t-il voter? o(Oui)/n(Non):\t";
            if (x == "o" or x=="O")
            {
                vote = "Oui";
                cout <<endl;
            }
            else if (x == "n" or x=="N")
            {
                vote = "Non";
                cout <<endl;
            }
            else
            {
                aVoter();
                cout <<endl;
            }
        }
        Electeur(string n, string p , string b):Personne(n,p), bureau_de_vote(b){
            setNom(n);
            setPrenom(p);
            setBureauV(b);
        }
        void displaying(){
            cout << "INFORMATIONS SUR LE CITOYEN\n"
                << "NOM: " << getNom() << "\n"
                << "PRENOM: " << getPrenom() << "\n" 
                << "STATUT VOTE: " << vote << "\n" ;         
        }
};

int main(){
    Client client("SOLEIL", "Levant", "Cotonou" );
    Electeur electeur("EGBEWOLE", "Sylva","Cotonou");
    electeur.aVoter();
    electeur.displaying();
    client.setCoord();
    return 0;
}