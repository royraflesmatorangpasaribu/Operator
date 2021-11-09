#include<iostream>
using namespace std;

int main(){
	int ts, tl, umur;
	cout<<"====================================="<<endl;
	cout<<"Program Menentukan Usia Anda saat ini"<<endl;
	cout<<"====================================="<<endl<<endl;
	
	cout<<"Masukkan Tahun Sekarang   : ";
	cin>>ts;
	cout<<"Masukkan Tahun Lahir Anda : ";
	cin>>tl;
	
	umur=ts-tl;
	
	cout<<"\nUmur Anda Sekarang adalah "<<umur<<endl;
	return 0;
}
