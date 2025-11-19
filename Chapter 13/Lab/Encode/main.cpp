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

int main()
{
    string inputFile = "input.txt";
    ifstream in(inputFile);
    string output = "";
    char c;
    while (in >> c) {
        output += rot13_char(c);
    }
    ofstream out("output.txt");
    out << output;

}