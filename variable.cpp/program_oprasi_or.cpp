#include <iostream>
using namespace std;

int main(){
    int a,b,c
    hasil,hasil1,hasil2,hasilakhir;
    cout<<"masukan a=";
    cin>>a;
    cout<<"masukan b=";
    cin>>b;
    cout<<"masukan c=";
    cin>>c;

    hasil = a+3<5;
    hasil1 = b>a+5;
    hasil2 = c-5>=3;
    hasilakhir = hasil||hasil1||hasil2;

    cout<<"hasil dari a+3<5="<<hasil<<endl;
    cout<<"hasil dari b>a+5="<<hasil1<<endl;
    cout<<"hasil dari b>a+5="<<hasil2<<endl;
    cout<<"hasil dari hasil akhir ="<<hasilakhir<<endl;
    return 0;
}
     
    