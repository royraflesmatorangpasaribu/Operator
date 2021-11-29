#include<iostream>
using namespace std;

//minimal terdapat satu fungsi dalam program C++
int main(){
	//variabel yang digunakan
	float m, v, r, Fs;
	
	//judul program 
	cout<<"===================================="<<endl;
	cout<<"==    Program Gaya Sentripetal    =="<<endl;
	cout<<"===================================="<<endl<<endl;
	
	cout<<"Masukkan Massa Benda (Kg)              : ";
	cin>>m;
	cout<<"Masukkan kecepatan linier benda (m/s)  : ";
	cin>>v;
	cout<<"Masukkan r adalah jari-jari benda (m)  : ";
	cin>>r;
	
	cout<<endl;
	
	Fs=m*v*v/r;
	
	cout<<"Gaya Sentripetalnya adalah "<<Fs<<endl;
	
	
}
