#include<iostream>
using namespace std;
int main()
{
    char hari;

    cout<<"infut hari anda (senin,selasa,rabo,kamis,jumat):";
    cin>> hari;

    switch (hari){
        case 'a':
    cout<<"semangat senin"<<endl;
    break;
        case 'b':
    cout<<"selasa ceria"<<endl;
    break;
        case 'c':
    cout<<"rabo rawit"<<endl;
    break;   
        case 'd':
    cout<<"kamis manis"<<endl;
    break;    
        case 'e':
    cout<<"jan lupa jumatan"<<endl;
    break;

    return 0;

    }

}
