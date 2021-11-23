#include <iostream>  
#include <math.h>  
using namespace std;  
//minimal ada satu fungsi main () dalam c++      
int main() {  
    int nilai = 3, n, total;    
      
        cout << " =====================================================" << endl;  
        cout << "       Program Menghitung Hasil dari 3 Pangkat n      " << endl;  
        cout << " =====================================================" << endl << endl;  
      
        cout << " Menghitung hasil 3 pangkat n" << endl << endl;  
        cout << " Masukkan nilai n = ";  
        cin >> n;  
        /* 
        Pow() adalah operator matematika pada library math c++ yang bisa digunakan untuk 
		menyingkat source code menghitung pangkat agar tidak memakan banyak tempat. Pow() 
		juga memudahkan pemula yang mungkin kesulitan memahami bagaimana algoritma menghitung 
		pangkat (yang mana merupakan perkalian m diulang sebanyak n). Syarat menggunakan pow() 
		adalah harus menyertakan library math.h pada header.
        */
    	
    	//rumus total pangkat n dari variabel 3
        total = pow(3, n);  
      	//output
        cout << endl << "Hasil dari " << nilai << " pangkat " << n << " adalah " << total << endl;  
        
    //karena menggunakan fungsi int main ()
    return 0;  
}  
