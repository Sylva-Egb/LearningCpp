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
        Client(string n, string p, string a):Personne(string a, string b){
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
            cout <<"Le citoyen "<< nom << " a-t-il voter? o/n";
            if ( x == "o" || x == "n" || x == "O" or x == "N")
            {
                if (x == "o" or x=="O")
                {
                    vote = "Oui";
                }
                else
                {
                    vote = "Non";
                }
            }
            else
            {
                aVoter();
            }
        }
        Electeur(string n, string p , string bureau ):Personne(){
            setNom(n);
            setPrenom(p);
            setBureauV(bureau);
            aVoter();
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
    electeur.displaying();
    client.setCoord();
    return 0;
}