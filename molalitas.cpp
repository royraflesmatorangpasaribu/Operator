#include<iostream>
using namespace std;

int main(){
	float m, n, p;
	
	cout<<"================================="<<endl;
	cout<<"=    Program Rumus Molalitas    ="<<endl;
	cout<<"================================="<<endl;
	
	//input
	cout<<"Masukkan Nilai Mol Suatu Zat (mol) : ";
	cin>>n;
	cout<<"Masukkan Nilai Massa Pelarut (g)   : ";
	cin>>p;
	
	m=n/p;
	
	//output
	cout<<endl<<endl;
	cout<<"Nilai Molalitas Zat adalah "<<m<< " (molal)"<<endl;
	
	return 0;
}
