#include <iostream>
#include <string>
using namespace std;

struct SnowfallData {
    string mdate;
    float minches;

};

void inputSnowfallData(SnowfallData data)
{
    cout << "Enter the date (MM/DD): ";
    cin >> data.mdate;
    cout << "Enter the minimum inches of snowfall: ";
    cin >> data.minches;
}

void sortSnowfallData(SnowfallData data[])
{

}

void displaySortedData(SnowfallData data[])
{

}


int main()
{
    int daysToCollect = 0;
    cout << "How many days of snowfall data do you want to collect? ";
    cin >> daysToCollect;
    SnowfallData data[daysToCollect];
    for (int i = 0; i < daysToCollect; i++)
        inputSnowfallData(data[i]);
    return 0;
}