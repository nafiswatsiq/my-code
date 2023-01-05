#include <conio.h> //header yg digunakan untuk membersihkan layar
#include <stdio.h> //header yg digunakan untuk input output
#include <stdlib.h> //header yg digunakan jika melibatkan pembandingan operasi konversi
#include <iostream> //header program yg digunakan agar bisa menggunakan perintah cin dan cout

using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi

char nama[30], golongan, jawab; //mendaftarkan variable berupa karakter
int jamKerja, jamLembur, gaji, upah, biayaLembur; //mendaftarkan variable berupa integer

int main(){
	do{
		system("cls"); //membersihkan tampilan program yg sudah dijalankan
		printf("MENGHITUNG GAJI PEGAWAI\n");
		printf("=======================\n");
		printf("Nama Pegawai \t : "); //input nama pegawai
		cin.get(nama, 30); //menyimpan input nama pegawai
	
		printf("Golongan (A - D) : "); //input gologan pegawai
		scanf("%s", &golongan); //menyimpan input golongan
		
		printf("Jam kerja \t : "); //input jam kerja
		scanf("%d", &jamKerja); //menyimpan input nama jem kerja
	
		switch(golongan){
			case 'A': //jika golongan A
				upah = 4000; //upah 4000
				break; //menghentikan kondisi
			case 'B': //jika gologan B
				upah = 5000; //upah 5000
				break; //menghentikan kondisi
			case 'C': //jika gologan C
				upah = 6000; //upah 6000
				break; //menghentikan kondisi
			case 'D': //jika gologan D
				upah = 7500; //upah 7500
				break; //menghentikan kondisi
			default: //jika tidak diantara A - D
				upah = 0; //upah 0
				break; //menghentikan kondisi
		}
	
		if(jamKerja > 48){ //jika jam kerja lebih dari 48 jam
			jamLembur = jamKerja - 48; //hitung jam lembur
		}else{ //jika kuran dari 48
			jamLembur = 0; //jam lenmbur 0
		}
		biayaLembur = jamLembur * 5000; //hitung biaya lembur
		gaji = (48 * upah) + biayaLembur; //hitung gaji
	
		printf("\n\nGAJI PEGAWAI PERMINGGU\n");
		printf("======================\n");
		printf("Nama \t\t : %s", nama); //tampilkan nama
		printf("\n\nJam Lembur \t : %d jam", jamLembur); //tampilkan jam lembur
		printf("\nGaji Gologan \t : Rp %d", upah); //tampilkan upah
		printf("\nGaji \t\t : Rp %d", gaji); //tampilkan gaji
	
		printf("\n\nApakah ingin mengulangi (Y/N) :"); //pertanyaan untuk mengulangi progaram
		scanf("%s", &jawab); //input jawaban pengulangan program
		
		cin.get();
	}while(jawab == 'y' || jawab == 'Y'); //megulangi program jika jawaban y / Y
	
	getch(); //menghentikan program
}
