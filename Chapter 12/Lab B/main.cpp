#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// a function to change all letters in a char array to upper case
void upper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = static_cast<char>(toupper(static_cast<char>(str[i])));
    }
}

// a function to change all letters in a char array to lower case
void lower(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = static_cast<char>(tolower(static_cast<char>(str[i])));
    }
}

// a function to flip the case of a char array
void flip(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = static_cast<char>(str[i]);
        if (isupper(c))
        {
            str[i] = static_cast<char>(tolower(c));
        }
        else if (islower(c))
        {
            str[i] = static_cast<char>(toupper(c));
        }
        else continue; // skip non letters
    }
}

int main()
{
    const int SIZE = 200;
    char input[SIZE];
    char lowerStr[SIZE];
    char upperStr[SIZE];
    char flipStr[SIZE];

    // get input string
    cout << "Please type a sentence or word and I will provided it back you you in three forms." << endl;
    cout << "All uppercase, all lowercase and I will filp the case on your input. \nEnter a sentence or word: ";
    cin.getline(input, SIZE);

    // copy original
    strcpy(lowerStr, input);
    strcpy(upperStr, input);
    strcpy(flipStr, input);

    // change strings
    upper(upperStr);
    lower(lowerStr);
    flip(flipStr);

    // output
    cout << "Original:  " << input    << endl;
    cout << "Uppercase: " << upperStr << endl;
    cout << "Lowercase: " << lowerStr << endl;
    cout << "Flipped:   " << flipStr  << endl;

    return 0;
}
