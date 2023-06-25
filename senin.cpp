#include <iostream>
using namespace std;
int main (){
    int tanggal, tahun, jumlah=0, i; 
    cout<<"masukan  tanggal lahir  ";
    cin>> tanggal;
    cout<<"masukan  tahun lahir ";
    cin>> tahun;
    
    for (i=tanggal; i<=tahun; i=+tanggal){
    if((i+jumlah)<=tahun){
    jumlah=jumlah+i;
    }
    else 
    i=tahun+1;
}
cout<<jumlah;
}
