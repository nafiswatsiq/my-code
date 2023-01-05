#include <conio.h> //header yg digunakan untuk membersihkan layar
#include <stdio.h> //header yg digunakan untuk input output
#include <stdlib.h> //header yg digunakan jika melibatkan pembandingan operasi konversi

int angka; //mendaftarkan variabel angka berupa integer

int main(){
	printf("masukan angka (1 - 4): "); //menampilkan input angka
	scanf("%d", &angka); //menyimpan input angka
	
	switch(angka){
		case 1: //jika angka adalah 1
			printf("satu"); //tampilkan satu
			break; //menghentikan kondisi
		case 2: //jika angka adalah 2
			printf("dua"); //tampilkan dua
			break; //menghentikan kondisi
		case 3: //jika angka adalah 3
			printf("tiga"); //tampilkan tiga
			break; //menghentikan kondisi
		case 4: //jika angka adalah 4
			printf("empat"); //tampilkan 4
			break; //menghentikan kondisi
		default: //jika tdak diantara 1 - 4
			printf("inputan harus dari 1 sampai dengan 4"); //tampilkan peringatan
			break;//menghentikan kondisi
	}
	
	getch();
}
