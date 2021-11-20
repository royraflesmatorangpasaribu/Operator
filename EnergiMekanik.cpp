#include<iostream>
using namespace std;

int main(){
	float EP, EK, EM;
	
	cout<<"====================================="<<endl;
	cout<<"= Program Menghitung Energi Mekanik ="<<endl;
	cout<<"====================================="<<endl;
	
	//input
	cout<<"Masukkan Nilai Energi Potensial (J)  : ";
	cin>>EP;
	cout<<"Masukkan Nilai Energi Kinetik   (J)  : ";
	cin>>EK;
	
	EM=EP+EK;
	
	//output
	cout<<"\nNilai Energi Mekanik adalah "<<EM<<" J"<<endl;
	return 0;
}
