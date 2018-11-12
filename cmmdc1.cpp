#include<iostream>
using namespace std;
int a,b;
int main ()
{
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    if(a==b)
    {cout<<a;}
    else
    {while(a!=b)
    if(a>b) {a=a-b;}
        else
            {b=b-a;}
}
        cout<<"CMMDC este "<<a;
        return 0;
    }



