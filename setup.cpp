// File: setup.cpp
#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

// Funksioni qe kthen nje liste me fjalet e mundshme
vector<string> merrFjalet() {
    return { "hangman", "kompjuter", "programim", "loje", "zhvillues" };
}

// Funksioni qe zgjedh nje fjale rastësisht nga lista
string zgjidhFjaleRastesisht(const vector<string>& fjalet) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distr(0, fjalet.size() - 1);
    return fjalet[distr(gen)];
}