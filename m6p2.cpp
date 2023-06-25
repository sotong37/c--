#include <iostream>
using namespace std;

int main (){
    char pilih = 'y';
    int tahun_lahir;

    while(pilih == 'y')
    {
        cout<<"masukan tahun lahir :";
        cin>>tahun_lahir;
        cout<<"usia anda saat ini "<<2023 - tahun_lahir<<"tahun"<<endl;

        cout<<"apakah anda ingin mengulangi";
        cin>>pilih;
        system("cls");
    }
}