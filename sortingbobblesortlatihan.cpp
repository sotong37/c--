#include<iostream>
using namespace std;

void keluar (int data[], int jml)
{
	 for (int i=0;i<jml;i++){
	 
     cout<<data[i];
     }
}

void swap(int &a , int &b) 
{ 
  int temp = b;
  b = a;
  a = temp;
}
  void menaik (int data[], int jml)
  {
  	int i= jml-1;
    do{
        for(int j=0;j<i;j++){
            if (data[j+1] < data[j]){
                swap (data[j+1],data[j]);
            }
        }
        i--;
    }while(i>0);
}
    void menurun (int data[], int jml)
  {
  	int i= jml-1;
    do{
        for(int j=0;j<i;j++){
            if (data[j+1] > data[j]){
                swap (data[j+1],data[j]);
            }
        }
        i--;
    }while(i>0);
}
  int jml=5;
  int i, j;

int main()
{	
	int data[]={4,3,5,2,1};
	
	cout<<"data belum diurut ";
	keluar (data,jml);
	cout<<" "<<endl;

	
	menaik(data, jml);
	cout<<"menaik ";
	keluar (data, jml);
	cout<<" "<<endl;


    menurun(data, jml);
	cout<<"menurun ";
	keluar (data, jml);
	cout<<" "<<endl;

}