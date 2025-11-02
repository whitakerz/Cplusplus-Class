// Zach Whitaker
// Lab 10 B
// November 2, 2025

#include <algorithm>
#include <iomanip>
#include<iostream>
using namespace std;

void acceptArray(int* arr, int arrSize);
void sortArray(int* arr, int arrSize);
void printArray(int* arr, int arrSize);
double averageArray(int* arr, int arrSize);

int main()
{
    int studentsSurveyed = 0; // holder for dynamically allocating the array size
    cout << "Welcome to the movie survey program!" << endl;
    cout << fixed << setprecision(1); // set display to be .1s

    while (true) {
        cout << "How many students have you surveyed? ";
        cin >> studentsSurveyed; //find out the dynamically allocated arrays size
        if (studentsSurveyed > 0 && studentsSurveyed < 50) break; // error correction to make sure it is a reasonable _number_
        cout << "Please enter the number of students you surveyed (1-50)? " << endl;
        cin.clear(); // reset cin to clear buffer
        cin.ignore(1000, '\n');
    }

    int* arr = new int[studentsSurveyed];

    acceptArray(arr, studentsSurveyed);
    cout << "The student's results in the order they were surveyed are: " << endl;
    printArray(arr, studentsSurveyed);
    sortArray(arr, studentsSurveyed);
    cout << "The student's results in ascending order are: " << endl;
    printArray(arr, studentsSurveyed);

    cout << "\nThe average number of movies watched by all students is: " << averageArray(arr, studentsSurveyed) << endl;
    delete[] arr;
    return 0;
}

// specialized function to gather moves watched per student surveyed
void acceptArray(int* arr, int arrSize) {
    int holder = 0;
    int maxmovies = 10;

    for (int i = 0; i < arrSize; i++) {
        while (true) {
            cout << "Enter the number of movies watched for student " << i + 1 << ": ";
            cin >> holder;
            if (holder > (maxmovies *  30/*days*/ )) {
                cout << "That student watched more than  "<< maxmovies <<" movies every day? Please try again" << endl;
                continue;
            }
            if (holder > 0) break;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a positive number." << endl;
        }
        *(arr + i) = holder;
    }
}

// function to sort an integer array in ascending order
void sortArray(int* arr, int arrSize) {
    sort(arr, arr + arrSize);
    cout << endl;
}

// a function to print the elements of an integer array. This could also be overloaded to print any type of array
void printArray(int* arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++) {
        cout << *((arr + i));
        if (i != arrSize - 1) cout << ", ";
        else cout << ".";
    }
    cout << endl;
}

//a function to get the average of all values in an integer array
double averageArray(int* arr, int arrSize)
{
    double sum = 0;
    for (int i = 0; i < arrSize; i++) {
        sum += *(arr+ i);
    }
    if (arrSize == 0) return 0;
    return sum / arrSize;
}