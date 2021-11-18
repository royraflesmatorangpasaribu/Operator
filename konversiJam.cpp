#include<iostream>
using namespace std;
int main(){
    int jam, menit, detik;
    cout<<" =================================================="<<endl;
	cout<<" - Program Konversi detik ke jam menit dan detik - "<<endl;
	cout<<" =================================================="<<endl<<endl;
    cout<<" Masukan Jumlah detik yang mau dikonversi : ";
    cin>>detik;
    
    jam = detik /(60*60);
    detik = detik-((60*60)*jam);
    menit = detik / 60;
    detik = detik -(60*menit);
    
    cout<<"\n Maka Waktunya Adalah "<<jam<<" Jam "<<menit<<" Menit "<<detik<<" Detik ";
    return 0;
}
