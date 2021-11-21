#include<iostream>
using namespace std;

int main(){
	float M, n, V;
	
	cout<<"================================="<<endl;
	cout<<"=    Program Rumus Molaritas    ="<<endl;
	cout<<"================================="<<endl;
	
	//input
	cout<<"Masukkan Nilai mol suatu zat (mol) : ";
	cin>>n;
	cout<<"Masukkan Nilai Volume Larutan (ml) : ";
	cin>>V;
	
	M=n/V;
	
	//output
	cout<<endl<<endl;
	cout<<"Nilai Molaritas Zat "<<M<< " (mol/liter atau Molar)"<<endl;
	
	return 0;
}
