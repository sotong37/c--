#include <iostream>
using namespace std;
void hitungluas(int s){
    int luas;
    luas=s*s;
    cout<<"luas persegi = "<<luas;
}

int main(){
    int sisi;
    cout<<"masukan sisi ";
    cin>>sisi;
    hitungluas(sisi);
}
//prosedur dengan parameter