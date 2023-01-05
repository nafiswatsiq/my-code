#include <stdio.h> //header yg digunakan untuk input output
#include <conio.h> //header yg digunakan untuk membersihkan layar

int main(){ //fungsi utama
	int i = 1; //deklarasi variabel i berupa integer
	float n, nilai, rata, jml=0; //deklarasi variabel berupa bilangan pecahan
	
	printf("Input banyak nilai = "); //tampilkan input banyak nilai
	scanf("%f", &n); //menyimpan input banyak nilai
	
	while(i <= n){ //pengulangan dari 1 dan kurang dari samadengan banyak nilai
		printf("Input Nilai %d =", i); //menampilkan input nilai ke i
		scanf("%f", &nilai); //menyimpan input nilai
		
		jml = jml+nilai; //menjumlahkan nilai
		i++; //menambahkan i + 1
	}
	
	rata = jml/n; //menghitung rata rata
	printf("\nTotal nilai = %2.f", jml); //menampilkan jumlah
	printf("\nRata nilai = %2.f", rata); //menampilkan rata rata
	
	getche(); //menghentikan program
}
