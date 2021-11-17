#include<iostream>
using namespace std;

int main(){
	int n, data[100];
	float jumlah, rataRata;
	
	cout<<"============================"<<endl;
	cout<<"Program Menghitung Rata-Rata"<<endl;
	cout<<"============================"<<endl;
	
	//input
	cout<<"Masukkan n Data : ";
	cin>>n;
	cout<<endl;
	
	for(int i = 0; i <n; i++){
		cout<<"Data ke-"<<i+1<<" : ";
		cin>>data[i];
		jumlah += data[i];
	}
	rataRata = jumlah/n;
	
	//output
	cout<<"\n============================"<<endl;
	cout<<"Nilai Jumlah    : "<<jumlah<<endl;
	cout<<"Banyak Data     : "<<n<<endl;
	cout<<"Nilai Rata-Rata : "<<rataRata<<endl;
	cout<<"============================"<<endl;
	
	return 0;
}
