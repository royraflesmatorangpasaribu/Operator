#include<iostream>
using namespace std;

int main(){
	float T, t, n;
	
	cout<<"======================================"<<endl;
	cout<<"= Program Menghitung Periode Getaran ="<<endl;
	cout<<"======================================"<<endl;
	
	//input
	cout<<"Masukkan Waktu (sekon)  : ";
	cin>>t;
	cout<<"Masukkan Jumlah Getaran : ";
	cin>>n;
	
	T=t/n;
	
	//output
	cout<<"\nPeriode Getaran adalah "<<T<<" sekon"<<endl;
	return 0;
}
