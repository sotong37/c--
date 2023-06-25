#include <iostream>
using namespace std;

    int tambah ( int x , int y){
        int usia;

        usia = x - y ;
        cout<<"usia : "<<usia<<endl;
        return usia;
    }
int main(){

    int tahunsekarang=2023,tahunlahir,usia;
    cout<<"masukan tahun lahir";
    cin>>tahunlahir;
    usia =tambah(tahunsekarang,tahunlahir);
    cout<<"usia : "<<usia<<endl;

    system("pause");
    return 0;

}