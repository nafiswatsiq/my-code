//Program Manipuslasi Nama
#include <iostream> //header program yg digunakan agar bisa menggunakan perintah cin dan cout
#include <stdio.h> //header yg digunakan untuk input output
#include <conio.h> //header yg digunakan untuk menampilkan hasil
#include <string.h> //header yg digunakan untuk memanipulasi string

using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi
char first[15], last[15], gabung[50]; //mendaftarkan variabel nama depan dan nama belakang
 
 main(){
 	printf("Masukan Nama Depan = "); //menampilkan input nama depan
 	scanf("%s", &first); //menyimpan input nama depan
 	
 	printf("Masukan Nama Belakang = "); //menampilkan input nama belakang
 	scanf("%s", &last); //menyimpan input nama beakang

	printf("Nama Anda = %s", strcat(first, last)) ; //menggabungkan nama depan dan nama belakang
	printf("\nPanjang = %d", strlen(last)); //menghitung karakter pada nama belakang
	printf("\nNama belakang anda jika dibalik = %s", strrev(last)); //membalikan karakter pada nama belakang
	
 	return 0; //menghentikan program
 }
