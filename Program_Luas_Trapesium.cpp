#include<iostream>
using namespace std;

int main(){
	float s1, s2, t, luas;
	
	cout<<"====================================="<<endl;
	cout<<"= Program Menghitung Luas Trapesium ="<<endl;
	cout<<"====================================="<<endl;
	
	cout<<"Masukkan Panjang Sisi 1 Trapesium : ";
	cin>>s1;
	cout<<"Masukkan Panjang Sisi 2 Trapesium : ";
	cin>>s2;
	cout<<"Masukkan Tinggi Trapesium         : ";
	cin>>t;
	
	luas=((s1+s2)*t)/2;
	
	cout<<"\nLuas Trapesium adalah : "<<luas<<endl;
	
	return 0;
}
