#include <iostream>
#include <time.h>
using namespace std;

int main()
{

    for (int i = 0; i < 10; i++) {
        srand(time(NULL));
        int num1 = rand();
        int num2 = rand();
        cout << "first time " << num1 << " + " << num2 << " = " << endl;
        srand(time(NULL));
        num1 = rand();
        num2 = rand();
        cout << "second tiume " << num1 << " - " << num2 << endl;
    }
}