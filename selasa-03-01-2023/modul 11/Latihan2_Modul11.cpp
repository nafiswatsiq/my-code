//program 2
#include<stdio.h>
#include<conio.h>

//deklarasi fungsi
float kubus(int R); //deklarasi function kubus
float sisi(int R); //deklarasi function sisi
int rusuk; //deklrasi variabel rusuk
float volume; //deklarasi variabel volume

main(){
	printf("Masukkan Pajang Rusuk : "); //input panjang rusuk
	scanf("%d", & rusuk); //simpan panjang rusuk
	
	volume=kubus(rusuk); //panggil function kubus
	printf("\nVolume Tabung \t\t: %.2f", volume); //tampilkan volume tabung
	getche();
}

float kubus(int R){ //program function kubus
	//deklarasi
	float sisi(int R);
	//algoritma
	return sisi(R)*R;
}

float sisi(int R){ //program function sisi
	return R*R; //hitung jari jari
}

