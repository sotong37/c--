#include <iostream>
using namespace std;
int main() {
    string nama[3];
    int i;

    for(i=0;i<3;i++){
        cout<<"masukan nama:";
        cin>>nama[i];
    }    
       
    for(i=0;i<33;i++){
        cout<<"nama ke-"<<i<<"i"
            <<nama[i]<<endl;
                    }

    return 0;

}              