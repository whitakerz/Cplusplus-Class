#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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

    char c;
    while (in.get(c)) {
        // cout << c;
        char encoded = rot13_char(c);
        out.put(encoded);
        cout << encoded;
    }

    return 0;
}
