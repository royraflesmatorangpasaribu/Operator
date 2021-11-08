#include<iostream>
using namespace std;

int main(){
	float r, t, pi=3.14, volume, luasPermukaan;
	
	cout<<"==================================================="<<endl;
	cout<<"Program Menghitung Volume dan Luas Permukaan Tabung"<<endl;
	cout<<"==================================================="<<endl<<endl;
	
	cout<<"Masukkan Jari-Jari (r) Tabung : ";
	cin>>r;
	cout<<"Masukkan Tinggi Tabung\t: ";
	cin>>t;
	
	volume=pi*r*r*t;
	luasPermukaan=(pi*r*r*t)+(2*pi*r*(r+t));
	
	cout<<"\nVolume Tabung adalah "<<volume<<endl;
	cout<<"Luas Permukaan Tabung adalah "<<luasPermukaan<<endl;
	
	
}
