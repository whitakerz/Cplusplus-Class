// Implement a program that performs operations on 2D arrays:
//
// Requirements:
//
// Create two 3x3 matrices (two-dimensional arrays) of integers
// Implement functions that:
// inputMatrix() - accepts a 2D array and populates it with user input
// displayMatrix() - displays a 2D array in table format
// addMatrices() - adds two matrices and stores result in a third matrix
// findRowSum() - calculates and returns the sum of a specified row
// findColumnSum() - calculates and returns the sum of a specified column
// Use nested loops to process rows and columns
// Pass the 2D arrays to functions correctly
// Test your program by:
//
// Creating and displaying both matrices
// Adding them together and displaying the result
// Calculating and displaying sums for each row and column

#include <iostream>
#include <iomanip>
using namespace std;

const int MTRSZ = 3;

// Function to input a matrix
void inputMatrix(int matrix[MTRSZ][MTRSZ]) {
    for (int i = 0; i < MTRSZ; i++) {
        for (int j = 0; j < MTRSZ; j++) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MTRSZ][MTRSZ]) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < MTRSZ; i++) {
        for (int j = 0; j < MTRSZ; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

// Function to add two matrices
void addMatrices(int a[MTRSZ][MTRSZ], int b[MTRSZ][MTRSZ], int result[MTRSZ][MTRSZ]) {
    for (int i = 0; i < MTRSZ; i++) {
        for (int j = 0; j < MTRSZ; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function to calculate the sum of a row
int findRowSum(int matrix[MTRSZ][MTRSZ], int row) {
    int sum = 0;
    for (int j = 0; j < MTRSZ; j++) {
        sum += matrix[row][j];
    }
    return sum;
}

// Function to calculate the sum of a column
int findColumnSum(int matrix[MTRSZ][MTRSZ], int col) {
    int sum = 0;
    for (int i = 0; i < MTRSZ; i++) {
        sum += matrix[i][col];
    }
    return sum;
}

int main() {
    int matrix1[MTRSZ][MTRSZ];
    int matrix2[MTRSZ][MTRSZ];
    int result[MTRSZ][MTRSZ];

    cout << "Enter elements for Matrix 1:\n";
    inputMatrix(matrix1);

    cout << "\nEnter elements for Matrix 2:\n";
    inputMatrix(matrix2);

    cout << "\nMatrix 1:\n";
    displayMatrix(matrix1);

    cout << "\nMatrix 2:\n";
    displayMatrix(matrix2);

    addMatrices(matrix1, matrix2, result);

    cout << "\nSum of Matrices:\n";
    displayMatrix(result);

    cout << "\nRow sums of result matrix:\n";
    for (int i = 0; i < MTRSZ; i++) {
        cout << "Row " << i << " sum = " << findRowSum(result, i) << endl;
    }

    cout << "\nColumn sums of result matrix:\n";
    for (int j = 0; j < MTRSZ; j++) {
        cout << "Column " << j << " sum = " << findColumnSum(result, j) << endl;
    }

    return 0;
}
