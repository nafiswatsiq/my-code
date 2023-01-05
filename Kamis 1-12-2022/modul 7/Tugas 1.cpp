#include <iostream>//header program yg digunakan agar bisa menggunakan perintah cin dan cout

using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi

int pilKndrn, pilNama; //deklarasi variabel berupa integer
char jawab; //deklarasi variabel karakter

int main(){ //fungsi utama
	do{ 
		system("cls"); //membersihkan tampilan program yg sudah dijalankan
		//menampilkan list kendaraan
		cout << "JENIS PILIHAN\n";
		cout << "=============\n";
		cout << "1. Mobil \n2. Motor";
		cout << "\nMasukan : "; //input pilihan kendaraan
		cin >> pilKndrn; //menyimpan pilihan kendaraan
		
		switch(pilKndrn){
			case 1: //jika pilihan kendaraan 1
				system("cls");
				//tampilkan merek mobil
				cout << "MEREK MOBIL\n";
				cout << "===========\n";
				cout << "1. HONDA \n2. SUZUKI";
				//input pilihan mobil
				cout << "\nMasukan pilihan mobil : ";
				cin >> pilNama; //menyimpan input pilihan mobil
				
				system("cls");
				if(pilNama == 1){ //jika pilihan mobil 1
					//tampilkan list mobil
					cout << "===== HONDA =====\n";
					cout << "=================\n";
					cout << "Jazz : 170 juta\n";
					cout << "Brio : 120 juta\n";
					cout << "Mobilio : 170 juta\n";		
				}else if(pilNama == 2){ //jika pilihan mobil 2
					//tampilkan list mobil
					cout << "===== SUZUKI =====\n";
					cout << "==================\n";
					cout << "APV : 180 juta\n";
					cout << "Swift : 155 juta\n";
					cout << "Ertiga : 160 juta\n";
				} else{ //jika tidak dalam pilihan
					cout << "Salah memasukan pilihan!."; //peringatan salah pilihan
				}
				break; //menghentikan kondisi
			case 2: //jika pilihan kendaraan 2
				system("cls");
				//tampilkan merek motor
				cout << "MEREK MOTOR\n";
				cout << "===========\n";
				cout << "1. HONDA \n2. YAMAHA";
				cout << "\nMasukan Pilihan Motor : "; //input motor
				cin >> pilNama; //menyimpan input motor
				
				system("cls");
				if(pilNama == 1){ //jika pilihan motor 1
					//tampilkan list motor
					cout << "===== HONDA =====\n";
					cout << "=================\n";
					cout << "Vario : 15 juta\n";
					cout << "Supra : 12 juta\n";		
				}else if(pilNama == 2){ //jika pilihan motor 2
					//tampilkan list motor
					cout << "===== YAMAHA =====\n";
					cout << "==================\n";
					cout << "Mio : 14 juta\n";
					cout << "Vixion : 20 juta\n";
				} else{ //jika salah input merek
					cout << "Salah memasukan pilihan!."; //tampilkan peringatan
				}
				break; //menghentikan kondisi
			default: //jika pilihan kendaraan tidak ada
				cout << "anda salah memasukan pilihan kendaraan"; //tampilkan peringatan
		}
		
		cout << "Apakah ingin mengulangi program ini kembali? (Y/N) : "; //input pengulangan program
		cin >> jawab; //menginput pengulangan program
	}while(jawab == 'y' || jawab == 'Y');//jika jawaban y maka program di ulangi
	
	return 0; //menghentikan program
}
