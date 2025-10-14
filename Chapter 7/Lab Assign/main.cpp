//Zachary Whitaker
//October 12, 2025,
//Chapter 7 Lab Assignment
#include <iomanip>
#include <iostream>
using namespace std;

// a class to set the tax rate of an object and to calculate the food cost when the bill total including tax is given.
// Based on a food cost % given by the user, the tip will be calculated.
class Tips {
private:
    float taxRate;

public:

    Tips() : taxRate(.085) {}

    Tips(float taxDecimal = 0.085f) {        // Constructor
        if (taxDecimal >= 0.0) {
            taxRate = taxDecimal;
        }
        else{
            cout << "Invalid tax rate. Setting default rate of 8.5%." << endl;
            taxRate = 0.085;
        }
    }

    ~Tips()                 // destructor
    {
        cout << "Tips object deleted." << endl;
    }

    // member function to calculate a tip from the cost of a meal with combined tax and food cost when given the tip percent
    float computeTip(const float &billTotal, const float &tipDecimal) {
        float foodCost = billTotal / (1 + taxRate);
        float tip = foodCost * tipDecimal;

        return tip;
    }
};

int main()
{
    float taxRate = 0.0f; // variable to hold the current tax rate
    float billTotal = 0.0f; // variable to hold the total bill
    float tipPercent = 0.0f; // variable to hold the tip percentage
    float tipDecimal = 0.0f; // variable to hold the tip amount
    float totalTip = 0.0f; // variable to hold the total tip
    float receiptTotal = 0.0f; // variable to hold the total receipt
    int justifyOutput = 26; // variable to hold the justification of the output for setw
    cout << fixed << setprecision(2); // set the output to two decimal places
    cout << "Welcome to the Tips Calculator!" << endl;
    cout << "--------------------------------" << endl;
    cout << "This program will calculate the tip for a meal." << endl;
    cout << "\nEnter the tax rate as a percentage: ";
    cin >> taxRate;
    if (taxRate < 1) {
        cout << "You entered a decimal tax rate. Please input a percentage:";
        cin >> taxRate;
    }
    taxRate /= 100; // convert to decimal

    Tips example1(taxRate); // create an object of class Tips

    while (true){
        cout << "-------------------------------------------------------- " << endl;
        cout << "Enter the food total including tax (enter 0 to stop): $";
        cin >> billTotal;
        if (billTotal == 0) break;
        if (billTotal < 0) {
            cout << "That is an invalid bill amount. Starting over" << endl;
            continue;
        }
        cout << "Enter the tip percentage: ";
        cin >> tipPercent;
        if (tipPercent < 0) {
            cout << "Invalid tip percentage. Please enter a positive number." << endl;
            continue;
        }
        tipDecimal = tipPercent / 100;
        totalTip = example1.computeTip(billTotal, tipDecimal);
        receiptTotal = billTotal + totalTip;
        cout << left << setw(justifyOutput) << "The tip for your meal is:" << "$ " << totalTip << endl
            << left << setw(justifyOutput) <<"The bill total is:" << "$ "<< receiptTotal <<  endl;
    }

    cout << "-------------------------------------------------------- " << endl;
    cout << "|      Thank you for using the Tips Calculator!        | " << endl;
    cout << "-------------------------------------------------------- " << endl;
    return 0;
}