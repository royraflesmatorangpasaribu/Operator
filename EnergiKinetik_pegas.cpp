#include<iostream>
using namespace std;

int main(){
	float EK, k, x;
	
	cout<<"==========================================="<<endl;
	cout<<"= Program Menghitung Energi Kinetik Pegas ="<<endl;
	cout<<"==========================================="<<endl;
	
	//input
	cout<<"Masukkan konstanta pegas (N/m^2)  : ";
	cin>>k;
	cout<<"Masukkan perpanjangan pegas (m)   : ";
	cin>>x;
	
	EK=(k*x*x)/2;
	
	//output
	cout<<"\nPeriode Getaran adalah "<<EK<<" J"<<endl;
	return 0;
}
