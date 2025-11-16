#include <iostream>
#include <string>

using namespace std;

string upper(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}

string lower(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

string flip(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isupper(s.at(i)) == true) {
            s[i] = tolower(s[i]);
        }
        else if (islower(s.at(i)) == true) {
            s[i] = toupper(s[i]);
        }
        else{cout << "error";}

    return s;
}

int main()
{
    string input;
    cout << "please type a sentence or word" << endl;
    getline(cin, input);
    cout << upper(input) << endl;
    cout << lower(input) << endl;
    cout << flip(input) << endl;
}