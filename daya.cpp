//library c++
#include<iostream>
using namespace std;

//program dibuat oleh Roy Rafles Matorang Pasaribu
//25 November 2021

//menggunakan fungsi utama dalam C++
int main(){
	//variabel yang digunakan
	float p, W, t;
	
	//output judul program
	cout<<"=========================================="<<endl;
	cout<<"====      Program Menghitung Daya     ===="<<endl;
	cout<<"=========================================="<<endl<<endl;
	
	//input
	cout<<"Masukkan Nilai usaha (J) : ";
	cin>>W;
	cout<<"Masukkan waktu (s)       : ";
	cin>>t;
	
	//rumus mencari daya
	p=W/t;
	
	//output
	cout<<"Nilai Dayanya adalah "<<p<<" Watt"<<endl;
}
