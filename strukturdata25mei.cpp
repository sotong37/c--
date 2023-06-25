#include <iostream>
using namespace std;
int main ()
{   
    short angka[5]={10,20,30,40,50};
    for (int i=0;i<5;i++)
    {
        if (angka[i] == 30)
        {
            cout<<"bilangan yang dicari telah di temukan "<<angka[i]<<endl;
            break;
        }
        // else if (angka[i] !=30)
        // {
        //     cout<<angka[i]<<endl;
        // }
    }
}