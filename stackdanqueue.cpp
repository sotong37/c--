#include <iostream>
#define max 5

using namespace std;

char queue[max];
short back = 0;

int main(){
    char huruf ;
    short pil, i;

    do{
        system("cls");
        cout<<"1. enqeue / push  "<<endl;
        cout<<"2. pop "<<endl;
        cout<<"3. deqeue "<<endl;
        cout<<"4. cetakqeue "<<endl;
        cout<<"5. clear "<<endl;
        cout<<"6. keluar "<<endl;
        cout<<" masukan pilihan : ";
        cin>>pil;

        switch(pil)
        {
            case 1 :
              {
                if(back<max)
                {
                    cout<<"masukan character : ";
                    cin>>huruf;
                    queue[back] = huruf;
                    back++;
                }
                else
                {
                    cout<<"qeue penuh "<<endl;
                }
                system("pause");
                break;
              }

            case 2:
            {
            cout<<"Data ke-"<<back<<" di POP"<<endl;
	        back--;
            }
            }
            case 3:
            {
                if(back !=0)
                {
                    cout<<" dequeu antrian pertama"<<queue[0]<<endl;
                    for(i=0;i<back;i++)
                    {
                        queue[i]=queue[i+1];
                    }
                    back--;
                }
                else
                {
                    cout<<" qeue kosong "<<endl;
                }
                system("pause");
                break;
            }
            case 4:
            {
                if(back!=0)
                {
                    for(i=0;i<back;i++)
                    {
                        cout<<queue[i];
                    }
                    cout<<endl;
                }
                else
                {
                   cout<<" qeue kosong "<<endl;  
                }
                system("pause");
                break;
            }
            case 5:
            {
                back = 0;
                cout<<endl;
                system("pause");
                break;
            }
            default :
            {
                break;
            }
        }

    }while (pil !=7);
    system("pause");
    return 0;
}