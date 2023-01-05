
#include <conio.h> //header yg digunakan untuk membersihkan layar
#include <stdio.h> //header yg digunakan untuk input output

int belanja, diskon; //mendaftarkan variabel beupa integer

int main(){
	printf("Masukan Total belanja = "); //input masukan total belanja
	scanf("%d", &belanja); //menyimpan input total belanja
	
	if(belanja > 50000 && belanja<100000){ //jika belanja lebih dari 50000 dan kurang dari 100000
		diskon = 0.02*belanja; //hitung diskon 2%
		belanja = belanja-diskon; //hitung total belanja dikurangi diskon
	}else if(belanja > 100000 && belanja<150000){ //jika belanja lebih dari 100000 dan kurang dari 150000
		diskon = 0.05*belanja; //hitung diskon 5%
		belanja = belanja-diskon; //hitung total belanja dikurangi diskon
	}else if(belanja > 150000){ //jika belanja lebih dari 150000
		diskon = 0.15*belanja; //hitung diskon 15%
		belanja = belanja-diskon; //hitung total belanja dikurangi diskon
	}else{ //jika kurang dari 50000
		diskon = 0*belanja; //tidak mendapatkan diskon
		belanja = belanja-diskon; //hitung total belanja dikurangi diskon
	}
	
	printf("\nDiskon = %d", diskon); //menampilkan diskon
	printf("\nTotal belanja = %d", belanja); //menampikan total belanja
	
	getch();// menghentikan program
}
