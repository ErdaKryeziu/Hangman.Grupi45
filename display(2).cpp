// Funksioni p�r t� shfaqur fjal�n me shkronjat e gjetura dhe ato t� fshehura si "_"
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

// Kontrollon n�se e gjith� fjala �sht� gjuajtur sakt�
bool eshteFjalaEgjuajtur(const vector<bool>& gjuajtura) {
    for (bool gjuajtur : gjuajtura) {
        if (!gjuajtur) return false;
    }
    return true;
}