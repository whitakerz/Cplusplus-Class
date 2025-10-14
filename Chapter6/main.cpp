//Zach Whitaker
// Chapter 6
// Program has issues:
    // if two regions tie, only the first one is listed as the highest
    // if the user inputs letters in the sales values, the program crashes (fixed by chatgpt)
// this program takes sales values of four company regions and returns the one with the highest sales.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Sales {
    // create a type that holds a string and a float
    string region;
    float sales;
};

void findHighest(vector<Sales>& regions);
void getSales(Sales& region);

int main()
// The main function to handle gathering data and displaying it to the screen
// function creates a vector to hold the sales regions and sales values
// function returns 0

{
    // vector holding structs Sales with region and sales values
    vector<Sales> regionSales = {
        {"Northwest", 0.0},
        {"Northeast", 0.0},
        {"Southeast", 0.0},
        {"Southwest", 0.0}
    };

    cout << "The program will compare the sales of the four company regions and return the highest sales." << endl;
    // for loop to iterate through the vector of regions
    for (int i = 0; i < regionSales.size(); ++i) {
        getSales(regionSales[i]);
    }
    // display the highest sales region and sales
    findHighest(regionSales);

    cout << "\nThe program closes after displaying the highest region & sales" <<endl;
    return 0;
}

void getSales(Sales& region)
// function takes a struct Sales
// function requests and fills the sales value for the region
// function checks if the sales value is negative & if the user entered a letter
// function repeats until the user enters a positive number
// function returns nothing (struct passed by reference)
{
    while (true) {
        cout << "Please enter the quarterly sales of the " << region.region << " region: ";
        cin >> region.sales;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a number." << endl;
        }
        else if (region.sales < 0) {
            cout << "Please enter a positive number." << endl << endl;
        }
        else break;

    }
}
void findHighest(vector<Sales>& regions)
// function takes a vector by reference which already has sales regions in it
// function finds the highest sales value in the vector
// function prints the highest sales value and region
// function returns nothing (reference passed the vector)
{
    float highest = 0.0;
    int position = 0;
    for (int i = 0; i < regions.size(); ++i) {
        float current = regions[i].sales;
        if (current > highest) {
            highest = current;
            position = i;
        }
    }
    cout << "The highest sales in the four company regions are the " << regions[position].region << " region with sales of $";
    cout << regions[position].sales << "." <<endl;
}

