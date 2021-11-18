#include<iostream>
using namespace std;
int main(){
	float F, q, g, E;
	cout<<"============================================"<<endl;
	cout<<"Program Fisika Menghitung Kuat Medan Listrik"<<endl;
	cout<<"============================================"<<endl<<endl;
	
	//input
	cout<<"Masukkan nilai Gaya Tarik Menarik antar muatan (N) : ";
	cin>>F;
	cout<<"Masukkan nilai Muatan Listrik (c) \t\t   : ";
	cin>>q;
	
	E = F/q;
	
	//output
	cout<<"\nKuat Medan Listrik adalah"<<" "<<E<<" "<<"N/c"<<endl;
	
	return 0;
}
