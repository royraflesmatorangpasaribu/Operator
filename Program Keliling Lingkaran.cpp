#include<iostream>
using namespace std;
int main(){
	float keliling, phi=3.14;
	int r, k;
	cout<<"====================================="<<endl;
	cout<<"Program Menghitung Keliling Lingkaran"<<endl;
	cout<<"====================================="<<endl;
	cout<<"\nMasukkan Jari-Jari Lingkaran : ";
	cin>>r;
	
	keliling=2*phi*r;
	
	cout<<"\nKeliling Lingkaran adalah "<<keliling<<endl;
	
	return 0;
}
