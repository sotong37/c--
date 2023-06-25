#include <iostream>
using namespace std;

struct gamelist{
    string nama, developer;
    float rating;
    string genre;  
};
int main (){
    gamelist gm[5];
    for (int i=0; i<5; i++)
    {
        cout<<"masukan nama game : ";
        cin>>gm[i].nama;
        cout<<"masukan nama developer : ";
        cin>>gm[i].developer;
        cout<<"masukan rating game : ";
        cin>>gm[i].rating;
        cout<<"masukan genre : ";
        cin>>gm[i].genre;
        cout<<"======================="<<endl;
        cout<<" "<<endl;
    }
    for (int i=0; i<5; i++)
    {
        cout<<"nama game = "<<gm[i].nama<<endl;
        cout<<"nama developer = "<<gm[i].developer<<endl;
        cout<<"nama rating = "<<gm[i].rating<<endl;
        cout<<"nama genre = "<<gm[i].genre<<endl;
        cout<<"======================"<<endl;
        cout<<" "<<endl;
    }
}