#include <iostream>
using namespace std;
int main ()
{   
    int  bil,i;
    short angka[5]={10,20,30,40,50};
    cout<<"masukan bilangan yang anda ingin cari"<<endl;
    cin>>bil;
    for (i=0;i<5;i++)
    {
        if (angka[i] == bil)
        {
            cout<<"bilangan yang dicari telah di temukan "<<angka[i]<<endl;
            break;
        }
        else if (angka[i] !=bil)
        {
            cout<<angka[i]<<endl;
        }
    }
}