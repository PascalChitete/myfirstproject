#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{   
    int t = time(0);
    srand(t);
    int randomN = rand();
    int daysUntilExpiration = rand() % 12;

    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription had expired" << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl << "Renew now and save 20%!" << endl;
            break;
        case 2:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl << "Renew now and save 10%!!" << endl;
            break;
        case 3:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl << "Renew now and save 10%!!" << endl;
            break;
        case 4:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl << "Renew now and save 10%!!" << endl;
            break;
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl << "Renew now and save 10%!!" << endl;
            break;
        case 6:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 7:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 8:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 9:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
    }

    return 0;
}
