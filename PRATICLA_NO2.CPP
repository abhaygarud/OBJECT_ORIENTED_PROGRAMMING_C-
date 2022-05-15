#include <iostream>
using namespace std;

class Complex
{
    public:
    float Real,Img;

    Complex()
    {
        Real=0;
        Img=0;
    }
    Complex(float X,float Y)
    {
        Real=X;
        Img=Y;
    }

    Complex operator +(Complex );
    Complex operator *(Complex );
    friend ostream& operator<<(ostream&,Complex&);
    friend istream& operator>>(istream&,Complex&);

};
Complex Complex ::operator+(Complex C)
{
    Complex Temp;
    Temp.Real=Real+C.Real;
    Temp.Img=Img+C.Img;
    return (Temp);
}
Complex Complex ::operator*(Complex C)
{
    Complex Temp;
    Temp.Real=(Real*C.Real)-(Img*C.Img);
    Temp.Img=(Real*C.Img)+(Img+C.Real);
    return (Temp);

}
istream& operator>>(istream& in,Complex& C)
{
    in>>C.Real;
    in>>C.Img;
    return in;
}
ostream& operator<<(ostream& out,Complex& C)
{
    out<<C.Real;
    out<<"+"<<C.Img<<"i";
    return out;
}
int main(){
    Complex a1,a2,a3,a4;
    cout<<"Enter the first Complex number"<<endl;
    cout<<"Enter Real and Imaginary part of first complex number :"<<endl;
    cin>>a1;
    cout<<"Enter the second Complex number"<<endl;
    cout<<"Enter Real and Imaginary part of first complex number :"<<endl;
    cin>>a2;

    cout<<"Arithmatic opertions are :"<<endl;
    a3=a1+a2;
    cout<<"addition is :"<<a3<<endl;

    a4=a1*a2;
    cout<<"<multipliction is :"<<a4<<endl;
       
    return 0;
}