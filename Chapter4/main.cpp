// Zach Whitaker
// September 14, 2025,
// This program is complete

#include <iostream>
#include <iomanip>  // Included for display formatting.
using namespace std;

int main()
{
    const int PRECISION = 4;        // constant for the precision of the output
    const int SNDINAIRFT= 1100;     // constant for the speed of sound in air
    const int SNDINWATERFT= 4900;   // constant for the speed of sound in water
    const int SNDINSTEELFT= 16400;  // constant for the speed of sound in steel
    bool flag = true;               // variable to control program loop

    cout << "The below program will accept a material type and length of material to show the speed of sound through";
    cout << " the medium" << endl << endl;

    while (flag) {
        int divisor = 0;                // variable to assign the correct constant value to
        char material ='0';             // variable to hold the material to be measured
        float length = 0;               // variable to hold the length of material to be measured
        cout << "Enter the type of material, (A)ir, (W)ater, (S)teel: ";
        cin >> material;
        // Validate and assign divisor based on a material type
        switch (material) {
            case 'A':
            case 'a':
                cout << "The speed of sound through air is " << SNDINAIRFT << " ft/s" << endl;
                divisor = SNDINAIRFT;
                break;
            case 'W':
            case 'w':
                cout << "The speed of sound through water is " << SNDINWATERFT << " ft/s" << endl;
                divisor = SNDINWATERFT;
                break;
            case 'S':
            case 's':
                cout << "The speed of sound through steel is " << SNDINSTEELFT << " ft/s" << endl;
                divisor = SNDINSTEELFT;
                break;
            default:
                cout << "Invalid material type" << endl;
                cout << "Please try again" << endl;
                continue; // skip asking for length if material is invalid
        }

        cout << "Provide the length of the material to measure the sound travel through: ";
        if (!(cin >> length)) {  // validate numeric input
            cout << "Invalid input! Please enter a number." << endl;
            cin.clear();          // clear error flags
            cin.ignore(10000, '\n'); // discard invalid input
            continue;
        }

        // Calculate and display time
        cout << "In " << length << " inches of material, sound will travel through in ";
        cout << fixed << setprecision(PRECISION) << length / divisor << " Seconds" << endl;

        // Ask if user wants to repeat
        char choice;
        cout << "Would you like to check another material? (Y)es or (N)o: ";
        cin >> choice;
        if (choice == 'N' || choice == 'n') {
            flag = false;
        }
    }

    cout << "The program concludes after calculating the traversal time of sound through a medium." << endl << endl;
    return 0;
}
