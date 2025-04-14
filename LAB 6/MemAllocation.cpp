#include <iostream>
using namespace std;

int main(){
    int numberOfElements = 0;
    int * dynamicArray = nullptr;

    cout<<"How many number would you like to type? ";
    cin>>numberOfElements;

    dynamicArray = new int[numberOfElements];

    if (dynamicArray == nullptr){
        cout<<"Be fr bro";
    }
    else{
        for (int i = 0; i < numberOfElements; i++)
        {
            cout<<"Enter a number: ";
            cin>>dynamicArray[i];
        }
        cout<<"you have entered: ";
            for (int j = 0; j < numberOfElements; j++)
            {
                cout<<dynamicArray[j]<<", ";
            }
        delete[] dynamicArray;
    }

    return 0;
}