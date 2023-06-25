#include<iostream>
using namespace std;
int main() 
{
    string  mm[6] = {"alfamart","indomaret","alfamidi","circle k","seveneleven","tsamania"};
    cout<<"menampilkan secara manual"<<endl;
    cout<<"nama minimarket : "<<mm[0]<<endl;
    cout<<"nama minimarket : "<<mm[1]<<endl;
    cout<<"nama minimarket : "<<mm[2]<<endl;
    cout<<"nama minimarket : "<<mm[3]<<endl;
    cout<<"nama minimarket : "<<mm[4]<<endl;
    cout<<"nama minimarket : "<<mm[5]<<endl;
   
    cout<<" "<<endl;
    cout<<"menampilkan secara otomatis"<<endl;
    for(int i = 0; i<6; i++)
    cout<<"nama minimarket : "<<mm[i]<<endl;
}