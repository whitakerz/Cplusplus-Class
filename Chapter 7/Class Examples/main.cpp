#include <iostream>
#include "Rectangle.h"

using namespace std;

int give_sum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

float give_average(int array[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

int give_max(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) max = array[i];
    }
    return max;
}

int give_min(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) min = array[i];
    }
    return min;
}

void print_array(int array[], int size)
{
    cout << "The array is: ";
    for (int i = 0; i < size; i++) {
        cout << array[i];
        if (i < size - 1) cout << ", ";
    }
    cout << endl;
}

int GetArea( int x, int y)
{
    return x * y;
}

int main()
{
    int nArea = GetArea( 200, 30);

    Rectangle myRect( 500, 300);
    Rectangle mySecondRect( 100, 20);
    Rectangle myThirdRect( 4, 5 );
    int nARea = myRect.getArea();
    int nArea2 = mySecondRect.getArea();
    int nArea3 = myThirdRect.getArea();

    myRect.setWidth( 100 );

    int size = 10;
    int holder[size];

    for (int i = 0; i < size; i++) {
        cout << "Give me the #" << i + 1 << " number: ";
        cin >> holder[i];
    }

    cout << "The sum of the numbers is: " << give_sum(holder, size) << endl;
    cout << "The average of the numbers is: " << give_average(holder, size) << endl;
    cout << "The maximum of the numbers is: " << give_max(holder, size) << endl;
    cout << "The minimum of the numbers is: " << give_min(holder, size) << endl;
    print_array(holder, size);
}
