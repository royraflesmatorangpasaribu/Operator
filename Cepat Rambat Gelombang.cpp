#include<iostream>
using namespace std;

//minimal terdapat satu fungsi dalam program C++
int main(){
	//variabel yang digunakan
	float s, t, v;
	
	//judul program 
	cout<<"=========================================="<<endl;
	cout<<"==    Program Cepat Rambat Gelombang    =="<<endl;
	cout<<"=========================================="<<endl<<endl;
	
	cout<<"Masukkan jarak (m)   : ";
	cin>>s;
	cout<<"Masukkan waktu (s)   : ";
	cin>>t;
	
	cout<<endl;
	
	//rumus Cepat Rambat Gelombang
	v=s/t;
	
	cout<<"Cepat Rambat Gelombangnya adalah "<<v<<" (m/s)"<<endl;
	
	
}
