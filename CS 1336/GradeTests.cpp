#include <fstream>
#include <iostream>
#include<string>
#include <iomanip>   
using namespace std;


// builds array so that number of questions can be found, inputs file and arr[], returns updated array.
bool read(ifstream& f, string infile, char arr[])
{
    char answer;
    int i = 0;
    f.open(infile.c_str());

    if (f.fail())
    {
        return false;
    }
    else
    {
        while (f >> answer)
        {
            arr[i] = answer;
            i++;
        }
    }
    return true;
}


// Finds how many questions were answered incorrectly, inputs the file, then returns the variable count.
int readTest(ifstream &f, string file)
{
    char answer;
    int count=0;
    f.open(file.c_str());
    if (f.fail())
    {
        return -1;
    }
    else
    {
        while (f >> answer)
        {
            count++;
        }
    }
    return count;
    f.close();
}

/*displays end results, inputs the 2 arrays and maxans which is how many questions are in the test,
outputs what questions were wrong, how many were wrong, percent grade, and if student passed/failed.*/
void displayResults(char studentans[],char ans[],int maxans)
{
   
   int numblank = 0;
   for (int i = 0; i < maxans; i++)
    {
        if (studentans[i] != 'A' && studentans[i] != 'B' && studentans[i] != 'C' && studentans[i] != 'D')
        {
            numblank++;
        }
    }
   
   
    int count = 0;
    double percent;
    for (int i = 0; i < maxans; i++)
    {
       if (studentans[i] != ans[i] && (studentans[i] == 'A' || studentans[i] == 'B' ||studentans[i] == 'C' ||studentans[i] == 'D'))
        {
            cout << "Question " << i + 1
                << " has incorrect answer '" << ans[i] << "', the correct answer is '" << studentans[i] << "'." << endl;
        }
        else
        {
            count++;
        }
    }
    
            
        cout << maxans - count << " questions were missed out of " << maxans - numblank << "." << endl;
    

    percent = 100 - ((maxans - count) * 100.00)/(maxans - numblank);
    
    cout << fixed;
    
    cout<<"The student grade is "<< setprecision(2) <<percent<<"%"<<endl;
    if (percent <= 72.5)
    {
        cout << "The student has failed the quiz." << endl;
    }
    else
    {
        cout << "The student has passed the quiz." << endl;
    }
}

int main()
{
    string stuFile;
    string ansFile;
    ifstream f,f1,f2;
    int ansnum, quenum;
    cout << "Enter the name of the file containing the key." << endl;
    cin >> stuFile;
    ansnum = readTest(f1,stuFile);
    f1.close();
    int maxans = 50;
    int check = 0;
    char studentans[50];

        if (read(f, stuFile, studentans))
        {
            f.close();
        } else {
                        cout << "\"" << stuFile << "\" could not be opened." << endl;
                        check = 1;
        }
    
    if (ansnum == 0) {
     cout<<"The file containing the key was empty."<<endl;
     check = 1;
    }
    
    if (check == 0) {
    cout << "Enter the name of the file containing the student's responses." << endl;
    cin >> ansFile;
    quenum = readTest(f2,ansFile);
    f2.close();
    }
    char ans[50];

    
    if(ansnum == 0 && quenum == 0 && check == 0){
     cout<<"The file containing the key was empty."<<endl;
    }
    else
    if(ansnum != quenum && ansnum!=-1 && quenum != -1 && ansnum != 50 && ansnum != 15)
    {
        cout << "File error! There is a mismatch between the number of questions and answers." << endl;
    }
    else
    {
        if (read(f, ansFile, ans))
        {
            displayResults( studentans, ans,  maxans);
        }
        else if(check == 0)
        {
            cout << "\"" << ansFile << "\" could not be opened." << endl;
        }
    }
    return 0;
}
 