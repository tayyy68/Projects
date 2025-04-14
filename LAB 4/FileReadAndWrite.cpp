#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char data[100];

    ofstream outfile;
    outfile.open("afile.txt");

    cout<<"writing to the file"<<endl;
    cout<<"Enter your name: ";
    cin.getline(data, 100);

    outfile<<data<<endl;

    cout<<"Enter your age: ";
    cin>>data;
    cin.ignore();

    outfile<<data<<endl;

    outfile.close();
    ifstream infile;
    infile.open("afile.txt");

    cout<<"Reading from the file"<<endl;
    infile>>data;

    cout<<data<<endl;

    infile>>data;
    cout<<data<<endl;

    infile.close();

    return 0;

    
}