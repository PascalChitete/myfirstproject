#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{   
    int t = time(0);
    srand(t);
    int randomN =rand();
    int daysUntilExpiration = rand() % 12;

    if (daysUntilExpiration <=10 && daysUntilExpiration >5)
    {
        cout << "Your subscription will expire soon." <<endl<< " Renew now!"<<endl;
    }

    else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1)
    {
        cout << "Your subscription expires in "<< daysUntilExpiration << " days"<< endl<< "Renew now and save 10%!!"<<endl;
    }

    else if (daysUntilExpiration <= 1 && daysUntilExpiration > 0){
        cout << "Your subscription expires within a day!" << endl << "Renew now and save 20%!"<<endl;
    }
    else if (daysUntilExpiration == 0){
        cout << "Your subscription had expired"<<endl;
    }
    else if (daysUntilExpiration > 10)
    {
        cout << "You have an active subscription."<< endl;
    }

    return 0;
}