#include <iostream>
#include <string>

using namespace std;

int main() 
{
    
    int* dynamicInt = new int;
    string* dynamicString = new string;

    cout << "Assign a value to the dynamically allocated integer: ";
    cin >> *dynamicInt;

    cout << "Assign a value to the dynamically allocated string: ";
    cin.ignore();
    getline(cin, *dynamicString);

    cout << "The value of dynamically allocated integer is: " << *dynamicInt << endl;
    cout << "The value of dynamically allocated string is: " << *dynamicString << endl;

    delete dynamicInt;
    delete dynamicString;

    return 0;
}
