#include<iostream>
using namespace std;

int main(){
	//variabel yang digunakan
	float F, t1, t2, Impuls;
	
	cout<<"==================================="<<endl;
	cout<<"= Program Menghitung Nilai Impuls ="<<endl;
	cout<<"==================================="<<endl;
	
	//input
	cout<<"Masukkan nilai gaya (F)  : ";
	cin>>F;
	cout<<"Masukkan watu ke-1 (s)   : ";
	cin>>t1;
	cout<<"Masukkan watu ke-2 (s)   : ";
	cin>>t2;
	
	//rumus impuls
	Impuls=F*(t2-t1);
	
	//output
	cout<<"\nFrekuensi Getaran adalah "<<Impuls<<" Ns"<<endl;
	return 0;
}
