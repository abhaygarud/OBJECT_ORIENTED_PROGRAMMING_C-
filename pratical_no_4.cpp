/* Write a C++ program that creates an output file, writes information to it, closes the file, open it 
 again as an input file and read the information from the file*/

#include <iostream>
#include<fstream>
using namespace std;

int main(){
    void Myself();
    char name[20];
    fstream file;
    file.open("detail.txt");
    if(!file)
    {
        cout<<"file is creating Error"<<endl;
    }cout<<"File created succesfully"<<endl;
    cout<<"Enter the string to write in a file"<<endl;
    cin>>name;
    file<<"My name is :"<<endl;
    file<<name;
    file.close();

    file.open("sample.txt");
    if(!file)
    {
        cout<<"Error occur in opening the file"<<endl;
    }
    char ch;
    cout<<"MY father name is :"<<endl;
    while(!file.eof())
    {
        file>>ch;
        cout<<ch;
    }
    file.close();
    




    return 0;
}