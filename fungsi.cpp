#include <iostream>
using namespace std;
int hitungluas(int s){
    int luas;
    luas=s*s;
    return luas;
}

int main(){
    int sisi, luas;
    cout<<"masukan sisi ";
    cin>>sisi;
    luas = hitungluas(sisi);
    cout<<"luas persegi = "<<luas;
}
//prosedur dengan parameter