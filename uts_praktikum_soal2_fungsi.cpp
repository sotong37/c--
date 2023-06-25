#include <iostream>
using namespace std;

    int cepat(int a , int b ){
        int jarak;
        jarak= a * b ;
    }
int main(){
    int jarak,waktu,kecepatan;
    cout<<"masukan kecepatan (km/h)"<<endl;
    cin>>kecepatan;
    cout<<"masukan waktu tempuh (jam)"<<endl;
    cin>>waktu;
    jarak= cepat(kecepatan,waktu);
    cout<<"jarak tempuh anda adalah "<<(jarak)<<endl;
}