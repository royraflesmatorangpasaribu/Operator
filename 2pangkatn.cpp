#include <iostream>  
#include <math.h>  
using namespace std;  
      
int main() {  
    int nilai = 2, n, total;    
      
        cout << " =====================================================" << endl;  
        cout << "       Program Menghitung Hasil dari 2 Pangkat n      " << endl;  
        cout << " =====================================================" << endl << endl;  
      
        cout << " Menghitung hasil 2 pangkat n" << endl << endl;  
        cout << " Masukkan nilai n = ";  
        cin >> n;  
        /* 
        Pow() adalah operator matematika pada library math c++ yang bisa digunakan untuk 
		menyingkat source code menghitung pangkat agar tidak memakan banyak tempat. Pow() 
		juga memudahkan pemula yang mungkin kesulitan memahami bagaimana algoritma menghitung 
		pangkat (yang mana merupakan perkalian m diulang sebanyak n). Syarat menggunakan pow() 
		adalah harus menyertakan library math.h pada header.
        */
        total = pow(2, n);  
      
        cout << endl << " Hasil dari " << nilai << " pangkat " << n << " adalah " << total << endl;  
        return 0;  
}  
