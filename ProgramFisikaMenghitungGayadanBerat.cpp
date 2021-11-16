#include<iostream>
using namespace std;
int main(){
	float m, a, g, f, w;
	cout<<"========================================"<<endl;
	cout<<"Program Fisika Menghitung Gaya dan Berat"<<endl;
	cout<<"========================================"<<endl<<endl;
	
	//input
	cout<<"Masukkan Massa Benda \t\t: ";
	cin>>m;
	cout<<"Masukkan Percepatan Benda \t: ";
	cin>>a;
	cout<<"Masukkan Percepatan Gravitasi \t: ";
	cin>>g;
	
	f = m*a;
	w = m*g;
	
	//output
	cout<<"\nGaya Benda adalah"<<" "<<f<<" "<<"Newton"<<endl;
	cout<<"Berat Benda adalah"<<" "<<w<<" "<<"N"<<endl;
	
	return 0;
}
