#include <iostream> // for cout and cin
#include <cstring> // to pass character arrays
#include <cctype> // to check if a character is upper or lower case
#include <limits> // for numeric_limits clearing cin
using namespace std;

// a function to change all letters in a char array to upper case
// take a character array
// returns nothing (modifies in situ)

// Truc,
// i struggled with the difference in "(char str[])" and "(char* str)" in this function definition//
// Zach
void upper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = static_cast<char>(toupper(static_cast<char>(str[i])));
    }
}

// a function to change all letters in a char array to lower case
// take a character array
// returns nothing (modifies in situ)
void lower(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = static_cast<char>(tolower(static_cast<char>(str[i])));
    }
}

// a function to flip the case for each character of a char array
// take a character array
// returns nothing (modifies in situ)
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
    int choice; // variable to re-run the program or not

    while (true) {
        // get input string
        cout << "Please type a sentence or word and I will provide it back to you in three forms." << endl;
        cout << "All uppercase, all lowercase, and with flipped case.\n";

        cout << "Enter a sentence or word: ";
        cin.getline(input, SIZE);

        // copy original
        strcpy(lowerStr, input);
        strcpy(upperStr, input);
        strcpy(flipStr, input);

        // change arrays
        upper(upperStr);
        lower(lowerStr);
        flip(flipStr);

        // output
        cout << "Original:  " << input    << endl;
        cout << "Uppercase: " << upperStr << endl;
        cout << "Lowercase: " << lowerStr << endl;
        cout << "Flipped:   " << flipStr  << endl;

        // ask to repeat
        cout << "Would you like to try again? 1 for yes, 2 for no: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Exiting.\n";
            break;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 2) {
            break;
        }
    }
    cout << "Thank you for playing along.";
    return 0;
}

