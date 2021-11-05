#include<iostream>
using namespace std;

int main(){
	float a, b, c, d, keliling;
	
	cout<<"====================================="<<endl;
	cout<<"= Program Menghitung Luas Trapesium ="<<endl;
	cout<<"====================================="<<endl;
	
	cout<<"Masukkan Panjang Sisi a Trapesium : ";
	cin>>a;
	cout<<"Masukkan Panjang Sisi b Trapesium : ";
	cin>>b;
	cout<<"Masukkan Panjang Sisi c Trapesium : ";
	cin>>c;
	cout<<"Masukkan Panjang Sisi d Trapesium : ";
	cin>>d;
	
	keliling=a+b+c+d;
	
	cout<<"\nKeliling Trapesium adalah : "<<keliling<<endl;
	
	return 0;
}
