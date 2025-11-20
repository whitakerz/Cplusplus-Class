#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// a rotate 13 encryption function
// takes a character to encode
// returns a coded char
char rot13_char(char c) {
    // ROT13 for lowercase
    if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' + 13) % 26;
    }
    // ROT13 for uppercase
    else if (c >= 'A' && c <= 'Z') {
        return 'A' + (c - 'A' + 13) % 26;
    }
    // period becomes non-printing character
    else if (c == '.') {
        return '\x1F';
    }
    // newline becomes something else
    else if (c == '\n') {
        return '~';
    }
    // everything else unchanged
    else {
        return c;
    }
}

int main() {
    const string PLAINTEXTPATH  = R"(E:\School\C++ Programming\Cplusplus-Class\Chapter 13\Lab\Encode\unsecret.txt)";
    const string ENCODEDFILEPATH = R"(E:\School\C++ Programming\Cplusplus-Class\Chapter 13\Lab\Encode\secret.txt)";
    char plainChar; // variable to hold the incoming letter to be coded
    char codedChar; // variable to hold the outgoing encoded letter

    ifstream in(PLAINTEXTPATH);
    if (!in) {
        cerr << "Could not open input file " << PLAINTEXTPATH << endl;
        return 1;
    }
    cout << "Welcome to the file encryption tool. \nThis program will take a text file and encoded it character"
            " by character" << endl << endl;
    cout << "Encoding: \n" << PLAINTEXTPATH << "\nto:\n" << ENCODEDFILEPATH << endl << endl;



    ofstream out(ENCODEDFILEPATH);
    if (!out) {
        cerr << "Could not open output file " << ENCODEDFILEPATH << endl;
        return 1;
    }


    while (in.get(plainChar)) {

        codedChar = rot13_char(plainChar);

        out.put(codedChar);
        if (!out) {
            cerr << "Error writing to output file" << ENCODEDFILEPATH << endl;
            return 1;
        }
    }
    if (!in.eof()) {  // Check to see if the reading stopped because the end of the file or some other reason
        cerr << "Error reading from input file " << PLAINTEXTPATH << endl;
        return 1;
    }

    // check to see if the file was fully written (Checks for errors at the end of write)
    if (!out) {
        cerr << "Error finalizing output file " << ENCODEDFILEPATH << endl;
        return 1;
    }
    cout << "The file has been encoded." << endl;

    return 0;
}
