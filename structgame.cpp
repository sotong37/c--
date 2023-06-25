#include <iostream>
using namespace std;

struct gamelist
{
    string nama, developer;
    float rating;
    string genre [4];
    
};

int main (){
    gamelist gmlst;
    gmlst.nama = " elden ring ";
    gmlst.developer = " fromsoftware ";
    gmlst.rating = 9.6;
    gmlst.genre[0] = " rpg ";
    gmlst.genre[1] = " openworld ";
    gmlst.genre[2] = " souls-like ";
    gmlst.genre[3] = " dark fantasy";

    cout<<"nama        : "<<gmlst.nama<<endl; 
    cout<<"developer   : "<<gmlst.developer<<endl; 
    cout<<"rating      : "<<gmlst.rating<<endl; 
    cout<<"genre       : "<<gmlst.genre[0]<<","<<gmlst.genre[1]<<","<<gmlst.genre[2]<<","<<gmlst.genre[3]<<endl; 
}
