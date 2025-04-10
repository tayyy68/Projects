#include <iostream>
#include<string>
using namespace std;

int main(){

    string array[8]={"B123","C234","A345","C15","B177","G3003","C235","B179"};
    int size = 8;



    for (int i = 0; i < size; i++) {
        if (!array[i].empty() && array[i][0] == 'B') {
            cout << array[i] << " starts with '" << "B" << "'" << endl;
        }
    }
        


return 0;
}