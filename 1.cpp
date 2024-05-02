#include <iostresm>
#include <string>
using namespace std::;
int main() {
    
    int*dynamicInt = new int;
     string* dynamicString = new std:: string;
     cout << "ENTER THE INTEGER VALUE"<< endl;
     cin >> *dynamicInt;
     cout << "ENTER A STRINGVALUE" endl;
     cin.ignore();
     getline(cin, *dynamicString);
     cout << "Dynamically allocated integer value"<< *dynamicInt<< endl;
     cout << "Dynamically allocated string value"<< *dynamicString<< endl;
     delete dynamicInt;
     delete dynamicString;
     return 0;
     

}