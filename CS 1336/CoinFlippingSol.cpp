#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int seed;
    int x;
    char user_input;

    cin >> seed;

    // Call the srand function to seed the random number generator
    // The seed is the argument passed to the function

    srand(seed);
    unsigned int x1, x2, t1;
    x1 = 0; x2 = 0;
    
    x = rand () % 2 + 1;
    if (x == 1)
    {
        cout << "Flip = Heads\n";
        x1++;
    }
    else
    {
        cout << "Flip = Tails\n";
        x2++;
    }
        
    
    do
    {
        x = 0;
        cout << "Do you want to flip again? " 
             << "Y for Yes or N for no" << endl;
        cin >> user_input;
        
        if (user_input == 'Y' || user_input == 'y')
        {
            x = rand () % 2 + 1;
            if (x == 1)
            {
                cout << "Flip = Heads\n";
                x1++;
            }
            else
            {
                cout << "Flip = Tails\n";
                x2++;
            }
        }
        else if (user_input == 'N' || user_input == 'n')
        {
            break;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    } while (user_input == 'Y' || user_input == 'y' || user_input != 'N' || user_input != 'n');
    
    t1 = x1 + x2;
    
    cout << x1 << " of the "<< t1 << " flips were Heads or " << fixed << setprecision (1) << (double) (t1 - x2) / t1 * 100
         << "% were Heads." << endl;
    cout << x2 << " of the "<< t1 << " flips were Tails or " << fixed << setprecision (1) << (double) (t1 - x1) / t1 * 100
         << "% were Tails." << endl;
    
    return 0;
}

