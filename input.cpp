#include <iostream>
#include <string>

using namespace std;

// Kontrollon n�se shkronja �sht� e vlefshme (nuk �sht� gjuajtur m� par�)
bool eshteShkronjeEValide(char gjuaj, const string& gjuajtjet) {
    return gjuajtjet.find(gjuaj) == string::npos;
}

// Merr nj� shkronj� nga p�rdoruesi
void merrGjuajtjen(char& gjuaj) {
    cout << "Gjuaj nje shkronje: ";
    cin >> gjuaj;
    cin.ignore(); // Pastron buffer-in p�r t� shmangur probleme me hyrjet
}