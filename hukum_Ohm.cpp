#include<iostream>
using namespace std;

int main(){
	float V, I, R;
	
	cout<<"================================"<<endl;
	cout<<"= Program Menghitung Rumus Ohm ="<<endl;
	cout<<"================================"<<endl;
	
	//input
	cout<<"Masukkan Nilai Kuat Arus (Ampere) : ";
	cin>>I;
	cout<<"Masukkan Nilai hambatan (Ohm)     : ";
	cin>>R;
	
	V=I*R;
	
	//output
	cout<<endl<<endl;
	cout<<"Nilai Tegangan Listrik adalah "<<V<<endl;
	
	return 0;
}
