#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// standard rotate 13 encrypyption function
// takes a character to encode
// returns a coded char
char rot13_char(char c) {
    if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' + 13) % 26;
    } else if (c >= 'A' && c <= 'Z') {
        return 'A' + (c - 'A' + 13) % 26;
    } else {
        return c; // non-letters unchanged
    }
}

int main() {
    const string PLAINTEXTPATH  = R"(E:\School\C++ Programming\Cplusplus-Class\Chapter 13\Lab\Encode\unsecret.txt)";
    const string ENCODEDFILEPATH = R"(E:\School\C++ Programming\Cplusplus-Class\Chapter 13\Lab\Encode\secret.txt)";;
    char plainChar; // variable to hold the incoming letter to be coded
    char codedChar; // variable to hold the outgoing encoded letter

    cout << "Welcome to the file encryption tool. \nThis program will take a text file and encoded it character"
            " by character" << endl << endl;
    cout << "Encoding: \n" << PLAINTEXTPATH << "\nto:\n" << ENCODEDFILEPATH << endl << endl;
    ifstream in(PLAINTEXTPATH);
    if (!in) {
        cerr << "Could not open input file\n";
        return 1;
    }

    ofstream out(ENCODEDFILEPATH);
    if (!out) {
        cerr << "Could not open output file\n";
        return 1;
    }


    while (in.get(plainChar)) {
        if (!in) {
            cerr << "Error reading from input file\n";
            return 1;
        }

        codedChar = rot13_char(plainChar);

        out.put(codedChar);
        if (!out) {
            cerr << "Error writing to output file\n";
            return 1;
        }

        //cout << encoded;
    }

    return 0;
}
