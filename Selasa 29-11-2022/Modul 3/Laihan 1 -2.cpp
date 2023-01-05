
//Program bilangan genap dan ganjil dengan printf
#include <iostream> //header program yg digunakan agar bisa menggunakan perintah cin dan cout
#include <conio.h> //header yg digunakan untuk menampilkan hasil
#include <stdio.h> //header yg digunakan untuk input output
 
int bil; //mendaftarkan variabel bil

main(){
	printf("Masukan Bilangan: "); //menampilkan input bilangan
	scanf("%d", &bil); //menyimpan input bilangan
	
	if(bil%2 == 0){ //jika bilangan habis dibagi 2
		printf("\n %d  adalah bilangan genap", bil); //maka bilangan tersebut adalah genap
	} else{ //jika tidak
		printf("\n %d  adalah bilangan ganjil", bil); //maka bilangan tersebut adalah genap
	}
	
	return 0; //menghentikan program
}
