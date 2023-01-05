//program 1 for 2 tingkat
#include <iostream>
#include <conio.h>
using namespace std;

int main(){ //program utama

	int a, b; //deklarasi variabel
	
	for( a=1; a<=4; a++ ){ //perulangan tingkat 1
		for( b=1; b<=a; b++ ) //perulangan tingkat 2
		cout << b; //menampilkan nilai
		cout << endl; //membuat line baru
	}
	cout << endl; //membuat line baru
	
	for( a=5; a>0; a-- ){ //perulangan tingkat 1
		for( b=1; b<a; b++ ) //perulangan tigkat 2
		cout << b; //menampilkan nilai
		cout << endl; //membuat line baru
	}
	
	getch(); //menghentikan program
}
	
