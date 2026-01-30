#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

double average (double valSum, double valVal)
{
    return valSum / valVal;
}

int main()
{
    double value = 0;
    double valsRead = 0, valsVal = 0, valsInv = 0, valsSum = 0;
    string filename = "";
    cout << "Enter the input file name: ";
    cin >> filename;

    ifstream inputFile;
    inputFile.open(filename);
    ofstream outputFile;
    outputFile.open("badvalues.txt");

    if (inputFile)
    {
        cout << endl;
        if (inputFile >> value)
        {
            do
            {
                if (value >= 1 && value <= 150)
                {
                    valsVal++;
                    valsSum += value;
                }
                else
                {
                    valsInv++;
                    outputFile << fixed << right << setprecision(4) << value << "\n";
                }
                valsRead++;
            }
            while (inputFile >> value);
            if (valsRead >= 1 && value != 0)
            {
                cout << "Total number of values read: " << valsRead << endl;
                cout << "Valid values read: " << valsVal << endl;
                cout << "Invalid values read: " << valsInv << endl;
                if (valsVal >= 1)
                {
                    cout << "The average of the valid numbers read = " << fixed << right << setprecision(1) << average (valsSum, valsVal) << endl;
                }
                else
                {
                    cout << "The file did not contain any valid values." << endl;
                }
            }
        }
        else
        {
            cout << "The file did not contain any values" << endl;
        }
    }
    else
    {
        cout << "The file \""<< filename <<"\" could not be opened." << endl;
    }
    inputFile.close();
    outputFile.close();

    return 0;
}