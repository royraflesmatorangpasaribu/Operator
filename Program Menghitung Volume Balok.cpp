#include <iostream>
using namespace std;

int main(){
	float p, l, t, volume;
	cout<<"==============================="<<endl;
	cout<<"Program Menghitung Volume Balok"<<endl;
	cout<<"==============================="<<endl;
	
	cout<<"Masukkan Panjang Balok\t: ";
	cin>>p;
	cout<<"Masukkan Lebar Balok\t: ";
	cin>>l;
	cout<<"Masukkan Tinggi Balok\t: ";
	cin>>t;
	
	volume=p*l*t;
	
	cout<<"\nVolume Balok adalah "<<volume;
	return 0;
}
