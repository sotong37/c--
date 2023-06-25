#include <iostream>
using namespace std;
int main (){
    int tahunsekarang=2023,tahunlahir,usia;
    char mengulang='y';
    while (mengulang=='y')
    {
    cout<<"masukan tahun lahir";
    cin>>tahunlahir;
    usia=tahunsekarang-tahunlahir;
    cout<<"usia anda="<<usia<<endl;
    if (usia <=17)
    {
        cout<<"usia remaja";
    }
    else
    cout<<"usia dewasa";
    cout<<"apakah anda ingin mengulang(y/n)";
    cin>>mengulang;
    }
    
 
}