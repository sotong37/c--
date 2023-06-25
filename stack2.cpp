#include<iostream>
#define max 5
using namespace std;

short stack[max], top = 0;

void push()
{
	short isi;
	if (top<max)
	{
		cout<<"masukkan data = "; 
		cin>>isi;
		stack[top] = isi;
		top++;
	}
}

void pop()
{
	cout<<"Data ke-"<<top<<" di POP"<<endl;
	top--;
}

void clear()
{
	
}

void empty()
{
	if (top==0)
	{
		cout<<"Stack kosong"<<endl;
	}
	else
	cout<<"stack tidak kosong"<<endl;
}

void full()
{
	
}

void show()
{
	if (top>0)
	{
		cout<<"Isi data = ";
		for (int i = 0; i<top; i++)
		{
			cout<<stack[i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int pilihan;
	char henti='y';
	
	while(henti == 'y')
	{
		cout<<"Masukkan pilihan : ";
		cin>>pilihan;
		
		switch (pilihan)
		{
			case 1 :
				push();
				break;
			case 2 :
				pop();
				break;
			case 3 :
				empty();
				break;
			case 4 :
				full();
				break;
			case 5 :
				clear();
				break;
			case 6 :
				show();
				break;
			default:
			cout<<"Nilai tidak ada"<<endl;
		}
		cout<<"ulang? ";
		cin>>henti;
	}
return 0;
}