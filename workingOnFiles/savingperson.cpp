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
        getline(cin,profession);
        cout << "Entrez votre ville";
        getline(cin, ville); 
    } while (choice='y');
    
}