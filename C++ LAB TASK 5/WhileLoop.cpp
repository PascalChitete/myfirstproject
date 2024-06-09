#include <iostream>
#include <limits>
using namespace std;

int main() 
{
    int valueNumber;

    cout << "Enter an integer value between 5 and 10: ";
    cin >> valueNumber;

    while (cin.fail() || valueNumber < 5 || valueNumber > 10) 
    {
        
        cin.clear();
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        cin >> valueNumber;
    }

    cout << "Your input value " << "("<< valueNumber << ")" << " has been accepted." << endl;

    return 0;
}
