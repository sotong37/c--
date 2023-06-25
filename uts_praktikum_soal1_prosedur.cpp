#include <iostream>
using namespace std;
void laptop(){
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
    laptop();
}