//program latihan 3
#include<iostream>
#include<conio.h>
using namespace std;

int main(){ //program utama

	char a, b; //deklarasi variabel berupa karakter
	int val, j; //deklarasi variable berupa integer
	
	cout << "Tentukan Jumlah: "; //input jumlah
	cin >> val; //simpan value jumlah
	
	for(j=1; j<=val; j++){ //perulangan tingkat pertama
		for(a='a'; a<='g'; a++){ //perulangan tingkat kedua
			for(b='a'; b<=a; b++){ //perulangan tingkat ketiga
				if(a==b){ //jika variabel a = b 
					cout << '*'; //menampilkan bintang
				}else{ // jika tidak
					cout << b; //menampilkan nilai b
				}
			}
			cout<<endl; //membuat line baru
		}

		for(a='f'; a>'a'; a--){ //perulangan tingkat kedua
			for(b='a'; b<=a; b++){ //perulangan tingkat ketiga
				if(a==b){ //jika variabel a=b 
					cout << '*'; //menampilkan bintang
				}else{ //jika tidak
					cout << b; //menampilkan nilai b
				}
			}
			cout << endl; //membuat line baru
		} 
		cout << endl; //memnbuat line baru		
	}

	getch(); //menghentikan program
}
	
