#include <iostream>
using namespace std;
struct mahasiswa{
 string nama;
 int usia;
 float ipk;
 }; 
int main()
{
 mahasiswa mhs; //deklarasi variabel mhs dengan tipe struct mahasiswa
 
 mhs.nama ="Andi";
 mhs.usia = 21;
 mhs.ipk = 3.5;
 cout<<mhs.nama<<endl;
 cout<<mhs.usia<<endl;
 cout<<mhs.ipk<<endl;
}