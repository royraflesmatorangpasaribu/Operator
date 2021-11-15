#include<iostream>
using namespace std;
int main(){
	float s, d1, d2, kell, luas;
	cout<<"=================================================="<<endl;
	cout<<"Program Menghitung Keliling dan Luas Belah Ketupat"<<endl;
	cout<<"=================================================="<<endl<<endl;
	
	cout<<"Menghitung Keliling"<<endl;
	cout<<"Masukkan Panjang Sisi Belah Ketupat : ";
	cin>>s;
	cout<<"Menghitung Luas"<<endl;
	cout<<"Menghitung Panjang Diagonal 1 : ";
	cin>>d1;
	cout<<"Menghitung Panjang Diagonal 2 : ";
	cin>>d2;
	
	kell=4*s;
	luas=(d1*d2)/2;
	
	cout<<"\nKeliling Belah Ketupat adalah"<<" "<<kell<<endl;
	cout<<"Luas Belah Ketupat adalah"<<" "<<luas;
	
	return 0;
	
}
