#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream MyFile("example.txt");

    if(MyFile.is_open())
    {
        MyFile<<"this is a line.\n";
        MyFile<<"this is another line.\n";
        MyFile.close();
    }
    else
    {
        cout<<"Unable to open file";
    }
    return 0;
}