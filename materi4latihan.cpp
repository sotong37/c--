#include <iostream>
using namespace std;
int main (){
    int pilihan, a=9, b=1, hasil;
    float pembagian;
    
    cout<<"1. penjumlahan"<<endl;
    cout<<"2. pengurangan"<<endl; 
    cout<<"3. perkalian"<<endl; 
    cout<<"4. pembagian"<<endl;
    cout<<"5. modulus"<<endl;

    cout<<"masukan pilihan : "<<endl;
    cin>>pilihan;

    switch(pilihan){
         case 1:
        hasil=a+b;
        cout<<"hasil penjumlahan"<<hasil<<endl;
        break;
        case 2:
        hasil=a-b;
        cout<<"hasil pengurangan"<<hasil<<endl;
        break;
        case 3:
        hasil=a*b;
        cout<<"hasil perkalian"<<hasil<<endl;
        break;
        case 4:
        pembagian=a/b;
        cout<<"hasil pembagian"<<pembagian<<endl;
        break;
        case 5:
        hasil=a%b;
        cout<<"hasil modulus"<<hasil<<endl;
        break;
        default :
        cout<<"tidak ada"<<endl;
        break;
    }
}