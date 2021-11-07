#include <iostream>
using namespace std;

int main(){
	float r, luas, volume, pi=3.14;
	cout<<"========================================"<<endl;
	cout<<"Program Menghitung Luas, dan Volume Bola"<<endl;
	cout<<"========================================"<<endl<<endl;
	
	cout<<"Masukkan Jari-Jari (r) Bola: ";
	cin>>r;
	
	luas=4*pi*r*r;
	volume=pi*r*r*r*4/3;
	
	cout<<"========================================"<<endl;
	cout<<"Luas Bola adalah "<<luas<<endl;
	cout<<"Volume Bola adalah "<<volume;
	return 0;
}
