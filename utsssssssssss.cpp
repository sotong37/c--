#include <iostream>
using namespace std;

int main(){
    int pilihan,
    char ulang;
do
{
  cout<<"Menu Makanan"<<endl;
  cout<<"1. Nasi Goreng "<<endl;
  cout<<"2. Mie Goreng " <<endl;
  cout<<"3. mie Ayam Goreng "<<endl;
  cout<<"Pilih menu makanan (1/2/3): ";
  cin>> pilihan;

  switch (pilihan) {
    case 1:
      cout<<"Anda memesan Nasi Goreng"<<endl;
      break;
    case 2:
      cout<<"Anda memesan Mie Goreng"<<endl;
      break;
    case 3:
      cout<<"Anda memesan Ayam Goreng"<<endl;
      break;
    default:
      cout<<"Pilihan makanan tidak tersedia"<<endl;
  }
     cout<<"Ingin memilih menu lain (y/t)? ";
     cin>>ulang;
     cout<<endl;
}
    while (ulang!= 't');
    cout<<"Terimakasih telah memesan";
    cout<<endl;
}