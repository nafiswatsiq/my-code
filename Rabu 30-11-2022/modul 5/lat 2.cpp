
#include <conio.h> //header yg digunakan untuk membersihkan layar
#include <stdio.h> //header yg digunakan untuk input output

int a; //mendaftarkan variabel a berupa integer

int main(){
	printf("Masukan Bilangan = "); //input bilangan
	scanf("%d", &a); //menyimpan input bilangan
	
	if(a == 10){ //jika a sama dengan 10
		printf("\nSATU"); //tampilkan satu
	}else if(a == 20){ //jika a samadengan 20
		printf("\nDUA"); //tampilkan dua
	}else if (a == 30){ //jika a samadengan 30
		printf("\nTIGA"); //tampilkan tiga
	}else{ //jika tidak 10, 20, 30
		printf("\nEMPAT"); //tampilkan empat
	}
	
	getch(); //menghentikan program
}
