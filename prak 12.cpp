#include <iostream>
using namespace std;
int main () 
{
    float tinggi=20,r,luasalas,voltabung,kelalas,luasselimut ;
    char ulang = 'y';

    while (ulang == 'y' ||ulang == 'Y' ){
       system("cls"); 
    cout<<"masukan jari jari lingkaran alas =";
    cin>> r;
    
    luasalas=3.14*r*r;
    voltabung=luasalas*tinggi;
    kelalas=2*3,14*r;
    luasselimut=(2*luasalas)+(kelalas+ tinggi);
    cout<<"volume tabung="<<voltabung;
    cout<<"luas selimut tabung="<<luasselimut;
    if()
    cout<<"Apakah ingin mengulang (y / n)? ";
    cin>>ulang;
    }
   return 0;
}
