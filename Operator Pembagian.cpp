#include <iostream>
using namespace std;

/* Nama		: Roy Rafles Matorang Pasaribu
   NPM		: 2117051058
   Kelas	: B 
*/

int main(){
	string TanggalTransaksi, BulanTransaksi, TahunTransaksi;
	float JumlahUang, HargaPer1Bitcoin;
	
	//input
	
	cin >> TanggalTransaksi;
	cin >> BulanTransaksi;
	cin >> TahunTransaksi;
	cin >> JumlahUang;
	cin >> HargaPer1Bitcoin;
	cout << endl;
	
	//output
	
	cout << "Berikut Tanggal Transaksi dan Jumlah Bitcoin Anda" << endl;
	cout << "Tanggal Transaksi\t : " << TanggalTransaksi << " " << BulanTransaksi << " " << TahunTransaksi << endl;                                                               
	cout << "Jumlah Bitcoin\t\t : " << JumlahUang / HargaPer1Bitcoin << " " << "Bitcoin" << endl;
	return 0;
}
