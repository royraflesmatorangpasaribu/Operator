#include<iostream>
 
using namespace std; 
int main() { 
	float b, bunga, perTahun, perBulan, perHari;
 	int a; 
	
	cout<<"================================"<<endl; 
	cout<< " PROGRAM MENGHITUNG BUNGA BANK"<<endl;
 	cout<< "=============================="<<endl; 
 	
 	//input
 	cout<< "Masukkan jumlah tabungan anda: Rp."; 
	cin>>a; 
	cout<<endl; 
 	cout<<"Masukkan besar suku bunga (%): "; 
	cin>>b; 
	cout<<endl<< endl; 
	
 	bunga=b/100; 
	perTahun=bunga*a; 
	perBulan=bunga*a/12; 
	perHari=bunga*a/360; 
	
	//output
 	cout<<"Bunga yang didapat dalam satu tahun adalah Rp."<<perTahun<<endl; 
 	cout<<"Bunga yang didapat dalam satu bulan adalah Rp."<<perBulan<<endl; 
 	cout<<"Bunga yang didapat dalam satu hari adalah Rp."<<perHari<<endl; 
	
	return 0; 
 
 }


