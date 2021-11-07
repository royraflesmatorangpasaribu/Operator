#include <iostream>
using namespace std;

int main(){
	float s, keliling, luas, volume;
	cout<<"==================================================="<<endl;
	cout<<"Program Menghitung Keliling, Luas, dan Volume Kubus"<<endl;
	cout<<"==================================================="<<endl;
	
	cout<<"satuan cm"<<endl;
	cout<<"Masukkan Panjang Sisi Kubus\t: ";
	cin>>s;
	
	keliling=12*s;
	luas=6*s;
	volume=s*s*s;
	
	cout<<"==================================================="<<endl;
	cout<<"Keliling Kubus adalah "<<keliling<<endl;
	cout<<"Luas Kubus adalah "<<luas<<endl;
	cout<<"Volume Kubus adalah "<<volume;
	return 0;
}
