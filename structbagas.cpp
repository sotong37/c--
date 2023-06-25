#include <iostream>
using namespace std;

struct penyanyi{
	string nama;
	int usia;
	float streamer_spotify;
	string album;
	string lagu_teratas[2];
	
};

int main (){
	penyanyi artis;
	
	artis.nama = "Justin Bieber  ";
	artis.usia = 31;
	artis.streamer_spotify = 95.7;
	artis.album = "purpose";
	artis.lagu_teratas[0] = "sorry";
	artis.lagu_teratas[1] = "love yourself";
	
	cout<<"nama = "<<artis.nama<<endl;
	cout<<"usia = "<<artis.usia<<endl;
	cout<<"streamer spotify = "<<artis.streamer_spotify<<endl;
	cout<<"album = "<<artis.album<<endl;
	cout<<"lagu teratas pertama = "<<artis.lagu_teratas[0]<<endl;
	cout<<"lagu teratas kedua = "<<artis.lagu_teratas[1]<<endl;
	
}