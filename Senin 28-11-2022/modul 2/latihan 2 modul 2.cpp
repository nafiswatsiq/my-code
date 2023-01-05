#include <conio.h> //header yg digunakan untuk menampilkan hasil
#include <stdio.h> //header yg digunakan untuk input output
#include <stdlib.h> //header yg digunakan untuk operasi pembanding dan operasi konversi

typedef struct { //digunaan unduk mendeklarasikan supaya mempesingkat bentuk penulisan
	char nama[35]; //nama dengan panjang karakter 35 
	char nim[20]; //nim dengan panjang karakter 20
	char matkul[35]; //matkul dengan panjang karakter 35
	float nilAngka; //nilai angka dengan tipe data desimal
} mahasiswa; //dengan nama variabel mahasiswa


mahasiswa m; //aliase variabel mahasiswa dengan variabel m

main(){
	printf(" ++++ Masukan data mahasiswa +++++ \n");
	printf("Nama ="); gets(m.nama); //input nama
	printf("Nim ="); gets(m.nim); //input nim
	printf("Matkul ="); gets(m.matkul); //input matkul
	printf("Nilai ="); scanf("%2f", &m.nilAngka); //input nilai
		
	//kondisi
	if(m.nilAngka > 85 && m.nilAngka <= 100) //jika nilai lebih dari atau sama dengan 85 
		printf("Nilai = A"); //maka nilai A
	else if (m.nilAngka < 85 && m.nilAngka > 75 ) //jika nilai kurang dari 85 dan nilai lebih dari 75  
		printf("Nilai = B"); //mana nilai B
	else if ((m.nilAngka <= 75) && (m.nilAngka > 65)) //jika nilai kurang dari atau sama dengan 75 dan nilai lebih dari 65
		printf("Nilai = C"); //maka nilai C
	else if (m.nilAngka <= 65 && m.nilAngka >= 55 ) //jika nilai kurang dari atau sama dengan 65 dan nilai lebih dari atau sama dengan 55 
		printf("Nilai = D"); //maka nilai D
	else //jika nilai kurang dari 55
		printf("Nilai = E"); //maka nilai E
	getche(); //membaca data karakter
	
	return 0;
}
