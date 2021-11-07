#include <iostream>
using namespace std;

main() {
 float massa, tinggi, kecepatan, potensial, kinetik, mekanik;
 cout << "=============================================" <<endl;
 cout << "Program Menghitung Energi Mekanik Suatu Benda" <<endl;
 cout << "=============================================" <<endl;
 
 cout << "masukkan Massa Benda\t: ";
 cin>> massa;
 cout << "masukkan Tinggi Benda\t: ";
 cin>> tinggi;
 cout << "masukkan Kecepatan Benda: ";
 cin>> kecepatan;
 
 potensial = massa*9.8*tinggi;
 kinetik = massa/2*(kecepatan*kecepatan);
 mekanik = potensial + kinetik;
 
 cout << "=============================================" <<endl;
 cout << "Energi Potensialnya Adalah : " << potensial <<endl;
 cout << "Energi Kinetiknya Adalah   : " << kinetik <<endl;
 cout << "Energi Mekaniknya Adalah   : " << mekanik <<endl;
 
 return 0;
}
