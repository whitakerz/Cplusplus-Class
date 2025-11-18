// Zach Whitaker
// November 17, 2025,
// Chapter 12 Lab A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    string copy;

    cout << "This is a program to convert a string in \"camelCase\" to \"Sentence case.\"" << endl;
    cout << "Hello, Input a sentence in which each word is capitalized and there are no spaces." << endl;

    while (true) {
        getline(cin, input);
        if (!input.empty() && input.find(' ') == string::npos) break; //check to see if the string is blank && if there are any spaces
        cout << "Input a sentence in which each word is capitalized and there are no spaces." << endl;
        cout << "Example: TheQuickBrownFoxJumpedOverTheLazyMoon" << "\nPlease try Again: " << endl;
        cin.clear(); // reset cin to clear buffer
        cin.ignore(1000, '\n');
    }
    //cout << input << endl;
    for (int i = 0; i < input.length(); i++) {
        if (i == 0) {
            copy += toupper(input.at(i));
            continue;
        }
        if (isupper(input.at(i))) {
            //cout << "found an Upper Case!!";
            copy += " ";
            copy += tolower(input.at(i));
        }

        else {
            copy += input.at(i);
        }

    }
    cout << "Your Sentence was: "<< copy << endl;
    return 0;
}