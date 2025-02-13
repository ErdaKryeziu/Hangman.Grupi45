// File: game.cpp
#include <iostream>
#include <string>
#include <vector>
#include "setup.cpp"
#include "display.cpp"
#include "input.cpp"

using namespace std;

int main() {
    // Merr fjal�t dhe zgjedh nj� fjal� rast�sisht
    vector<string> fjalet = merrFjalet();
    string fjala = zgjidhFjaleRastesisht(fjalet);

    vector<bool> gjuajtura(fjala.size(), false); // Mban gjurm� t� letrave t� gjuajtura
    int perpjekje = 6; // Numri i p�rpjekjeve t� lejuara
    string gjuajtjet = ""; // Mban t� gjitha letrat e gjuajtura

    cout << "Miresevini ne Hangman!" << endl;

    while (perpjekje > 0) {
        cout << "\nKeni " << perpjekje << " perpjekje te mbetura." << endl;
        shfaqFjalen(fjala, gjuajtura);

        cout << "Gjuajtjet e bera: " << gjuajtjet << endl;

        char gjuaj;
        merrGjuajtjen(gjuaj);

        // Kontrollo n�se shkronja �sht� gjuajtur tashm�
        if (!eshteShkronjeEValide(gjuaj, gjuajtjet)) {
            cout << "E keni gjuajtur tashme kete shkronje!" << endl;
            continue;
        }

        gjuajtjet += gjuaj; // Ruaj shkronj�n e gjuajtur

        bool gjetShkronje = false;

        // Kontrollo n�se shkronja e gjuajtur �sht� n� fjal�
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

        // Kontrollo n�se fjala �sht� gjuajtur plot�sisht
        if (eshteFjalaEgjuajtur(gjuajtura)) {
            cout << "Urime! E keni gjuajtur fjalen: " << fjala << endl;
            break;
        }
    }

    if (perpjekje == 0) {
        cout << "Loje e perfunduar! Fjala ishte: " << fjala << endl;
    }

    return 0;
