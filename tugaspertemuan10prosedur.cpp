#include <iostream>
using namespace std;

void tambah ( int x , int y){
    int usia;

    usia = x - y ;
    cout<<"usia : "<<usia<<endl;
}
int main(){

    int tahunsekarang=2023,tahunlahir,usia;
    cout<<"masukan tahun lahir";
    cin>>tahunlahir;
    tambah(tahunsekarang,tahunlahir);

    system("pause");
    return 0;

}