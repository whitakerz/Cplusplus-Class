#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void fillArrayRandom(int arr[], int size) {
    srand(time(0)); // Seed random generator
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1; // 1–100 inclusive
    }
}

void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}



void createArrayToSort() {
    const int SIZE = 900;
    int arr[SIZE];

    fillArrayRandom(arr, SIZE);

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted array: \n";
    for (int i = 0; i < n; i++)
        cout << setw(3) << arr[i] << " ";
    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << setw(3) << arr[i] << " ";
    cout << endl;

}

int main() {
    createArrayToSort();
    return 0;
}
