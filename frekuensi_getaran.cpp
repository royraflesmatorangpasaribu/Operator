#include<iostream>
using namespace std;

int main(){
	float f, t, n;
	
	cout<<"======================================"<<endl;
	cout<<"= Program Menghitung Frekuensi Getaran ="<<endl;
	cout<<"======================================"<<endl;
	
	//input
	cout<<"Masukkan Waktu (sekon)  : ";
	cin>>t;
	cout<<"Masukkan Jumlah Getaran : ";
	cin>>n;
	
	f=n/t;
	
	//output
	cout<<"\nFrekuensi Getaran adalah "<<f<<" Hz"<<endl;
	return 0;
}
