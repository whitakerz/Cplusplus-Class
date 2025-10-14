#include <iostream>
#include <iomanip>
#include <numbers>
#include <ctime>   // For time()
#include <string>
#include <cctype>  // For isupper(), islower()
#include <cmath>

using namespace std;




int addSumUpTo()
{
    int num = 0;
    cout << "Enter a positive whole number: ";
    cin >> num;
    while (num <= 0) {
        cout << "Please enter a positive whole number." << endl;
        cin >> num;
    }
    long long result = 0;
    for (int i = 1; i <= num; i++) {
        result += i;
    }
    cout << "The sum of all numbers up " << num << " is: " << result << endl;
    return result;
}

#include <iomanip>
int multiplication_table()
{

    for (int x = 1; x <= 12; x++) {
        for (int y = 1; y <= 12; y++) {
            cout << setw(3) << x * y << " ";
        }
        cout << endl;
    }
    return ( 0);
}
#include <cstdlib>
#include <ctime>
int guessing_game()
{
    unsigned seed = time(0);
    srand(seed);
    int num = 0;
    int guess = 0;
    int count = 0;
    int max = 50;

    num = rand() % max + 1;
    cout << "I am thinking of a number between 1 and " << max << "." << endl;
    cout << "Can you guess what it is? " << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        count++;
        if (guess < num) {
            cout << "Your guess is too low." << endl;
        }
        else if (guess > num) {
            cout << "Your guess is too high." << endl;
        }
        else if (guess == num) {
            cout << "You got it in " << count << " guesses!" << endl;
            break;
        }
        else {
            cout << "This is never going to happen" << endl;
        }
    } while (guess != num && count < 5);

    return 0;
}

#include <fstream>
void files()
{
    unsigned seed = time(0);
    srand(seed);
    ofstream outFile("numbers.txt");
    for (int i = 0; i < 5; i++) {
        int num = rand() % 50 + 1;
        outFile << num << endl;
    }
    outFile.close();
    ifstream inFile("numbers.txt");
    int num = 0;
    int sum= 0;
    int count = 0;
    cout << "The numbers in the file are: " << endl;
    while (inFile >> num) {
        cout << "#" << (count + 1) << ": " << num << endl;
        sum += num;
        count++;
    }
    inFile.close();
    cout << "The average of the numbers is: " << (sum / count) << endl;

}

#include <limits>
float average(float num1, float num2)
{
    return (num1 + num2) / 2;
}

int average_main()
{
    float num1 = 0;
    float num2 = 0;

    cout << "Please enter two positive numbers to average" << endl;
    cout << "Enter a the first number: ";
    while (!(cin >> num1) || num1 < 0) {
        cout << "Invalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter the second number: ";
    while (!(cin >> num2) || num2 < 0) {
        cout << "Invalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "The average of " << num1 << " and " << num2 << " is: " << average(num1, num2) << endl;
    return 0;
}

void modifyVariable(int& num2)
{
    cout << "(In Function) Enter a number to modify the variable: " << endl;
    cin >> num2;
}

int modifyVariable_main()
{
    int num1 = 10;
    cout << "(In Main)     The original number is: " << num1 << endl;
    modifyVariable(num1);
    cout << "(In Main)     The modified number is: " << num1 << endl;
    return 0;
}


double calcArea(double length, double width)
{
    double calcArea = length * width;
    return calcArea;
}

double calcArea(double radius)
{
    double calcArea = std::numbers::pi * radius * radius;
    return calcArea;
}

int calcArea_main()
{
    double length = 5.0;
    double width = 24.6;
    double radius = 0.56;
    //input
    cout << "Enter a number for length [Enter]: ";
    while (!(cin >> length) || length < 0) {
        cout << "Invalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter a number for width [Enter]: ";
    while (!(cin >> width) || width < 0) {
        cout << "Invalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter a number for radius [Enter]: ";
    while (!(cin >> radius) || radius < 0) {
        cout << "Invalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    //output
    cout << "The area of the rectangle is " << calcArea(length, width) <<" square somethings."<< endl;
    cout << "The area of the circle is " << calcArea(radius) << " square somethings." << endl;
    return 0;
}

int factorial(int num)
{
    if (num <= 1) {
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}

class Rectangle {
    private:
        double length;
        double width;

};

int main() {
    float num1 = 55.56874;
    cout << setprecision(2) << fixed << num1 << endl;
    cout << setprecision(3) << setw(12) << right << num1 << endl;

    return 0;

}

