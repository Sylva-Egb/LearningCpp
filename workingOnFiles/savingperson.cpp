#include <iostream>
#include <fstream>
using namespace std;

string nom;
string prenom;
int age;
string profession, ville;
char vote, choice= 'y';

int main(){
    ofstream file("fichedepersonne.txt");
    do
    {
        cout << "Entrez votre nom: ";
        getline(cin, nom);
        cout << "\n Entrez votre prenom: ";
        getline(cin,prenom);
        cout << "\n Entrez votre age: ";
        cin >> age;
        cout << "Entrez votre profession";
        cin>>profession;
        cout << "Entrez votre ville";
        cin>> ville;
       // do
       // {
            cout << "Avez vous vote? Tapez o pour oui et n pour non";
            cin>> vote;
           // cout << vote;
        //} while (vote !='o' || vote != 'O' || vote != 'n' || vote != 'N');
        cout << "VOULEZ VOUS CONTINUER? (y/n)";
        cin >> choice;
    } while (choice == 'y');
        cout << "INFORMATIONS EN COURS D'ENREGISTREMENT";
        file << "INFORMATIONS A PROPOS DE QUELQUES INDIVIDUS\n";
        file << "NOM:   " << nom << endl
        << "PRENOM:     " << prenom << endl
        << "AGE:     " << age << endl
        << "PROFESSION:     " << profession << endl
        << "VILLE:     " << ville << endl
        << "A VOTER:     " << vote << endl;
        file.close();
        cout << "\nEnregistrement effectue";
}