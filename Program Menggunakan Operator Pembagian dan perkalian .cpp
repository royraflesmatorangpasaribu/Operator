#include <iostream>
using namespace std;

/* Nama		: Roy Rafles Matorang Pasaribu
   NPM		: 2117051058
   Kelas	: B 
*/

int main(){
	float JumlahBitcoinDiBeli, HargaPembelian, HargaSaatIni;
	
	//input
	
	cin >> JumlahBitcoinDiBeli;
	cin >> HargaPembelian;
	cin >> HargaSaatIni;
	cout << endl;
	
	//output
	
	cout << "===================Output===================" << endl;                                                            
	cout << "Kenaikan/Penurunan\t\t : " << (HargaSaatIni-HargaPembelian)/HargaPembelian*100 << "%" << endl;
	cout << "Keuntungan/Kerugian\t\t : " << ((HargaSaatIni-HargaPembelian)*JumlahBitcoinDiBeli)/1000000 << " juta" << endl;
	cout << "============================================" << endl; 
	return 0;
}
