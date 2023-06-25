#include <iostream>
using namespace std;
int main () 
{
    float tahunsekarang=2022,tahunlahir,usia;
    char ulang = 'y';

    while (ulang == 'y' ||ulang == 'Y' ){
       system("cls"); 

    cout<<"masukan tahun lahir";
    cin>>tahunlahir;
    usia=tahunsekarang-tahunlahir;
    cout<<"usia anda="<<usia;
    if(usia<=25)
    cout<<"masih muda";
    else
    cout<<"sudah dewasa";

    cout<<"Apakah ingin mengulang (y / n)? ";
    cin>>ulang;
    }
}