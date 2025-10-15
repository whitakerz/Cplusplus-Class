#include<iostream>
#include<string>
using namespace std;


string findHighestScore(int score[], string name[])
{

    int highestScore = 0;
    for (int i = 0; i < 6; i++)
    {
        if (score[i] > score[highestScore])
        {
            highestScore = i;
        }
    }
    return name[highestScore];
}

void displayStudentInfo(string name[], int score[], char grade[])
{
    int size = sizeof(name) / sizeof(name[0]);
    for (int i = 0; i < size; i++)
    {
        cout << name[i] << " " << score[i] << " " << grade[i] << endl;
    }
}

char calculateGrades(string name[], int score[], char grade[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (score[i] >= 90)
        {
            grade[i] = 'A';
        }
        else if (score[i] >= 80)
        {
            grade[i] = 'B';
        }
        else if (score[i] >= 70)
        {
            grade[i] = 'C';
        }
        else if (score[i] >= 60)
        {
            grade[i] = 'D';
        }
        else
        {   grade[i] = 'F';}
    }
}

int old()
{
    int size = 0;
    string studentNames[] = {"John", "Jane", "Jill", "Jake", "Jenny", "Jessica"};
    int testScores[] = {90, 80, 70, 60, 50, 40};
    char grade[] = {'A', 'B', 'C', 'D', 'F', 'F'};
    displayStudentInfo(studentNames, testScores, grade);

    return 0;
}

