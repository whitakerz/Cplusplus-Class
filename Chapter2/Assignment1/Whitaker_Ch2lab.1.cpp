//Zach Whitaker
//Program Status: Complete
//This program calculates the sales price of a commodity based on a percentage-profit ratio
#include <iostream> // Include this for std::cout
#include <iomanip> // Include this for std::setprecision
using namespace std;

int main() {
    // use the homework-defined cost of a commodity
    int flashDriveCost = 8;
    // use the homework-defined percentage profit ratio
    float markup = 35.00;
    // calculate the sales price of the flash drive using the homework-defined cost and markup
    float salesPrice = flashDriveCost + (flashDriveCost * (markup / 100));
    // print the results
    cout << "This program will calculate the requisite cost of a commodity to ensure a predetermined markup." << endl << endl;
    cout << "To have a " << markup << "% profit, the sales price of a $" << flashDriveCost << " flash drive is $";
    // cout << fixed << setprecision(2) << salesPrice << endl << endl;
    cout << "The program ends after calculating the cost and displaying it to the screen.";
}
