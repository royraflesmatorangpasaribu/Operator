#include<iostream>
using namespace std;
int main(){
	float luas, phi=3.14;
	int r;
	cout<<"================================="<<endl;
	cout<<"Program Menghitung Luas Lingkaran"<<endl;
	cout<<"================================="<<endl;
	cout<<"\nMasukkan Jari-Jari Lingkaran : ";
	cin>>r;
	
	luas=phi*r*r;
	
	cout<<"\nLuas Lingkaran adalah "<<luas<<endl;
	
	return 0;
}
