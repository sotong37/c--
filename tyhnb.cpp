#include <iostream>
using namespace std;
int main (){
    int tanggal, tahun, k, jk,i; 
    cout<<"masukan  tanggal lahir  ";
    cin>> tanggal;
    cout<<"masukan  tahun lahir ";
    cin>> tahun;
    for (k=tanggal; k<=tahun; k=k+tanggal)
     for (jk=k; jk<tahun; jk=jk+k)
     cout<<jk<<" ";
}