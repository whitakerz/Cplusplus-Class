// Zach Whitaker
// October 14, 2025,
// Chapter 9 Lab

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct SnowfallData {
    string mdate;
    float minches;
};

void inputSnowfallData(SnowfallData &data) {
    cout << "Enter the date (MM/DD): ";
    cin >> data.mdate;
    cout << "Enter the minimum inches of snowfall: ";
    cin >> data.minches;
}

void sortSnowfallData(SnowfallData data[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (data[j].mdate < data[j + 1].mdate) {
                SnowfallData temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void displaySortedData(SnowfallData data[], int size) {
    cout << endl << "Sorted snowfall data:" << endl;
    cout << left << setw(10) << "Date" << "Snowfall (inches)" << endl;
    for (int i = 0; i < size; i++) {
        cout << left << setw(10) << data[i].mdate << data[i].minches << " inches" << endl;
    }
}

int main() {
    int daysToCollect = 0;

    cout << fixed << setprecision(3);
    cout << "How many days of snowfall data do you want to collect? ";
    cin >> daysToCollect;

    SnowfallData *data = new SnowfallData[daysToCollect];

    for (int i = 0; i < daysToCollect; i++)
        inputSnowfallData(data[i]);

    sortSnowfallData(data, daysToCollect);
    displaySortedData(data, daysToCollect);
    return 0;
}
