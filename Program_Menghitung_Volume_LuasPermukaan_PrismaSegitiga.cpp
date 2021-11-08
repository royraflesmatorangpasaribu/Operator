#include<iostream>
using namespace std;

int main(){
	float la, k, t, volume, luasPermukaan;
	
	cout<<"============================================================"<<endl;
	cout<<"Program Menghitung Volume dan Luas Permukaan Prisma Segitiga"<<endl;
	cout<<"============================================================"<<endl<<endl;
	
	cout<<"Masukkan Luas Alas Prisma Segitiga     : ";
	cin>>la;
	cout<<"Masukkan Keliling Alas Prisma Segitiga : ";
	cin>>k;
	cout<<"Masukkan Tinggi Prisma Segitiga        : ";
	cin>>t;
	
	volume=la*t;
	luasPermukaan=k*t+(2*la);
	
	cout<<"============================================================"<<endl;
	cout<<"Volume Prisma Segitiga         : "<<volume<<endl;
	cout<<"Luas Permukaan Prisma Segitiga : "<<luasPermukaan<<endl;
}
