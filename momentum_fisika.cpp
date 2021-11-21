#include<iostream>
using namespace std;

int main(){
	float m, v, p;
	
	cout<<"================================="<<endl;
	cout<<"=    Program Fisika Momentum    ="<<endl;
	cout<<"================================="<<endl;
	
	//input
	cout<<"Masukkan Nilai Massa Benda (kg)      : ";
	cin>>m;
	cout<<"Masukkan Nilai Kecepatan Benda (m/s) : ";
	cin>>v;
	
	p=m*v;
	
	//output
	cout<<endl;
	cout<<"Nilai Momentumnya adalah "<<p<<" kg m/s"<<endl;
	
	return 0;
}
