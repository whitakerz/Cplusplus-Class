//Zach Whitaker
//Program Status: Complete
//This program calculates the whole feet and remaining inches of a person based on their height in inches

#include <iostream>
using namespace std;

int main() {
    // use the homework-defined value for the baseketball players heigh
    int playerHeightInches = 75;
    // use integer division to get the whole feet
    int playerHeightFeet = playerHeightInches / 12;
    // use the remainder by modulus to get the inches
    int playerHeightRemainderInches = playerHeightRemainderInches % 12;
    // print the results
    cout << "This program will convert a human's measurements from inches to feet and inches." << endl << endl;
    cout << "The basketball player is " << playerHeightRemainderInches << " inches tall.\n";
    cout << "Which is: " << playerHeightFeet << " feet and " << playerHeightRemainderInches << " inches." << endl << endl;
    cout << "The program ends after converting the measurement." << endl;

}