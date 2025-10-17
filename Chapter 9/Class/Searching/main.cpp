#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// Generates a vector of integers of given size filled with random numbers.
vector<int> generateArray(int size) {
    vector<int> arr(size);
    srand(static_cast<unsigned int>(time(nullptr))); // Seed RNG

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100000; // Random number 0–99
    }
    return arr;
}

void bubbleSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int linearSearch(vector<int> &arr, int key)
{
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(const std::vector<int>& arr, int x) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int size = 5000;
    int set = 5;
    vector<int> result = generateArray(size);

    cout << "Unsorted: " << endl;
    for (int num : result) {
        cout << setw(set) << num << " ";
    }
    cout << endl << endl;

    cout << "Sorted: " << endl;
    bubbleSort(result);
    for (int num : result) {
        cout << setw(set) << num << " ";
    }
    int findValue = 66;

    int index = linearSearch(result, findValue);
    cout << endl << endl;
    if (index == -1) cout << "number not found" << endl;
    else cout << "Value " << findValue << " found at index " << index << endl;
    return 0;
}
