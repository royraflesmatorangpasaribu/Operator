#include <iostream>
using namespace std;

int main(){
	
	//variabel yang digunakan
    int a, b, n;
    cout<<"Suku pertama (a)   : ";  
	cin>>a;
    cout<<"Beda (b)           : ";  
	cin>>b;
    cout<<"Banyaknya suku n   : ";  
	cin>>n;

    int i; long u, j=0;
    cout<<"\nBarisan Arimatika : ";
    for (i=1; i<=n; i++){
         u=a+(i-1)*b;
        j+=u;
        cout<<u<<" ";
     }
      cout<<"\nJumlah Deret Atimatika = "<<j; 
      return 0;
}
