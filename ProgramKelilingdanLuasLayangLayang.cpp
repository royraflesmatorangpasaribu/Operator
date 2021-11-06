#include <iostream>
using namespace std;

int main(){
   double d1, d2, a, b, K, L;

   cout<<"\t\t\tMENGHITUNG KELILING DAN LUAS LAYANG-LAYANG"<<endl;
   cout<<"======================================================================================"<<endl;
   cout<<"Masukkan diagonal 1 atau d1 = ";
   cin>>d1;
   cout<<"Masukkan diagonal 2 atau d2 = ";
   cin>>d2;
   cout<<"Masukan sisi a = ";
   cin>>a;
   cout<<"Masukan sisi b = ";
   cin>>b;
   cout<<"===============================\n"<<endl;

   K=2*(a+b);
   L=d1*d2/2;
   cout<<"Keliling Layang-Layang adalah "<<K<<endl;
   cout<<"Luas Layang-Layang adalah "<<L<<endl;
   return 0;
}



