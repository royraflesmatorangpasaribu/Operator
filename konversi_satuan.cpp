#include <iostream>
using namespace std; 
int main () {
	float m, km, mm, a;

	cout<<"==================================================================================="<<endl;
	cout<<"Program Konversi dari Centimeter(Cm) ke Kilometer(Km), Meter(m), dan Milimeter(mm) "<<endl;
	cout<<"==================================================================================="<<endl;
	
	//input
	cout<<"Masukkan Nilai Centimeter (Cm): ";
	cin>>a;
 
	km=(a/100000);
	m=(a/100);
	mm=(a*10);
 
 	//output
	cout<<endl<<endl;
	cout<<"Konversi ke Kilometer (Km) : "<<km<<endl;
 	cout<<"Konversi ke Meter     (m)  : "<<m<<endl;
 	cout<<"Konversi ke Milimeter (mm) : "<<mm<<endl;
}
