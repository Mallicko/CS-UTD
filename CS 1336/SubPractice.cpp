/*
The program will generate two random, one-digit integers. The larger number 
will be used as the minuend and the smaller number will be used as the 
subtrahend of a subtraction problem.
Input :: User's answer.
Output :: random generated digit - smaller random generated digit.
*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int ranVal1, ranVal2, num1, num2, answer;
    unsigned int seed;

    cin >> seed;
    srand(seed);
    
    ranVal1 = rand() % 10;
    ranVal2 = rand() % 10;
    
    //Check the bigger value
    if (ranVal1 > ranVal2)
    {
        num1 = ranVal1;
        num2 = ranVal2;
        
        cout << "What is " << num1 << " - " << num2 << "? ";
        cin >> answer;
    
        if (answer == (num1 - num2))
        {
            cout << "correct";
        }
        else
        {
            cout << "incorrect";
        }
    }
    //Check the other bigger value
    else
    {
        num1 = ranVal2;
        num2 = ranVal1;
        
        cout << "What is " << num1 << " - " << num2 << "? ";
        cin >> answer;
        
        if (answer == (num1 - num2))
        {
            cout << "correct";
        }
        else
        {
            cout << "incorrect";
        }
    }
    
    cout << "\n" << num1 << " - " << num2;
    cout << " = " << num1 - num2 << endl; 
}

