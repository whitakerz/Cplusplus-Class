// Zach Whitaker
// September 14, 2025,
// This program is almost complete, if the user inputs something other than a number in the sales, the program has no output

#include <iostream>     // for cout, cin, endl
#include <cmath>        // for round function
using namespace std;    // for scoping cout, cin to std namespace

int main() {
    const int SALES_PERCENTAGE = 100;   // divisor factor for units of the sales
    float storeOne = 0;                 // Store One Sales
    float storeTwo = 0;                 // Store Two Sales
    float storeThree = 0;               // Store three Sales

    cout << "This program will display a graph of store sales, grouped by hundreds of dollars in sales.\n";

    cout << "Please insert the sales for store one: ";
    cin >> storeOne;
    storeOne = round(storeOne / SALES_PERCENTAGE);

    cout << "Please insert the sales for store two: ";
    cin >> storeTwo;
    storeTwo = round(storeTwo / SALES_PERCENTAGE);

    cout << "Please insert the sales for store three: ";
    cin >> storeThree;
    storeThree = round(storeThree / SALES_PERCENTAGE);

    cout << "Below is the graph of sales by store where each star = $100" << endl;

    // Print a simple bar chart for store one sales
    cout << "Store One Sales:" << endl;
    for (int i = 0; i < storeOne; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "Store Two Sales:" << endl;
    for (int i = 0; i < storeTwo; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "Store Three Sales:" << endl;
    for (int i = 0; i < storeThree; i++) {
        cout << "*";
    }
    cout << endl;
    return 0;

    cout << "The program completes after providing a graph of sales by store";
}
