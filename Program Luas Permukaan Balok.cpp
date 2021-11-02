#include <iostream>
using namespace std;

int main(){
	float p, l, t, lp;
	cout<<"======================================="<<endl;
	cout<<"Program Menghitung Luas Permukaan Balok"<<endl;
	cout<<"======================================="<<endl;
	
	cout<<"Masukkan Panjang Balok\t: ";
	cin>>p;
	cout<<"Masukkan Lebar Balok\t: ";
	cin>>l;
	cout<<"Masukkan Tinggi Balok\t: ";
	cin>>t;
	
	lp=2*((p*l)+(p*t)+(l*t));
	
	cout<<"\nLuas Permukaan Balok adalah "<<lp;
	return 0;
}
