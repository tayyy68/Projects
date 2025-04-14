#include <iostream>
#include<string>
using namespace std;


int main(){
    int * dynamicInt = nullptr;
    string * dynamicString = nullptr;
    int integer;
    string string;
    dynamicInt = &integer;
    dynamicString = &string;

    cout<<"Enter an Integer: "<<endl;
    cin>>*dynamicInt;

    cout<<"Enter an Word: "<<endl;
    cin>>*dynamicString;

    cout<<"The integer you entered was: "<<integer<<".\n";
    cout<<"The integer you entered was: "<<string<<".\n";
      
    delete dynamicInt;
    delete dynamicString;

    return 0;
}