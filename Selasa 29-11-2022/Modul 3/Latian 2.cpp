//PROGRAM MANIPULASI NAMA
#include <iostream> //header program yg digunakan agar bisa menggunakan perintah cin dan cout
#include <conio.h> //header yg digunakan untuk menampilkan hasil
#include <string.h> //header yg digunakan untuk memanipulasi string

using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi
char fName[15], lName[15]; //mendaftarkan variabel nama depan dan nama belakang

main(){
	cout << "Masukan Nama Depan: "; //menampilkan input nama depan
	cin >> fName; //menyimpan input nama depan
	
	cout << "Masukan Nama Belakang: "; //menampilkan input nama belakang
	cin >> lName; //menyimpan input nama beakang
	
	cout << "===================" << endl;
	cout << "Nama Kamu: " << strcat(fName, lName) << endl; //menggabungkan nama depan dan nama belakang
	cout << "Panjang Nama Depan: " << strlen(fName) << endl; //menghitung karakter pada nama depan
	cout << "reverse Nama Belakang: " << strrev(lName) << endl; //membalikan karakter pada nama belakang
	
	system("pause"); //memberhentikan sementara program
	
	return 0; //menghentikan program
}
