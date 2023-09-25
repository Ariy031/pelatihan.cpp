#include<iostream>
using namespace std;
int main()
{
    int nilai1,nilai2;
    bool nilai;
    cout<<"nilai1=";
    cin>>nilai1;
    cout<<"nilai2=";
    cin>>nilai2;
    nilai= nilai1 > nilai2;
    cout<<"nilai yang pertama ="<<nilai <<endl;
    nilai= nilai2 > nilai1;
    cout<<"nilai yang kedua="<<nilai <<endl;
}    