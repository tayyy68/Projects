#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));

    int random_number = rand() % 11 + 1;
    cout<<"you have "<<random_number<<" days util expiration."<<endl;

    switch (random_number)
    {
    case 0:
        cout<<"Your subscription has expired."<<endl;
        break;
    case 1:
        cout<<"Your subscription expires within a day! Renew now and save 20%!"<<endl;
        break;
    case 2 ... 5:
        cout<<"Your subscription expires in "<<random_number<<" Renew now and save 10%!"<<endl;
        break;
    case 6 ... 10:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
        break;    
    default:
        cout<<"You have an active subscription."<<endl;
        break;
    }
    
    return 0;



}