#include<iostream>
using namespace std;

//minimal ada satu fungsi dalam program C++
int main(){
	//variabel yang digunakan dalam program
	float js, jp, s;
	
	//judul program
	cout<<"============================================="<<endl;
	cout<<"Program Menghitung Jarak Sebenarnya Pasa Peta"<<endl;
	cout<<"============================================="<<endl<<endl;
	
	//input
	cout<<"Masukkan Jarak Pada Peta : ";
	cin>>jp;
	cout<<"Masukkan Skala Peta      : ";
	cin>>s;
	
	//rumus menghitung jarak sebenarnya pada peta
	js=jp/s;
	
	
	cout<<endl;
	//output
	cout<<"Jarak Sebenarnya adalah "<<js<<endl;
}
