#include <iostream>
using namespace std;
#include <cstring>
#include <string>
#include <fstream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    cout << "Question 1" << endl;
    int score = 100;
    int* ptrScore;
    ptrScore = &score;
    std::cout << *ptrScore << std::endl;
    *ptrScore = 95;
    std::cout << score;

    cout << "\n\nQuestion 2\n";
    int data[5] = {10,20,30,40,50};
    int* dataPtr = data;
    std::cout << *(dataPtr + 3);

    cout << "\n\nQuestion 3 \n" ;
    float *fltPtr = new float;
    *fltPtr = 3.14f;
    delete fltPtr;

    cout << "\n\nQuestion 4 \n";
    char *charArrPtr = new char[50];
    delete[] charArrPtr;

    cout << "\n\nQuestion 5 \n";
    int hourlyTemps[4] = {85,88,92,90};
    ofstream outFile;
    for (int i=0; i < 4; i++) {
        outFile.open("hourlyTemps.txt");
        outFile << hourlyTemps[i] << endl;

    }
        outFile.close();

    cout << "\n\nQuestion 6" << endl;
    char city[50];
    strcpy(city,"New York City");
    cout << city << endl;

    cout << "\n\nQuestion 7" << endl;
    int num;
    int smallest = std::numeric_limits<int>::max();



    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}