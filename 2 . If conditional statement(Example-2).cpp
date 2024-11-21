#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your age=";
    cin>>age;
    if(age<18)
    {
        cout<<"You Are Not Eligible for driving licence";
    }
    if(age>=18)
    {
        cout<<"You Are Eligible for driving licence";
    }
}