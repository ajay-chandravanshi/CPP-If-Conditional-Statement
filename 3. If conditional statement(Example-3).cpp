#include <iostream>
using namespace std;
int main()
{
    int English;
    int Maths;
    int Hindi;
    int Biology;
    int Chemistry;
    cout<<"Enter  English ,Maths, Hindi ,Biology ,Chemistry Number=";
    cin>>English>>Maths>>Hindi>>Biology>>Chemistry;
    if(English>=23)
    {
        cout<<"You Are Pass in English\n";
    }
     if(English<23)
    {
        cout<<"You Are Fail in English\n";
    }

    if(Maths>=23)
    {
        cout<<"You Are Pass in Maths\n";
    }
     if(Maths<23)
    {
        cout<<"You Are Fail in Maths\n";
    }

    if(Hindi>=23)
    {
        cout<<"You Are Pass in Hindi\n";
    }
     if(Hindi<23)
    {
        cout<<"You Are Fail in Hindi\n";
    }

    if(Biology>=23)
    {
        cout<<"You Are Pass in Biology\n";
    }
     if(Biology<23)
    {
        cout<<"You Are Fail in Biology\n";
    }

    if(Chemistry>=23)
    {
        cout<<"You Are Pass in Chemistry\n";
    }
     if(English<23)
    {
        cout<<"You Are Fail in Chemistry\n";
    }
}