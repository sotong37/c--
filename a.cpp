#include <iostream>
using namespace std;

struct node
{
       int data;
       node *next;
       node *prev;
};

node *head = NULL, *bantu, *hapus, *insert, *cari, *tail;

int x;

//Fungsi untuk menampilkan data single linked circular list
void tampil()
{
   bantu = head;
   do
	{
      cout<<bantu->data<<" ";
   	  bantu=bantu->next;
   } while(bantu != head);
   cout<<endl;
}

void insert_tail(){
	int input;
	if(head == NULL){
		head = new node;
		cout<<"Masukkan Data : ";
		cin>>input;
		head->data = input;
		head->next = head;		
	}
	else{
		tail = head;
		while(tail->next != head){
		tail = tail->next;
		} 
		tail->next = new node;
		cout<<"Masukkan Data : ";
		cin>>input;
		tail->next->data = input;
		tail->next->next = head;
		tail = tail->next;
	}
}
int main()
{
   insert_tail();
   insert_tail();
   tampil();
   system("pause");
}