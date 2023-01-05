//program 2 for 3 tingkat
#include <iostream> 
using namespace std;

main(){ //program utama
	int thn, item; //deklarasi variable berupa integer
	char toko; //deklarasi variable berupa character
	int a=10; //deklarasi program berupa integer
	
	for( thn=1; thn<3; thn++ ){ //perulagan tingkat pertama 
		cout<< "\nTahun-" << thn <<endl; //menampilkan nilai
		
		for(toko='A'; toko<='C'; toko++){ //perulangan tingkat kedua
			cout<< "Toko-" << toko <<endl; //menampilkan nilai
			
			for(item=1; item<=2; item++){ //perulangan tingkat ketiga
				cout<< a <<endl; //menampilkan nilai
				a++; //increment variabel a
			}
		}
	}
	
	return 0;
}
