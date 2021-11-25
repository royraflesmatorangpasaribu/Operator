//library c++
#include<iostream>
using namespace std;

//program dibuat oleh Roy Rafles Matorang Pasaribu
//25 November 2021

//menggunakan fungsi utama dalam C++
int main(){
	//variabel yang digunakan
	float m, g, h, Ep;
	
	//output judul program
	cout<<"======================================================"<<endl;
	cout<<"====      Program Menghitung Energi Potensial     ===="<<endl;
	cout<<"======================================================"<<endl<<endl;
	
	//input
	cout<<"Masukkan Nilai Massa Benda (kg)       : ";
	cin>>m;
	cout<<"Masukkan Nilai Gravitasi Bumi (m/s^2) : ";
	cin>>g;
	cout<<"Masukkan Ketinggian Benda (m)         : ";
	cin>>h;
	
	//rumus mencari Energi Potensial
	Ep=m*g*h;
	
	//output
	cout<<"\nNilai Energi Potensial benda adalah "<<Ep<<" J"<<endl;
}
