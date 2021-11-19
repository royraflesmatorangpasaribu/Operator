#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
	a=25; b=11;
    cout<<"========================="<<endl;
    cout<<"= Operator Perbandingan ="<<endl;
    cout<<"========================="<<endl;
    
    cout<<"a=25"<<" || "<<"b=11"<<endl<<endl;
	
    cout<<"0 = False"<<" || "<<"1 = True"<<endl;
    
    cout<<endl;
	c=(a==b);
    cout<<"a==b hasilnya "<<c<<endl;
    c=(a!=b);
    cout<<"a!=b hasilnya "<<c<<endl;
    c=(a>b);
    cout<<"a>b  hasilnya "<<c<<endl;
    c=(a<b);
    cout<<"a<b  hasilnya "<<c<<endl;
    c=(a>=b);
    cout<<"a>=b hasilnya "<<c<<endl;
    c=(a<=b);
    cout<<"a<=b hasilnya "<<c<<endl;
    return 0;
}
