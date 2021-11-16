#include<iostream>
using namespace std;
int main(){
	float F, A, p;
	cout<<"==========================================="<<endl;
	cout<<"Program Fisika Menghitung Tekanan Zat Padat"<<endl;
	cout<<"==========================================="<<endl<<endl;
	
	//input
	cout<<"Masukkan Gaya Benda \t\t: ";
	cin>>F;
	cout<<"Masukkan Luas Permukaan Bidang \t: ";
	cin>>A;
	
	p = F/A;
	
	//output
	cout<<"\n==========================================="<<endl;
	cout<<"Tekanan Zat Padat adalah"<<" "<<p<<" "<<"Pascal"<<endl;
	cout<<"==========================================="<<endl;
	return 0;
}
