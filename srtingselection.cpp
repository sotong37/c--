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
  void ascending (int data[], int jml)
  {
  	for (int i=0; i<jml-1;i++)
  	{
	   
      for(int j=i+1;j<jml;j++)
	  {
        if(data[j] <data[i])
		{
            swap(data[j],data[i]);
        }
      }
    }
  }
  int jml=5;
  int i, j;

int main()
{	
	int data[]={4,3,5,2,1};
	cout<<"data belum diurut ";
	keluar (data,jml);
	
	ascending(data, jml);
	cout<<"data sudah diurut ";
	keluar (data,jml);
}
