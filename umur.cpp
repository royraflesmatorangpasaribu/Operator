#include<iostream>
using namespace std;

//minimal terdapat 1 fungsi
int main(){
	//deklarasi variabel
	int tahunLahir, usia;
	
	//judul
	cout<<"Program Menentukan Usia"<<endl;
	cout<<"oleh royrafmp"<<endl<<endl;
	
	//input
	cout<<"Masukkan Tahun Lahir Anda : ";
	cin>>tahunLahir;
	
	usia=2022-tahunLahir;
	
	//output
	cout<<"Usia Anda Saat ini adalah "<<usia<<" Tahun";
	
	//karena menggunakan fungsi main()
	return 0;
}
