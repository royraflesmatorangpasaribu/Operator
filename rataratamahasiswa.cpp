#include<iostream>
using namespace std;

int main(){
	string nama;
	int npm, n, data[100];
	float jumlah, rataRata;
	
	cout<<"============================================"<<endl;
	cout<<"Program Menghitung Rata-Rata Nilai Mahasiswa"<<endl;
	cout<<"============================================"<<endl;
	
	//input
	
	cout<<"Masukkan Nama Mahasiswa      : ";
	getline(cin,nama);
	cout<<"Masukkan NPM Mahasiswa       : ";
	cin>>npm;
	cout<<"Masukkan Banyak Jumlah Tugas : ";
	cin>>n;
	cout<<endl;
	
	for(int i = 0; i <n; i++){
		cout<<"Nilai Tugas ke-"<<i+1<<" : ";
		cin>>data[i];
		jumlah += data[i];
	}
	rataRata = jumlah/n;
	
	//output
	cout<<endl;
	cout<<"====================================================================================="<<endl;
	cout<<"Mahasiswa atas nama "<<nama<<" "<<"dengan NPM "<<npm<<" "<<"Memiliki nilai Rata-rata "<<rataRata<<endl;
	cout<<"====================================================================================="<<endl;
	
	return 0;
}
