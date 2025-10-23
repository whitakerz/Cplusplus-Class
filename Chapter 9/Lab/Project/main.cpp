// Zach Whitaker
// October 14, 2025,
// Chapter 9 Lab

#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

struct SnowfallData {
    string mdate;
    float minches;
};

// I had issues with dates sorting alphabetically, so I converted from string and added months as days
int toDays(const string &date) {
    int m, d;
    sscanf(date.c_str(), "%d/%d", &m, &d);
    return (m * 31) + d; // simple numeric value for sorting
}
// I wanted to also sort by snowfall so I added this
void sortSnowfallDataInches(SnowfallData data[], int size)
{

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (data[j].minches < data[j + 1].minches) {
                SnowfallData temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}
// I got tired of typing dates
void createRandomData(SnowfallData data[], int size)
{
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < size; i++) {
        int month = rand() % 12 + 1;
        int days = rand() % 28 + 1;
        float inches = rand() % 50 + 1;

        string date = to_string(month) + "/" + to_string(days);
        data[i].mdate = date;
        data[i].minches = inches;
    }

}

void inputSnowfallData(SnowfallData &data)
{
    float inches = 0.0f;
    cout << "Enter the date (MM/DD): ";
    cin >> data.mdate;
    cout << "Enter the minimum inches of snowfall: ";
    while (true) {
        cin >> inches;
        if (inches < 0.0f) cout << "Please input a valid positive measurement of snow in inches:";
        else break;
    }
    data.minches = inches;
}
//bubble sort ascending
//takes an array of struct objects by reference to the starting address
//sorts in place
void sortSnowfallData(SnowfallData data[], int size)
 {
    /* I could also do this without passing the size
     * size = sizeof(data) / sizeof(data[0]
     */
    for (int i = 0; i < size - 1; i++) {
         for (int j = 0; j < size - i - 1; j++) {
             if (toDays(data[j].mdate) > toDays(data[j + 1].mdate)) {
                 SnowfallData temp = data[j];
                 data[j] = data[j + 1];
                 data[j + 1] = temp;
             }
         }
     }
 }

// function to display the array of snowfall data to the screen pretty-like
void displaySortedData(SnowfallData data[], int size)
{
    int setwDate = 8;
    int setwInches = 5;
    cout << endl << "Sorted snowfall data:" << endl;
    cout << left << setw(setwDate) << "Date" << "Snowfall" << endl;
    for (int i = 0; i < size; i++) {
        cout << left << setw(setwDate) << data[i].mdate << setw(setwInches) << data[i].minches << " inches" << endl;
    }
}

int main() {
    int daysToCollect = 0;
    int random = 0;

    cout << fixed << setprecision(1);
    cout << "How many days of snowfall data do you want to collect? ";
    cin >> daysToCollect;
    while (true) {
        if (daysToCollect < 2) {
            cout << "You must collect at least two days of snowfall data." << endl;
            cout << "Please try again. :";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> daysToCollect;
            }
        else if (daysToCollect > 100) {
            cout << "You can only collect up to 100 days of snowfall data." << endl;
            cout << "Please try again. :";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> daysToCollect;
        }
        else {
            break;
        }
    }

    SnowfallData data[daysToCollect]; // creates an array of instances of type SnowfallData


    cout << "Do you want to collect snowfall data randomly? (1-Yes 2-No): "; // ask to make testing easier
    cin >> random;
    if (random == 1) {
        createRandomData(data, daysToCollect);
    }
    if (random != 1) {
        for (int i = 0; i < daysToCollect; i++) {
            inputSnowfallData(data[i]); // calls the function to input snowfall data daysToCollect times
            // passes an address of a location in the array
        }
    }
    sortSnowfallData(data, daysToCollect); // uses the bubble sort algorithm to order the dates
    cout << "Thank for for giving me the data. Your logs sorted by date is listed below:" << endl;
    displaySortedData(data, daysToCollect); // displays the sorted data
    sortSnowfallDataInches(data, daysToCollect); // sorts the data by inches
    cout << endl;
    cout << "Thank for for giving me the data. Your logs sorted by inches is listed below:" << endl;
    displaySortedData(data, daysToCollect); // displays the sorted data
    return 0;
}
