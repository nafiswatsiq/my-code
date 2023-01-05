#include <iostream>
using namespace std;

int jmlBrng, hrgBrng, totBelanja, diskon, inpPembayaran, kembali; //deklarasi variabel berupa int

int totalBelanja(int jmlBrng, int hrgBrng){ //program funtion total belanja
    return jmlBrng * hrgBrng; //hitung total
}

int hitungDiskon(int jmlBrng, int hrgBrng){ //program funtion hitung diskon
    totBelanja = totalBelanja(jmlBrng, hrgBrng); //panggil total belanja

    if(totBelanja >= 500000){ //jika total belanja lebih dari atau sama dengan 500.000
		diskon = 5 * totBelanja / 100; //hitug diskon 5%
	}else{ //jika kurang dari 500.000
		diskon = 0; //tidak dapat diskon
	}
    return diskon; //mengembalikan nilai diskon
}

int totBayar(int jmlBrng, int hrgBrng){ //program funtion total bayar 
    return totalBelanja(jmlBrng, hrgBrng) - hitungDiskon(jmlBrng, hrgBrng); //hitung total bayar
}

int kembalian(int inpPembayaran, int jmlBrng, int hrgBrng){ //program funtion hitung kembalian
    return inpPembayaran - totBayar(jmlBrng, hrgBrng); //hitung kembalian
}

main(){
    cout << "+-------------------------------------+\n";
	cout << "|Program Menghitung Pembayaran Belanja|\n";
	cout << "+-------------------------------------+\n";
	
	cout << "Masukan Jumlah Barang: "; //menampilkan input jumlah barang
	cin >> jmlBrng; //menyimpan input jumlah barang
	
	cout << "Masukan Harga Barang: Rp "; ////menampilkan input harga barang
	cin >> hrgBrng; //menyimpan input harga barang

	
	cout << "\nDiskon: " << hitungDiskon(jmlBrng, hrgBrng); //menampikan jumlah diskon
	cout << "\nTotal Bayar: Rp " << totBayar(jmlBrng, hrgBrng); //menampilkan total belanja
	cout << "\n\nInput Pembayaran: Rp "; //menampilkan input pembyaran
	cin >> inpPembayaran ; //menyimpan input pembayaran
	
	kembali = kembalian(inpPembayaran, jmlBrng, hrgBrng); //menghitung kembalian
	cout << "\nKembali: Rp " << kembali; //menampilkan kembalian
	
    return 0;
}