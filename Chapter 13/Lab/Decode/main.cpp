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
    else if (c == '\x1F') {
        return '.';
    }
    // newline becomes something else
    else if (c == '~') {
        return '\n';
    }
    // everything else unchanged
    else {
        return c;
    }
}

int main() {
    const string SECRETTEXTPATH  = R"(E:\School\C++ Programming\Cplusplus-Class\Chapter 13\Lab\Encode\secret.txt)";
    const string DECODEDFILEPATH = R"(E:\School\C++ Programming\Cplusplus-Class\Chapter 13\Lab\Decode\unscrabled.txt)";
    char codedChar; // variable to hold the incoming letter to be coded
    char decodedChar; // variable to hold the outgoing encoded letter

    ifstream in(SECRETTEXTPATH);
    if (!in) {
        cerr << "Could not open input file " << SECRETTEXTPATH << endl;
        return 1;
    }
    cout << "Welcome to the file decryption tool. \nThis program will take a coded text file and decode it character"
            " by character" << endl << endl;
    cout << "Decoding: \n" << SECRETTEXTPATH << "\nto:\n" << DECODEDFILEPATH << endl << endl;



    ofstream out(DECODEDFILEPATH);
    if (!out) {
        cerr << "Could not open output file " << DECODEDFILEPATH << endl;
        return 1;
    }


    while (in.get(codedChar)) {

        decodedChar = rot13_char(codedChar);

        out.put(decodedChar);
        if (!out) {
            cerr << "Error writing to output file" << DECODEDFILEPATH << endl;
            return 1;
        }
    }
    if (!in.eof()) {  // Check to see if the reading stopped because the end of the file or some other reason
        cerr << "Error reading from input file " << SECRETTEXTPATH << endl;
        return 1;
    }

    // check to see if the file was fully written (Checks for errors at the end of write)
    if (!out) {
        cerr << "Error finalizing output file " << DECODEDFILEPATH << endl;
        return 1;
    }
    cout << "The file has been decoded." << endl;

    return 0;
}
