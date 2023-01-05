#include <iostream>//header program yg digunakan agar bisa menggunakan perintah cin dan cout

using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi

int pilihan, harga, makanan = 0, minuman = 0; //deklarasi variabel integer
char jwb; //deklarasi variabel karakter

int main(){ //program utama
	do{
		system("cls"); //membersihkan tampilan program yg sudah dijalankan
		//list menu
		cout << "=== MENU UTAMA ===\n";
		cout << "1. MAKANAN \n2. MINUMAN\n";
		cout << "\nPilihan = "; //input menu
		cin >> pilihan; //menyimpan input menu
	
		if(pilihan == 1){ //jika pilih menu 1
			do{
				system("cls");
				//tampilkan list menu makanan
				cout << "===== MENU MAKANAN =====\n";
				cout << "1. Nasi Goreng Gila\n";
				cout << "2. Nasi Goreng Kambing\n";
				cout << "3. Nasi Goreng Pete\n";
				cout << "4. Nasi Goreng Cumi\n";
				cout << "5. Nasi Goreng Special\n\n";
			
				cout << "Pilih menu makanan = "; //input menu makanan
				cin >> pilihan; //menyimpan input menu makanan
			
				if(pilihan == 1){ //jika milih makanan 1
					cout << "\nPilihan anda NASI GORENG GILA\n"; //tampilkan menu makanan
					cout << "Harga = Rp 45.000"; //tampilkan harga
					harga = 45000; //simpan harga
				}else if(pilihan == 2){ //jika milih 2
					cout << "\nPilihan anda NASI GORENG Kambing\n"; //tampilkan menu makanan
					cout << "Harga = Rp 65.000"; //tampilkan harga
					harga = 65000; //simpan harga
				}else if(pilihan == 3){ //jika milih 3
					cout << "\nPilihan anda NASI GORENG Pete\n"; //tampilkan menu makanan
					cout << "Harga = Rp 40.000"; //tampilkan harga
					harga = 40000; //simpan harga
				}else if(pilihan == 4){ //jika milih 4
					cout << "\nPilihan anda NASI GORENG Cumi\n"; //tampilkan menu makanan
					cout << "Harga = Rp 45.000"; //tampilkan harga
					harga = 45000; //simpan harga
				}else if(pilihan == 5){ //jika milih 5
					cout << "\nPilihan anda NASI GORENG Special\n"; //tampilkan menu makanan
					cout << "Harga = Rp 75.000"; //tampilkan harga
					harga = 75000; //simpan harga
				}else{ //jika tidak di antara 1-5
					cout << "Salah input Makanan!\n"; //tampilkan peringatan
					harga = 0; //simpan harga 0
				}
			
				makanan = harga + makanan; //hitung harga
				cout << "\n\nTotal = Rp " << makanan; //tampikan harga makanan
				cout << "\nPilih makanan lagi? (Y/N) = "; //tanya ulangi lagi
				cin >> jwb; //input jawaban
			} while (jwb == 'y' || jwb == 'Y'); //jika jawaban y/Y maka di ulangi
			
		}else if(pilihan == 2){ //jika pilih menu 2
			do{
				system("cls");
				//tampilkan menu minuman
				cout << "==== MENU MINUMAN =====\n";
				cout << "1. Mocacino\n";
				cout << "2. Es Teler\n";
				cout << "3. Es Tropical\n";
			
				cout << "Pilih menu minuman = "; //tampilkan input minuman
				cin >> pilihan; //menyimpan input minuman
			
				if(pilihan == 1){ //jika pilih 1
					cout << "\nPilihan anda Mocacino\n"; //tampilkan menu minuman
					cout << "Harga = Rp 20.000"; //tampilkan harga
					harga = 20000; //simpan harga
				}else if(pilihan == 2){ //jika pilih 2
					cout << "\nPilihan anda Es Teler\n"; //tampilkan menu minuman
					cout << "Harga = Rp 25.000"; //tampilkan harga
					harga = 25000; //simpan harga
				}else if(pilihan == 3){ //juka pilih 3
					cout << "\nPilihan anda Es Tropical\n"; //tampilkan menu minuman
					cout << "Harga = Rp 15.000"; //tampilkan harga
					harga = 15000; //simpan harga
				}else{ //jika salah input
					cout << "Salah input Minuman!\n"; //tampilkan peringatan
					harga = 0; //simpan harga 0
				}
			
				minuman = harga + minuman; //hitung harga minuman
				cout << "\n\nTotal = Rp " << minuman; //tampilkan total minuman
				cout << "\n\nPilih Minuman lagi? (Y/N) = "; //tanyakan jika ingin mengulangi program
				cin >> jwb; //simpan jawaban
			} while (jwb == 'y' || jwb == 'Y'); //jika jawaban y/Y maka diulangi

		}else{ //salah memasukan pilihan menu
			cout << "Salah memasukan pilihan!"; //tampilkan peringatan
		}
		system("cls");
		cout << "\nKembali ke menu utama? (Y/N) = "; //tanyakan untuk mengulangi program
		cin >> jwb;	 //simpan jawaban
	} while (jwb == 'y' || jwb == 'Y'); //jika jawaban y/Y maka akan di ulang
	
	cout << "\nTOTAL BAYAR = Rp " << makanan + minuman; //tampilkan total dengan menjumlahkan makanan dan minuman
	return 0; //menghentikan program
}
