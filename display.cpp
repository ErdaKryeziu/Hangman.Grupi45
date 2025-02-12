// File: display.cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funksioni per te shfaqur fjalen me shkronjat e gjetura dhe ato te fshehura si "_"
void shfaqFjalen(const string& fjala, const vector<bool>& gjuajtura) {
    for (int i = 0; i < fjala.size(); ++i) {
        if (gjuajtura[i]) {
            cout << fjala[i] << " ";
        }
        else {
            cout << "_ ";
        }
    }
    cout << endl;
}

// Kontrollon nese e gjithe fjala eshte gjuajtur sakte
bool eshteFjalaEgjuajtur(const vector<bool>& gjuajtura) {
    for (bool gjuajtur : gjuajtura) {
        if (!gjuajtur) return false;
    }
    return true;
}

}