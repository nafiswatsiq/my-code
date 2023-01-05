#include <iostream> //header program yg digunakan agar bisa menggunakan perintah cin dan cout

using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi
string operasi; //deklarasi variabel operasi berupa string
int pilihan; //deklarasi variabel pilihan berupa integer
float hasil, a, b; //deklarasi variabel hasil, a, b

main(){
	cout << "====== Menu Pilihan =====";
	cout << "\n1. Penambahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian";
	cout << "\n\nMasukan Pilihan: "; //menampilkan input pilihan
	cin >> pilihan; //menyimpan input pilihan
	
	if(pilihan >= 1 && pilihan <= 4){ //jika pilihan di antara 1 - 4 maka lanjut
		cout << "\nNilai Prtama: "; //menampilkan input nilai pertama
		cin >> a; //menyimpan hasil input nilai pertama
		cout << "Nilai Kedua: "; //menampikan input nilai kedua
		cin >> b; //menyimpan hasil input nilai kedua
		
		switch (pilihan){ 
			case 1: //jika pilihan 1
				hasil = a+b; //hasil a ditambah b
				operasi = "Penambahan "; //dengan operasi penambahan
				break; //perintah berhenti
			case 2: //jika pilihan 2
				hasil = a-b; //hasil a dikurangi b
				operasi = "Pengurangan "; //dengan operasi pengurangan
				break; //perintah berhenti
			case 3: //jika pilihan 3
				hasil = a*b; //hasil a dikali c
				operasi = "Perkalian "; //dengan operasi perkalian
				break; //perintah berhenti
			case 4: //jika pilihan 4
				hasil = a/b; //hasil a dibagi b
				operasi = "Pembagian "; //dengan operasi pembagian
				break; //perintah berhenti
			default:		
				break;
		}
		
		cout << "\nHasil "<< operasi <<  hasil; //menampilkan hasil dari opesasi a dan b
	} else{ //jika tidak diantara 1 - 4
		cout << "Salah Memasukan Pilihan"; //menampilkan peringatan jika salah memasukan pilihan operasi
	}
	
	return 0;
}
