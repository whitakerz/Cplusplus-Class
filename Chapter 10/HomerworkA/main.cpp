// Zach Whitaker
// Lab 10 A
// November 2, 2025

#include <iostream>
#include <algorithm> // for sort
using namespace std;

void printArray(int* arr, int size);
double findMedian(int* arr, int size);

int main() {
    // Arrays
    int evenArray[] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};
    int oddArray[]  = {17, 32, 45, 68, 99, 101, 67, 89, 22};

    int evenSize = sizeof(evenArray) / sizeof(evenArray[0]);
    int oddSize = sizeof(oddArray) / sizeof(oddArray[0]);

    // sort arrays
    sort(evenArray, evenArray + evenSize);
    sort(oddArray, oddArray + oddSize);

    // display results
    cout << "Median of the sorted odd array(";
    printArray(oddArray, oddSize);
    cout << ") ";
    cout << "is " << findMedian(oddArray, oddSize) << endl;

    cout << "\nMedian of the sorted even array( ";
    printArray(evenArray, evenSize);
    cout << ") ";
    cout << "is " << findMedian(evenArray, evenSize) << endl;

    return 0;
}

// Prints array using pointer notation
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i);
        if (i < size - 1) cout << ", ";
    }
}

// Finds median using pointer notation
double findMedian(int* arr, int size) {
    if (size == 0) return 0; // div by zero;
    if (size % 2 == 0) {
        int mid1 = *(arr + (size / 2) - 1);
        int mid2 = *(arr + (size / 2));
        return (mid1 + mid2) / 2.0;
    } else {
        return *(arr + (size / 2));
    }
}
