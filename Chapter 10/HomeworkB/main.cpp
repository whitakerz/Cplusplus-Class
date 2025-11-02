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
    cout << "Welcome to the movie survey program!" << endl;
    cout << fixed << setprecision(2);
    int studentsSurveyed = 0;
    while (true) {
        cout << "How many students have you surveyed? ";
        cin >> studentsSurveyed;
        if (studentsSurveyed > 0 && studentsSurveyed < 50) break;
        cout << "Please enter the number of students you want to survey (1-50)? " << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    int arr[studentsSurveyed];
    acceptArray(arr, studentsSurveyed);
    cout << "The student's results in the order they were surveyed are: " << endl;
    printArray(arr, studentsSurveyed);
    sortArray(arr, studentsSurveyed);
    cout << "The student's results in ascending order are: " << endl;
    printArray(arr, studentsSurveyed);
    cout << "\nThe average number of movies watched by each student is: " << averageArray(arr, studentsSurveyed) << endl;
    return 0;
}

void acceptArray(int* arr, int arrSize) {
    int holder = 0;
    int maxmovies = 10;

    for (int i = 0; i < arrSize; i++) {
        while (true) {
            cout << "Enter the number of movies watched for student " << i + 1 << ": ";
            cin >> holder;
            if (holder > (30*maxmovies)) {
                cout << "That student should not watch more than "<< maxmovies <<" movies every day" << endl;
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

void sortArray(int* arr, int arrSize) {
    sort(arr, arr + arrSize);
    cout << endl;
}

void printArray(int* arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i];
        if (i != arrSize - 1) cout << ", ";
        else cout << ".";
    }
    cout << endl;
}

double averageArray(int* arr, int arrSize)
{
    double sum = 0;
    for (int i = 0; i < arrSize; i++) {
        sum += *(arr+ i);
    }
    if (arrSize == 0) return 0;
    return sum / arrSize;
}