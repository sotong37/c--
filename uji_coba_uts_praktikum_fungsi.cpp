#include <iostream>
using namespace std;

    int cepat(int a , int b ){
        int jarak;
        jarak= a * b ;
    }
     
    int laptop(){
    int harga;
    cout<<"masukan harga laptop"<<endl;
    cin>>harga;

    if (harga<=10000000){
        cout<<"laptop anda low range"<<endl;
    } else if (harga<=20000000){
        cout<<"laptop anda mid range"<<endl;
    } else if (harga<=30000000){
        cout<<"laptop anda high range"<<endl;
    } else {
        cout<<"laptop anda terlalu spek dewa"<<endl;
    }
}
int main(){
    int jarak,waktu,kecepatan;
    cout<<"masukan kecepatan (km/h)"<<endl;
    cin>>kecepatan;
    cout<<"masukan waktu tempuh (jam)"<<endl;
    cin>>waktu;
    jarak= cepat(kecepatan,waktu);
    cout<<"jarak tempuh anda adalah "<<(jarak)<<endl;
    
    laptop();
}