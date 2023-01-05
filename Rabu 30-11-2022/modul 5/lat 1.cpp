
#include <conio.h> //header yg digunakan untuk membersihkan layar
#include <stdio.h> //header yg digunakan untuk input output
 
int usia; //mendaftarkan variabel usia berupa integer

int main(){
	printf("Masukan USia Anda = "); //menampilakn input usia
	scanf("%d", &usia); //menyimpan input usia
	
	if(usia < 17){ //jika usia kurang dari 17 tahun
		printf("\nANDA TIDAK BOLEH MENONTON"); //maka tidak diperbolehkan menonton
	}else{ //jika usia lebih dari 17 tahun
		printf("Silahkan MENONTON"); //maka diperbolehkan menonton
	}
	
	getch(); //menghentikan program
}
