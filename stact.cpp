#include <iostream>
using namespace std;
short stack[5], top = 0, max_stack=5;

void push(){
    short isi;
    if (top<max_stack){
    cout<<"masukan data = ";
    cin>>isi;
    stack[top] = isi;
    top++;
    }
}
void show(){
    if(top > 0){
    for (int i=0;i<top;i++)
    cout<<stack[i]<<", ";
    }
}
void pop(){
    short isi;
    if (top > 0){
    top--;
    }
}
void empty(){
    if(top==0)
        cout<<"stack kosong "<<endl;
    else 
        cout<<"stack tidak kosong "<<endl;
}
void full(){
    if(top==max_stack)
        cout<<"stack full "<<endl;
    else 
        cout<<"stack tidak full"<<endl;
}
void clear(){
    top=0;
    cout<< "data terhapus";
}



int main(){
    int a;
    int pilihan;
    char ulang;
    do {
    cout<< "1. push" << endl;
    cout<< "2. pop" << endl;
    cout<< "3. show " << endl;
    cout<< "4. clear"<<endl;
    cout<< "5. full"<<endl;
    cout<< "6. keluar"<<endl;
    cout<< "Pilihan anda: ";
    cin>> pilihan;

    switch(pilihan){
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        show();
        break;
    case 4:
        clear();
        break;
    case 5:
        full();
        break;
    }
}while (pil !=6);
    system("pause");
    return 0;
}