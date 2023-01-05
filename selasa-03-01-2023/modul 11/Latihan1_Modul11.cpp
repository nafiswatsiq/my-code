//program 1
#include<stdio.h>
#include<conio.h>
#define phi 3.14 //definisi pi

//deklarasi
float tabung(int R, int T); //deklarai function tabung
int jari, tinggi; //deklarasi variabel integer
float volume; //eklarasi variabel decimal

main() {
	printf("Masukkan Jari-Jari Tabung \t: "); //input jari jari 
	scanf("%d", & jari); //simpan input jari jari
	printf("Masukkan Tinggi Tabung \t\t: "); //input tinggi
	scanf("%d", & tinggi); //simpan input tinggi
	
	volume=tabung(jari,tinggi); //panggil function tabung
	printf(" Volume Tabung \t\t\t: %.2f",volume); //input valume tabung
	getche();
}

float tabung(int R, int T){//program function tabung
	//deklarasi
	float Lingkaran(int R); 
	//algoritma
	return Lingkaran(R)*T; //hitung volume tabung
}

float Lingkaran(int R){ //program function lingkaran
	return 3.14*R*R; //hitung luas lingkaran
}
