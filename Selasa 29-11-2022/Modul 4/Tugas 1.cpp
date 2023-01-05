
//program menghitung total investasi
#include <iostream>; //header program yg digunakan agar bisa menggunakan perintah cin dan cout
#include <stdlib.h> //header yg digunakan untuk operasi pembanding dan operasi konversi
#include <conio.h> //header yg digunakan untuk menampilkan hasil
using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi

typedef struct{ //digunaan unduk mendeklarasikan supaya mempesingkat bentuk penulisan
	int T; //tahun
	int B; //bulan
}TAHUN; //dengan nama variabel TAHUN
TAHUN T1, T2; //inisialisasi variabel Tahun dengan T1 dan T2

int modal, lamaInv, bunga, totUntung, totModal; //deklarasi variabel berupa integer
char jawab; //deklarasi variabel jawab berupa karakter

main(){
	do{
		system("cls"); //membersihkan tampilan program yg sudah dijalankan
		cout << "+-------------------------+\n";
		cout << "|Menghitung total ivestasi|\n";
		cout << "+-------------------------+\n";
		
		cout << "Modal \t\t\t: Rp "; cin >> modal; //input moda;
		cout << "Tahun Investasi Awal \t:"; cin >> T1.T; //inpuut tahun awal investasi
		cout << "Bulan Awal (1-12) \t:"; cin >> T1.B; //input bulan awal investasi
		cout << "Tahun Ambil Investasi \t:"; cin >> T2.T; //input tahun ambil investasi
		cout << "Bulan Ambil (1-12) \t:"; cin >> T2.B; //input bulan ambil investasi
		
		lamaInv = ((T2.T - T1.T)*12) + T2.B - T1.B; //menghitung total bulan investasi 
		cout << "\n\nLama Investasi \t\t\t: " << lamaInv << " bulan"; //menampilkan total bulan investasi
		
		bunga = modal/100; //menghitung bunga investasi
		cout << "\nBunga Pebulan (1% dari modal) \t: Rp " << bunga; //menampilkan bunga dari modal
		
		totUntung = lamaInv * bunga; //menghitung total untung
		cout << "\nTotal Keuntungan \t\t: Rp " << totUntung; //menampilkan total keuntungan
		
		totModal = modal + totUntung; //menghitung total modal ditambah bunga
		cout << "\nTotal Uang yg diperoleh \t: Rp " << totModal; //menampilkan total dari modal ditambah keuntungan
		
		cout << "\n+++++++ Selamat Berinvetasi +++++++";
		
		cout << "\n\nUlangi Program ini? (Y/N)"; //menanyakan jika ingin mengulagi program kembali
		cin >> jawab; //menyimpan jawaban jika ingin mengulangi program kembali
	}
	while( jawab == 'y' || jawab == 'Y'); //mengulangi program bila menjawab y/Y
	
	return 0; //menghentikan program
}

