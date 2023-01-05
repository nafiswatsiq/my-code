//Program while
#include <stdio.h> //header yg digunakan untuk input output
#include <conio.h> //header yg digunakan untuk membersihkan layar

int bil = 1; //deklarasi variabel bil berupa integer

int main(){ //fungsi utama
	while(bil <= 10){ //pengulangan bil kurang dari atau sama dengan 10 
		printf("Belajar perulangan while\n"); //tampilkan teks
		bil++; //menambah bilangan dengan satu
	}
	
	getche(); //menghentikan program
}
