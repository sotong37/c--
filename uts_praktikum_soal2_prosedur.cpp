#include <iostream>
using namespace std;

    void cepat(int a , int b ){
        int jarak;
        jarak= a * b ;
        cout<<"jarak tempuh anda adalah "<<(jarak)<<endl;
    }
int main(){
    int jarak,waktu,kecepatan;
    cout<<"masukan kecepatan (km/h)"<<endl;
    cin>>kecepatan;
    cout<<"masukan waktu tempuh (jam)"<<endl;
    cin>>waktu;
    cepat(kecepatan,waktu);
}