#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Hello, Input a sentence." << endl;
    string input;
    string copy;
    getline(cin, input);
    cout << input << endl;
    for (int i = 0; i < input.length(); i++) {
        if (i == 0) {
            toupper(input.at(i));
            copy.push_back(input.at(i));
            continue;
        }
        if (isupper(input.at(i))){
            cout << "found a Upper Case!!";
            copy.push_back(static_cast<char>(" ");
            copy.push_back(tolower(input.at(i)));


            //break;
        }

    }
    cout << copy << endl;
    return 0;
}