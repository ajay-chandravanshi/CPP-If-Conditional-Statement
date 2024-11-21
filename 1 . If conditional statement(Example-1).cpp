#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter Two number=";
    cin>>a>>b;
 
    if(a>b)
    {
        cout<<"First number is greater then Second";
    }
    if(a<b)
    {
        cout<<"Second number is greater then First";
    }
    if(a==b)
    {
        cout<<"Both Number is Equal";
    }
}