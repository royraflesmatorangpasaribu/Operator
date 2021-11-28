#include<iostream>
using namespace std;
int main(){
	//variabel yang digunakan
	float m, c, t1, t2, Q;
	
	//judul program
	cout<<"===================================="<<endl;
	cout<<"Program Menghitung Perpindahan Kalor"<<endl;
	cout<<"===================================="<<endl<<endl;
	
	//input
	cout<<"Masukkan massa benda yang menerima atau melepas kalor (Kg) : ";
	cin>>m;
	cout<<"Masukkan nilai kalor jenis (J/kg'C)       : ";
	cin>>c;
	cout<<"Masukkan nilai suhu pertama ('C)          : ";
	cin>>t1;
	cout<<"Masukkan nilai suhu kedua ('C)            : ";
	cin>>t2;
	
	//rumus perpindahan kalor
	Q=m*c*(t2-t1);
	
	//output
	cout<<"\nPerpindahan Kalornya adalah"<<" "<<Q<<" "<<"N/c"<<endl;
	
	return 0;
}
