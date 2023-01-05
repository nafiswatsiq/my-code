//program Tugas 1
#include<iostream>
#include<conio.h>
using namespace std;

int main(){

	int a, b, val, j; //deklarasi variabel integer

	cout << "Tentukan Jumlah: "; //input jumlah
	cin >> val; //simpan value jumlah
	
	for(j=1; j<=val; j++){ //perulangan tingkat 1
		for(a=5; a>=1; a--){ //perulangan tigkat 2
			for(b=1; b<=a; b++){ //perulangan tingkat 3
				if(a==b){ //jika a=b
					cout << '*'; //menampilkan bintang
				}else{ //jika tidak
					if(b%2 == 0){ //jika var b dibagi 2 = 0
						cout << "#"; //tampilkan pagar
					}else{ //jika tidak
						cout<<"^"; //tampilkan arrow top
					}
				}
			}
			cout<<endl; //new line
		}

		for(a=1; a<=5; a++){ //perulangan tingakt 2
			for(b=1; b<=a; b++){ //perulangan tingkat 3
				if(a == b){ //jika a=b
					cout<<'*'; //menampilkan bintang
				}else{ //jika tidak
					if(b%2 == 0){ //jika var b dibagi 2 = 0
						cout<<"#"; //menampilkan pagar
					}else{ //jika tidak
						cout<<"^"; //menampilkan arrow top
					}
				}
			}
			cout<<endl; //new line
		}
		cout<<endl; //new line
	}

	getch(); //menghentikan program
}
