//Program menambahkan 10 detik
#include <iostream>; //header program yg digunakan agar bisa menggunakan perintah cin dan cout
#include <stdlib.h> //header yg digunakan untuk operasi pembanding dan operasi konversi
#include <conio.h> //header yg digunakan untuk membersihkan layar

typedef struct{ //digunaan unduk mendeklarasikan supaya mempesingkat bentuk penulisan
	int J; //jam
	int M; //menit
	int D; //detik
}WAKTU; //dengan nama variabel WAKTU
WAKTU W; //inisialisasi variabel WAKTU dengan W

int jamBaru, menitBaru, detikBaru; //deklarasi variabel berupa integer
char jawab; //deklarasi variabel berupa karakter

int main(){
	do{
		system("cls"); //membersihkan tampilan program yg sudah dijalankan
		
		printf("JAM AWAL\n");
		printf("Masukan jam \t:"); //input jam awal
		scanf("%d", &W.J); //menyimpan input jam awal
	
		printf("Masukan menit \t:"); //input menit awal
		scanf("%d", &W.M); //menyimpan menit awal
	
		printf("Masukan detik \t:"); //input detik awal
		scanf("%d", &W.D); //menyimpan detik awal
	
		detikBaru = W.D + 10; //menambahkan detik awal dengan 10
		if(detikBaru >= 60){ //jika detik baru lebih dari atau samadengan 60 
			detikBaru = detikBaru % 60; //mod detik baru dengan 60
			menitBaru = W.M + 1; //menit baru ditambahkan 1
			jamBaru = W.J; //jam tetap
		}else{ //jika detik baru tidak lebih dari 60
			jamBaru = W.J; //jam tetap
			menitBaru = W.M; //menit tetap
		}
	
		if(menitBaru >= 60){ //jika menit lebih dari atau samadengan 60
			menitBaru = menitBaru%60; //mod menit dengan 60
			jamBaru = W.J + 1; //jam ditambah 1
		}
	
		printf("\nJAM AKHIR");
		printf("\nJam baru \t :%d", jamBaru); //tampilkan jam
		printf("\nMenit baru \t :%d", menitBaru); //tampikan menit
		printf("\nDetik baru \t :%d", detikBaru); //menampilkan detik
	
		printf("\n\nIngin mengulangi Program? (Y/N) "); //menanyakan kalau ingin mengulang program
		scanf("%s", &jawab);//menyimpan input pertanyaan
	}while(jawab == 'y' || jawab == 'Y'); //jika jawaban y maka akan mengulang program
	
	getch(); //menghentikan program
}
