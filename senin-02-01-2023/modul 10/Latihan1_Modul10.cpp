//program Menghitung Luas Bangun Datar & Ruang
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

void persegi() //program function persegi
{
	float s, *luas, *keliling; //deklarasi variabel
	cout<<"\n\nPanjang Sisi = "; //input panjang sisi
	cin>>s; //simpan panjang sisi
	cout<<"\nLuas Persegi = " <<s*s; //hitung dan tampilkan luas persegi
	cout<<"\nKeliling Persegi = " <<4*s;	//hitung dan tampilkan keliling persegi
}

void lingkaran() //program function lingkaran
{
	double r; //deklarasi variabel
	cout<<"\n\nMasukan Nilai jari-jari = "; //input nilai jari jari
	cin>>r; //simpan nilai
	cout<<"\nLuas Lingkaran = " <<(3,14*r*r) <<endl; //hitung dan tampilkan luas lingkaran
	cout<<"\nKeliling Lingkaran = " <<2*(3,14*r) <<endl; //hitung dan tampilkan keliling lingkaran
}

void bola() //program function bola
{
	double r; //deklarasi variabel
	cout<<"\n\nJari-Jari = "; //input nilai jari jari
	cin>>r; //simpan nilai
	cout<<"\nLuas Bola = " <<4*(3,14*r*r); //hitung dan tampilkan luas bola
	cout<<"\nVolume Bola = " <<4/3*(3,14*r*r*r);  //hitung dan tampilkan volume bola
}

main() //program utama
{
	int pilihan; //deklarasi variabel
	do{
		cout<<"\n\n==================================================="<<endl;
		cout<<"|| PROGRAM MENGHITUNG LUAS BANNGUN DATAR & RUANG ||"<<endl;
		cout<<"||                                               ||"<<endl;
		cout<<"==================================================="<<endl;
		cout<<"|| 1. Luas dan Keliling Persegi   								||"<<endl;
		cout<<"|| 2. Luas dan Keliling Lingkaran 								||"<<endl;
		cout<<"|| 3. Luas dan Volume Bola        								||"<<endl;
		cout<<"==================================================="<<endl;
		cout<<"\nPilih Menu : "; //input pilihan
		cin>>pilihan; //simpan value
		
		switch(pilihan){ //jika pilihan
			case 1:{ //pilihan 1
				persegi(); //panggil function persegi
				break; //berhenti
			}
			
			case 2:{
				lingkaran(); //panggil function lingkaran
				break; //berhenti
			}
			
			case 3:{
				bola(); //panggil function bola
				break; //berhenti
			}
		}
		
	}
	while(pilihan!=3); //berhenti jika pilihan diatas 3

	getch();
}
