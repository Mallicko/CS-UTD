/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

double getAvg (double rain [], int size, int &sum);
void displayResult(double avg, double sum);

int main()
{
    const int SIZE = 12;
    int sum;
    double rain [SIZE], rain_drop, avg;
    string fName;
    
    cout << "Enter the file name: ";
    cin >> fName;
    
    ifstream input;
    input.open(fName);

    if(input)
    {
        for (int i = 0; i < 12; i++)
        {
            input >> rain_drop;
            rain [i] = rain_drop;
        }
    }
    else
    {
        cout << "Error, wrong name.\n";
    }
    
    avg = getAvg (rain, 12, sum);
    if (avg > 0)
    {
        displayResult (avg, sum);
    }
    
    return 0;
}

double getAvg (double rain [], int size, int &sum)
{
    sum = 0;
    
    for (int i = 0; i < 12; i++)
    {
        sum += rain [1];
    }
    
    return double (sum) / size;
}

void displayResult(double avg, double sum)
{
    cout << "The total number of rain fall is " << sum << endl;
    cout << "The average number of rain fall is " << avg << endl;
}
