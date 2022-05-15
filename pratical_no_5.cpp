/*Write a function template for selection sort that inputs, sorts and outputs an integer array and a 
float array.
*/


#include <iostream>
using namespace std;
template<class T>
void sort(T arr[],int n)
{
    int i,j;
    for(j=0;j<n-1;j++)
    {
        int mim=j;
        for(i=j+1;i<n;i++)
        {
            
            if(arr[i]<arr[mim])
            {
            mim=i;
            }
        }
        if(mim!=j)
        {
            swap(arr[j],arr[mim]);
        }
    }

}
int main(){
    int a[5]={7,2,8,1,54};
    char b[4]={'a','h','y','b'};
    float c[6]={1.2,7.6,5.4,3.8,6.0,2.1};

    sort(a,6);
    cout<<"sorted intgers"<<endl;
    for(int i=0;i<5;i++)
    cout<<"\n"<<a[i];
    sort(b,4);
    cout<<"\nsorted characters"<<endl;
    for(int i=0;i<4;i++)
    cout<<"\n"<<b[i]<<"\t";
    sort(c,6);
    cout<<"\nsorted float"<<endl;
    for(int i=0;i<6;i++)
    cout<<c[i]<<endl;

    
    return 0;
}
