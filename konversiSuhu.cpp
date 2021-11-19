#include <iostream>
using namespace std;

int main()
{
    float C,F,K,R;
    cout<<"========================="<<endl;
    cout<<"= Program Konversi Suhu ="<<endl;
    cout<<"========================="<<endl;
    cout<<"masukkan nilai celciusnya = ";
    cin>>C;
    
    F=C*1.8 + 32;
    K=C+273.15;
    R=C*0.8;
    
    cout<<"\nNilai Fahrenheit : "<<F<<endl<<"nilai Kelvin     : "<<K<<endl<<"nilai Reamur     : "<<R;
    return 0;
}
