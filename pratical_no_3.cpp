#include <iostream>
#include<cstring>
using namespace std;

class Publication
{
    protected:
    string Title;
    float Price;

    
     Publication()
    {
        Title="Default constructor called invalid input ";
        Price=0;
    }
    Publication(string T, float P)
    //paraterimized constructor
    {
        Title=T;
        Price=P;
    }

    public:
    void Getdata(void)
    {
        cout<<"Enter the Title of the Publication :"<<endl;
        cin>>Title;
        cout<<"Enter the Price of the Publication"<<endl;
        cin>>Price;
    }
    void Display(void)
    {
        cout<<"Publication Title :"<<Title<<endl;
        cout<<"Publication Price :"<<Price<<endl;
    }
};

class Book:public Publication
{
    int pagecount;
    public:
    Book():Publication()
    {
        pagecount=0;
    }
    Book(string T,float P,int C):Publication(T,P)
    //publication constructor got invoked wirh book construtor

    {
        pagecount= C;
    }
    void Getdata(void)
    {
        Publication::Getdata();
        cout<<"Enter Book Page count :"<<endl;
        cin>>pagecount;
    }
    void Display(void)
    {
        Publication::Display();
        cout<<"Page Count of the Book is :"<<pagecount<<endl;

    }


};

class Tape:public Publication
{
    float Time;
    public:
    Tape():Publication()
    {
        Time=0.0;
    }
    Tape(string S,float P,float Ti):Publication(S,P)
    //publication constructor got invoked wirh tape construtor
    {
        Time=Ti;

    }
    void Getdata()
    {
        Publication::Getdata();
        cout<<"Enter the timing of playing time :"<<endl;
        
    }
    void Display()
    {
        Publication::Display();
        cout<<"The Playing timing is :"<<Time <<"Hrs"<<endl;
    }
};

int main()
{
    //praterimized constrcutor called  book detialed 
    cout<<endl<<"------------- Book Data is-----------"<<endl;
    Book B("MAHABHARAT",500.0,150);
    B.Display();
   //praterimized constrcutor tape value called
    cout<<endl<<"------------- Tape data is---------------"<<endl;
    Tape M("MAHABHARAT",700.0,4.6);
    M.Display();
    cout<<endl<<"-----------------------------------------"<<endl;
   //class book function called
    Book b;
    b.Getdata();
    cout<<endl<<" Data Of the Book"<<endl;
    b.Display();
  //tape function called
    Tape t;
    t.Getdata();
    cout<<endl<<" Data Of the Book"<<endl;
    t.Display();
    
    return 0;
}