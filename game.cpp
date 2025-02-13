// File: game.cpp
#include <iostream>
#include <string>
#include <vector>
#include "setup.cpp"
#include "display.cpp"
#include "input.cpp"

using namespace std;

int main() {
    // Merr fjalët dhe zgjedh një fjalë rastësisht
    vector<string> fjalet = merrFjalet();
    string fjala = zgjidhFjaleRastesisht(fjalet);

    vector<bool> gjuajtura(fjala.size(), false); // Mban gjurmë të letrave të gjuajtura
    int perpjekje = 6; // Numri i përpjekjeve të lejuara
    string gjuajtjet = ""; // Mban të gjitha letrat e gjuajtura

    cout << "Miresevini ne Hangman!" << endl;

    while (perpjekje > 0) {
        cout << "\nKeni " << perpjekje << " perpjekje te mbetura." << endl;
        shfaqFjalen(fjala, gjuajtura);

        cout << "Gjuajtjet e bera: " << gjuajtjet << endl;

        char gjuaj;
        merrGjuajtjen(gjuaj);

        // Kontrollo nëse shkronja është gjuajtur tashmë
        if (!eshteShkronjeEValide(gjuaj, gjuajtjet)) {
            cout << "E keni gjuajtur tashme kete shkronje!" << endl;
            continue;
        }

        gjuajtjet += gjuaj; // Ruaj shkronjën e gjuajtur

        bool gjetShkronje = false;

        // Kontrollo nëse shkronja e gjuajtur është në fjalë
        for (int i = 0; i < fjala.size(); ++i) {
            if (fjala[i] == gjuaj) {
                gjuajtura[i] = true;
                gjetShkronje = true;
            }
        }

        if (!gjetShkronje) {
            perpjekje--;
            cout << "Gjuajtje gabim!" << endl;
        }

        // Kontrollo nëse fjala është gjuajtur plotësisht
        if (eshteFjalaEgjuajtur(gjuajtura)) {
            cout << "Urime! E keni gjuajtur fjalen: " << fjala << endl;
            break;
        }
    }

    if (perpjekje == 0) {
        cout << "Loje e perfunduar! Fjala ishte: " << fjala << endl;
    }

    return 0;
