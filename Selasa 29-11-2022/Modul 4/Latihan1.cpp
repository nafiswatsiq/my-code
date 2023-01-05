
//Program menghitung pembayaran di warnet
//jam selesai wajib lebih besar dari jam mulai dan dalam format 24 jam
//biaya warnet ditentukan permeni sebesar rp 50, detik tdk dihitung

#include <iostream>; //header program yg digunakan agar bisa menggunakan perintah cin dan cout
#include <stdlib.h> //header yg digunakan untuk operasi pembanding dan operasi konversi
#include <conio.h> //header yg digunakan untuk menampilkan hasil
using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi

typedef struct{ //digunaan unduk mendeklarasikan supaya mempesingkat bentuk penulisan
	int J; //Jam
	int M; //menit
}JAM; //dengan nama variabel JAM
JAM j1, j2; //inisialisasi variabel JAM dengan J1 dan J2

int menit, bayar; //deklarasi variabel berupa integer
char jawab; //deklarasi variabel jawab berupa karakter

main(){
	do{
		system("cls"); //membersihkan tampilan program yg sudah dijalankan
		cout << "Program menghitung biaya warnet";
		cout << "\n------------------------------";
	
		cout << "\nJAM MULAI\n";
		cout << "Masukan Jam: "; cin >> j1.J; //menginputkan jam mulai
		cout << "Masukan Menit: "; cin >> j1.M; //mengimputkan menit mulai
	
		cout << "\nJAM SELSAI\n";
		cout << "Masukan Jam: "; cin >> j2.J; //menginputkan jam selesai
		cout << "Masukan Menit: "; cin >> j2.M; //menginputkan menit selesai
	
		//ubah kedalam menit dan selisih menit
		menit = (j2.J -j1.J)*60 + (j2.M - j1.M);
	
		//Total bayar
		bayar = menit * 100;
	
		//tampilkan
		cout << "\n\nBiaya Warnet permenit Rp 100.00"; 
		cout << "\nLama brinternet " << menit/60 << " jam " << menit%60 << "menit\n"; //menampilkan lama waktu berinternet
		cout << "total pembayaran : Rp " << bayar << endl; //menampilkan total bayar
	
		cout << "\n\nIngin mengulang program ini kembali? (Y/N): "; //menanyakan jika ingin mengulagi program kembali
		cin >> jawab; //menyimpan jawaban jika ingin mengulangi program kembali
	} 
	while(jawab == 'y' || jawab =='Y'); //mengulangi program bila menjawab y/Y
	
	return 0; //menghentikan program
}
