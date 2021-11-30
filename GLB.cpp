#include<iostream>
using namespace std;

//minimal terdapat satu fungsi dalam program C++
int main(){
	//variabel yang digunakan
	float s, t, v;
	
	//judul program 
	cout<<"==============================================="<<endl;
	cout<<"==    Program Gerak Lurus Beraturan (GLB)    =="<<endl;
	cout<<"==============================================="<<endl<<endl;
	
	cout<<"Masukkan Jarak yang ditempuh (km, m) : ";
	cin>>s;
	cout<<"Masukkan Waktu tempuh (jam, sekon)   : ";
	cin>>t;
	
	cout<<endl;
	
	//rumus GLB
	v=s/t;
	
	cout<<"Gerak Lurus Beraturan (GLB)nya adalah "<<v<<" (km/jam, m/s)"<<endl;
	
	
}
