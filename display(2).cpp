//display.cpp


// Funksioni për të shfaqur fjalën me shkronjat e gjetura dhe ato të fshehura si "_"
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

// Kontrollon nëse e gjithë fjala është gjuajtur saktë
bool eshteFjalaEgjuajtur(const vector<bool>& gjuajtura) {
    for (bool gjuajtur : gjuajtura) {
        if (!gjuajtur) return false;
    }
    return true;
}
