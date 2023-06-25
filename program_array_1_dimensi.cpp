#include <iostream>
using namespace std;
int main (){
    string makanan[5] = {"nasi goreng","gulai babi","sate ayam","indomie","martabak"};
    cout << "Daftar Makanan Favorit:\n";
    for(int i=0;i<5;i++) {
    cout <<i+1<<". "<<makanan[i]<<endl; 
    }
}