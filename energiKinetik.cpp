//library c++
#include<iostream>
using namespace std;

//program dibuat oleh Roy Rafles Matorang Pasaribu
//25 November 2021

//menggunakan fungsi utama dalam C++
int main(){
	//variabel yang digunakan
	float m, v, Ek;
	
	//output judul program
	cout<<"===================================================="<<endl;
	cout<<"====      Program Menghitung Energi Kinetik     ===="<<endl;
	cout<<"===================================================="<<endl<<endl;
	
	//input
	cout<<"Masukkan Nilai Massa Benda (kg)      : ";
	cin>>m;
	cout<<"Masukkan Nilai Kecepatan Benda (m/s) : ";
	cin>>v;
	
	//rumus mencari Energi Kinetik
	Ek=m*v*v/2;
	
	//output
	cout<<"\nNilai Energi Kinetik benda adalah "<<Ek<<" J"<<endl;
}
