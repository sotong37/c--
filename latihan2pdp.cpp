#include<iostream>
using namespace std;
int main() 
{
    string  minimarket[2][3] = {{"alfamart","indomaret","alfamidi"},{"circle k","seveneleven","tsamania"}};
    cout<<"menampilkan secara manual"<<endl;
    cout<<"nama minimarket : "<<minimarket[0][0]<<endl;
    cout<<"nama minimarket : "<<minimarket[0][1]<<endl;
    cout<<"nama minimarket : "<<minimarket[0][2]<<endl;
    cout<<"nama minimarket : "<<minimarket[1][0]<<endl;
    cout<<"nama minimarket : "<<minimarket[1][1]<<endl;
    cout<<"nama minimarket : "<<minimarket[1][2]<<endl;
    
    cout<<" "<<endl;
    cout<<"menampilkan secara otomatis"<<endl;
    for (int a = 0; a<2; a++)
    {
            for (int b = 0; b<3; b++)
            {
                    cout<<"nama minimarket : "<<minimarket[a][b]<<endl;
            }
    }
}