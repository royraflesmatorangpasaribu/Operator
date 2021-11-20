#include<iostream>
using namespace std;

int main(){
	float f, T;
	
	cout<<"========================================"<<endl;
	cout<<"= Program Menghitung Frekuensi Getaran ="<<endl;
	cout<<"========================================"<<endl;
	
	//input
	cout<<"Masukkan Frekuensi Getaran (Hz)  : ";
	cin>>f;
	
	T=1/f;
	
	//output
	cout<<"\nPeriode Getaran adalah "<<T<<" sekon"<<endl;
	return 0;
}
