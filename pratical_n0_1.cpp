#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
#define M 10

class Div
{
    int roll;
    
    char Name[50], Class[5], Division[5], Dob[20], Bg[15], Contact[15], Phone[15], Liscense[12];

public:
    static int stdno;
    int size=10;
    static void count()
    {
        cout << "no Of objects created : " << stdno;
    }
    //by default constructor
    Div()
    {
        roll = 0;
        strcpy(Name, "Abhay Sanjay Garud");
        strcpy(Class, "SE");
        strcpy(Division, "A");
        strcpy(Dob, "15-07-2002");
        strcpy(Bg, "A+");
        strcpy(Contact, "8149191779");
        strcpy(Phone, "92702347091");
        strcpy(Liscense, "000000000");
        ++stdno;
    }
    //copy constructor
    Div(Div *obj)
    {
        roll = 0;
        strcpy(Name, obj->Name);
        strcpy(Class, obj->Class);
        strcpy(Division, obj->Division);
        strcpy(Dob, obj->Dob);
        strcpy(Bg, obj->Bg);
        strcpy(Contact, obj->Contact);
        strcpy(Phone, obj->Phone);
        strcpy(Liscense, obj->Liscense);
        ++stdno;
    }
    //destructor
    ~Div()
    {
        cout << this->Name << " ---Object is destroyed---" << endl;
    }

    //function declaration
    void Getdata(void);
    friend void Display(Div obj);
};

void Div::Getdata(void)
{
    //get the value from the user
    cout << "Enter Name :" << endl;
    cin >> Name;

    cout << "class :" << endl;
    cin >> Class;
    cout << "Division :" << endl;
    cin >> Division;
    cout << "Date of Birth:" << endl;
    cin >> Dob;

    cout << "Bloood group :" << endl;
    cin >> Bg;

    cout << "Contact:" << endl;
    cin >> Contact;

    cout << " Phone:" << endl;
    cin >> Phone;
     try
    {
        if(strlen(Phone)!=10)
        {
           throw Phone;
        }
        else
        {
        cout << "Phone : " << setw(1) <<Phone << endl;
            
       }
    }
    catch(char[])
    {
        cout<<"plzz enter the right numer"<<endl;
        cin>>Phone;
        
        
    }


    cout << " Liscense:" << endl;
    cin >> Liscense;
}
//function defination
void Display(Div A)
{
   
    cout << "Name :" << setw(1) << A.Name << endl;
    cout << "Class : " << setw(1) << A.Class << endl;
    cout << "Divsion :" << setw(1) << A.Division << endl;
    cout << "Date of birth" << setw(1) << A.Dob << endl;
    cout << "blood group:" << setw(1) << A.Bg << endl;
    cout << "Contatc: " << setw(1) << A.Contact << endl;
    cout << "Phone : " << setw(1) << A.Phone << endl;        
    cout << "liscense:" << setw(1) << A.Liscense << endl;
       
}
int Div::stdno;

int main()
{
    int n, i;
    Div D1, *Ptr[5];
    cout << "-----Default constructor called------" << endl;
     Display(D1);

    D1.Getdata();


    Div D2(&D1);
    cout << "-----copy constructor called------" << endl;
    Display(D2);

    cout << "Enter the NUmber For how ,much time do you want to create a object" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        Ptr[i] = new Div();
        Ptr[i]->Getdata();
    }
    for (i = 0; i < n; i++)
    {
        Display(*Ptr[i]);
        Div::count();
    }

    return 0;
}