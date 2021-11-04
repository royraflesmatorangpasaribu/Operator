#include <iostream>
using namespace std;

int main(){
	float a, b, keliling;
	
	cout<<"======================================="<<endl;
	cout<<"Program Menghitung Luas Jajaran Genjang"<<endl;
	cout<<"======================================="<<endl;
	cout<<endl;
	
	cout<<"      ******************  |    "<<endl;
	cout<<"     ******************   | sisi b"<<endl;
	cout<<"    ******************    |    "<<endl;
	cout<<"   ******************     |    "<<endl;
	cout<<"   ------------------"<<endl;
	cout<<"           sisi a    "<<endl;

	
	cout<<"\nMasukkan Panjang sisi a Jajaran Genjang\t: ";
	cin>>a;
	cout<<"Masukkan panjang sisi b Jajaran Genjang\t: ";
	cin>>b;
	
	keliling=2*(a+b);
	
	cout<<"\nKeliling Jajaran Genjang adalah "<<keliling;
}
