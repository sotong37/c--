#include <iostream>
using namespace std;
int main (){
    int sila ;
    cout<<"masukan sila ke : ";
    cin>>sila;
    switch(sila){
        case 1:
        cout<<"ketuhanan yang maha esa"<<endl;
        break;
        case 2:
        cout<<"kemanusiaan yang adil dan beradab"<<endl;
        break;
        case 3:
        cout<<"persatuan indonesia"<<endl;
        break;
        case 4:
        cout<<"kerakyatan yang dipimpin oleh hikmat kebijaksanaan"<<endl
            <<"dalam permusyawaratan perwakilan"<<endl;
        break;
        case 5:
        cout<<"keadilan sosial bagi seluruh rakyat indonesia"<<endl;
        break;
        default :
        cout<<"tidak ada"<<endl;
        break;
    } 
}