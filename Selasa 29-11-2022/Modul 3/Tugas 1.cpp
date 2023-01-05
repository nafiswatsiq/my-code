//program menghitung diskon
#include <iostream> //header program yg digunakan agar bisa menggunakan perintah cin dan cout

using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi

float jmlBrng, hrgBrng, totBelanja, diskon, bayar, inpPembayaran, kembali; //deklarasi variabel berupa float
main(){
	cout << "+-------------------------------------+\n";
	cout << "|Program Menghitung Pembayaran Belanja|\n";
	cout << "+-------------------------------------+\n";
	
	cout << "Masukan Jumlah Barang: "; //menampilkan input jumlah barang
	cin >> jmlBrng; //menyimpan input jumlah barang
	
	cout << "Masukan Harga Barang: "; ////menampilkan input harga barang
	cin >> hrgBrng; //menyimpan input harga barang
	
	totBelanja = jmlBrng * hrgBrng; //menghitung total belanja
	if(totBelanja >= 100000){ //jika total belanja lebih dari atau sama dengan 100.000
		diskon = 5 * totBelanja / 100; //hitung diskon
		bayar = totBelanja - diskon; //menghitung total belanja setelah diskon
	}else{ //jika kurang dari 100.000
		bayar = totBelanja; //maka total belanja tetap
	}
	
	cout << "\nDiskon: " << diskon; //menampikan jumlah diskon
	cout << "\nTotal Bayar: " << bayar; //menampilkan total belanja
	cout << "\n\nInput Pembayaran: "; //menampilkan input pembyaran
	cin >> inpPembayaran ; //menyimpan input pembayaran
	
	kembali = inpPembayaran - bayar; //menghitung kembalian
	cout << "\nKembali: " << kembali; //menampilkan kembalian
	
	return 0; //menghentikan program
}
