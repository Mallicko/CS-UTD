#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int storeNumber = 0;
    long long int salesValue = 0;
    string input = "";
    cout << "Enter the name of the input file.";
    cin >> input;
    cout << endl;
    string fullname = input;

    ifstream inputFile;
    inputFile.open(fullname);
    ofstream outputFile;
    outputFile.open("saleschart.txt");

    if (inputFile)
    {
        string line = "";
        if (inputFile >> storeNumber)
        {
            outputFile << "SALES BAR CHART\n";
            outputFile << "(Each * equals 5,000 dollars)\n";
            inputFile >> salesValue;
            if (storeNumber >= 100 || storeNumber <= 0)
            {
                cout << "Error! The store number " << storeNumber << " is not valid." << endl;
            }
            else
            {
                if (salesValue < 0)
                {
                    cout << "Error! The sales value for store " << storeNumber << " is negative." << endl;
                }
                else
                {
                    int divy = salesValue/5000;
                    outputFile << "Store " << fixed << right << setw(2) << storeNumber << ": ";
                    for (int i = 0; i != divy; i++)
                    {
                        outputFile << "*";
                    }
                    outputFile << "\n";
                }
            }
        }
        while (inputFile >> storeNumber)
        {
            inputFile >> salesValue;
            if (storeNumber >= 100 || storeNumber <= 0)
            {
                cout << "Error! The store number " << storeNumber << " is not valid." << endl;
            }
            else
            {
                if (salesValue < 0)
                {
                    cout << "Error! The sales value for store " << storeNumber << " is negative." << endl;
                }
                else
                {
                    int divide = salesValue/5000;
                    outputFile<< "Store " << fixed << right << setw(2)<< storeNumber <<": ";
                    for (int i = 0; i != divide; i++)
                    {
                        outputFile << "*";
                    }
                    outputFile << "\n";
                }
            }
        }
    }
    else
    {
        cout<<"Error the file \""<<fullname<<"\" could not be opened."<<endl;
        return 0;
    }
    inputFile.close();
    outputFile.close();

    return 0;
}
