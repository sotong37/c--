#include <iostream>
using namespace std;

int main ()
{
	string barang[5] = {"laptop","mouse","flashdisk","jaket","sepatu"};
	int i, harga[4], temp;
	
	for (i=0 ; i<5 ; ++i)
	{
		cout<<"Masukkan harga barang "<<barang[i]<<" : ";
		cin>>harga[i];
	}
	
	for (i=0 ; i<5 ; ++i)
	{
		for (int j=0 ;j<4 ; ++j)
		{
			if (harga[j]>harga[j+1])
			{
			temp = harga[j];
			harga[j] = harga [j+1];
			harga[j+1] = temp;
			}
		}
	}	
	cout<<"Harga terkecil pertama adalah "<<harga[0]<<endl;
	cout<<"Harga terkecil adalah "<<harga[1]<<endl;
	return 0;
}