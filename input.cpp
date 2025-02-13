#include <iostream>
#include <string>

using namespace std;

// Kontrollon nëse shkronja është e vlefshme (nuk është gjuajtur më parë)
bool eshteShkronjeEValide(char gjuaj, const string& gjuajtjet) {
    return gjuajtjet.find(gjuaj) == string::npos;
}

// Merr një shkronjë nga përdoruesi
void merrGjuajtjen(char& gjuaj) {
    cout << "Gjuaj nje shkronje: ";
    cin >> gjuaj;
    cin.ignore(); // Pastron buffer-in për të shmangur probleme me hyrjet
}