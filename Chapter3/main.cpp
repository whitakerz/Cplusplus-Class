// Zach Whitaker
// September 9, 2025,
// This program asks the user for the current full market value of their property.
// The program calculates the current taxable value of the property.
// The program calculates the tax for the taxable value.
// The program displays the current taxes due.

#include <iostream> // Included for input and output.
#include <iomanip>  // Included for display formatting.
using namespace std;

int main()
{
    const int SPACESENTENCE = 32;                   // Sets width of text output
    const int SPACEDOLLARS = 11;                    // sets width of money output
    const int PRECISION = 2;                        // sets output decimals to 2
    double marketValue = 0;                         // for the user's input
    float taxRatePerBase = 2.64;                    // tax rate
    const float VALUECONVERSATION = 60.0 / 100.0;   // ratio of market value to taxable value
    double taxableValue = 0;                        // for the user's property tax rate
    double taxDue = 0;                              // for the users taxes due
    int taxRateBase = 100;                          // per units to calculate taxes
    float hundreds = 0;                             // for the user's property value in whole hundreds
                                                    // can be int to calculate the tax rate as a per hundred or a float
                                                    // to calculate per dollar

    cout << "Welcome to the tax calculator." << endl << endl;
    cout << "Enter the current market value of your property without a comma or space: $";
    cin >> marketValue;
    cout << "Enter the current tax rate per hundred dollars of taxable value:$";
    cin >> taxRatePerBase;
    hundreds = marketValue / taxRateBase;
    taxableValue = hundreds * VALUECONVERSATION;
    taxDue = taxableValue  * taxRatePerBase;

    cout << fixed << setprecision(PRECISION);
    cout << left << setw (SPACESENTENCE) << "The property value is:" << "$"
    << right << setw(SPACEDOLLARS) << marketValue << endl;
    cout << left << setw(SPACESENTENCE) << "The current taxable value is:" << "$"
    << right << setw(SPACEDOLLARS) << taxableValue * taxRateBase << endl;
    cout << left << setw(SPACESENTENCE) << "The current tax due is:" << "$"
    << right << setw(SPACEDOLLARS) << taxDue << endl << endl;
    cout << "Thank you for using the tax calculator." << endl;

    return 0;
}

