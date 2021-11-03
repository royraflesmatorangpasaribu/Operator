#include <iostream>
using namespace std;

int main(){
	float a, t, luas;
	
	cout<<"======================================="<<endl;
	cout<<"Program Menghitung Luas Jajaran Genjang"<<endl;
	cout<<"======================================="<<endl;
	
	cout<<"\nMasukkan Panjang alas Jajaran Genjang\t: ";
	cin>>a;
	cout<<"Masukkan tinggi Jajaran Genjang\t\t: ";
	cin>>t;
	
	luas=a*t;
	
	cout<<"\nLuas Jajaran Genjang adalah "<<luas;
}
