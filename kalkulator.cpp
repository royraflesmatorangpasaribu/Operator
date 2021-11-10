#include<conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int bil1,bil2, pilihan;
	float hasil;
	string operasi;
	cout<<"==========================="<<endl;
	cout<<"     PROGRAM KALKULATOR"<<endl;
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"==========================="<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<endl;

	
	cout<<"Masukan Pilihan : ";
	cin>>pilihan;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan kedua   : ";
	cin>>bil2;	
	
	switch(pilihan){
	        case 1 : hasil=bil1+bil2;
			operasi='+';
			break;
		case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
		case 3 : hasil=bil1*bil2;
			operasi='*';
			break;
		case 4 : hasil=bil1/bil2;
			operasi='/';
			break;
		case 5 : hasil=bil1%bil2;
			 operasi='%';
			break;
		default :
			cout<<"SALAH MASUKKAN PILIHAN OPERATOR"<<endl;
	}
	cout<<"-----------------------------"<<endl;
	cout<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	
	getch();
}
