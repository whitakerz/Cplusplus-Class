// Zach Whitaker
// October 14, 2025,
// Lab 8 Assignment

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

class Payroll {
    public:
    Payroll() //default constructor
    {
        mHourlyRate = 0;
        mHoursWorked = 0;
    }
    // parameterized constructor
    Payroll(float hourlyRate, float hoursWorked) : mHourlyRate(hourlyRate), mHoursWorked(hoursWorked){}

    float getPay() const
    {
        return mHourlyRate * mHoursWorked;
    }

    float getHourlyRate() const
    {
        return mHourlyRate;
    }

    void setHourlyRate(float hourlyRate)
    {
        mHourlyRate = hourlyRate;
    }

    float getHoursWorked() const
    {
        return mHoursWorked;
    }

    void setHoursWorked(float hoursWorked)
    {
        mHoursWorked = hoursWorked;
    }

    private:
    float mHourlyRate;
    float mHoursWorked;
};

int countLines(ifstream& inFile) // function to count the number of lines in a file
{
    int lineCount = 0;
    string line;
    inFile.clear();
    inFile.seekg(0, ios::beg);
    while (getline(inFile, line)) {
        if (!line.empty())
            ++lineCount;
    }
    inFile.clear();
    inFile.seekg(0, ios::beg);
    return lineCount;
}

int main()
{
    float hours = 0;
    float rate = 0;
    string line;
    const string filePath=(R"(E:\School\C++ Programming\Chapter 8\Lab\Project\payroll (1).dat)");
    ifstream inFile(filePath);
    if (!inFile) { // open filepath as ifstream object
        cout << "File not found" << endl;
        return 1;
    }
    int lineCount = countLines(inFile); // find number of lines in file to determine length of array
    //cout << lineCount << endl;

    Payroll employees[lineCount]; // declare an array of Employees

    int i = 0;
    while (inFile >> hours >> rate && i < lineCount){
        employees[i].setHoursWorked(hours);
        employees[i].setHourlyRate(rate);
        i++;
    }
    //cout << (sizeof(employees) / sizeof(employees[1]) )<< endl;
    cout << "     Payroll" << endl;
    cout << "-------------------" << endl << endl;
    cout << setw(8) << "Employee" << setw(10) << "Gross Pay" << endl;
    cout << setw(8) << "********" << setw(10) << "*********" << endl;
    cout << fixed << setprecision(2);
    for (int j = 0; j < lineCount; j++) {
        cout << right << setw(4) << (j + 1) << ": "
             << right << setw(4) << "$" << setw(7) << employees[j].getPay()
             << endl;
    }

    inFile.close();
    return 0;
}