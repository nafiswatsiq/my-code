//program Menghitung Luas Bangun Datar & Ruang
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

void pembayaran() //program function persegi
{
  float jmlBrng, hrgBrng, totBelanja, diskon, bayar, inpPembayaran, kembali; //deklarasi variabel berupa float

	cout << "+-------------------------------------+\n";
	cout << "|Program Menghitung Pembayaran Belanja|\n";
	cout << "+-------------------------------------+\n";
	
	cout << "Masukan Jumlah Barang: "; //menampilkan input jumlah barang
	cin >> jmlBrng; //menyimpan input jumlah barang
	
	cout << "Masukan Harga Barang: "; ////menampilkan input harga barang
	cin >> hrgBrng; //menyimpan input harga barang
	
	totBelanja = jmlBrng * hrgBrng; //menghitung total belanja
	if(totBelanja >= 100000){ //jika total belanja lebih dari atau sama dengan 100.000
		diskon = 5 * totBelanja / 100; //hitung diskon
		bayar = totBelanja - diskon; //menghitung total belanja setelah diskon
	}else{ //jika kurang dari 100.000
		bayar = totBelanja; //maka total belanja tetap
	}
	
	cout << "\nDiskon: " << diskon; //menampikan jumlah diskon
	cout << "\nTotal Bayar: " << bayar; //menampilkan total belanja
	cout << "\n\nInput Pembayaran: "; //menampilkan input pembyaran
	cin >> inpPembayaran ; //menyimpan input pembayaran
	
	kembali = inpPembayaran - bayar; //menghitung kembalian
	cout << "\nKembali: " << kembali; //menampilkan kembalian
}

void segitigaSatu() //program function lingkaran
{
  int a, b, c, num; //deklarasi variabel integer
  cout<<"\nMatriks Segitiga Jenis 1 dengan lebar "; //input matriks
	cin>>num; //simpan value
	cout<<"---------------------------------------"<<endl;
	
 	for(a=1; a<=num; a++){ //perulangan tingkat 1
  	for(b=a; b>=1; b--){ //perulangan tingkat 2
  		cout<<" "; //tampilkan spasi
 	  }
 	  for(c=a; c<=num; c++){ //perulangan tingakat 2
 	  	cout<< c <<" "; //menampilkan nilai c
		}
		cout<<endl; //new line
  }
}

void segitigaDua() //program function bola
{
  int a, b, num; //deklarasi variabel integer

  cout<<"\nMatriks Segitiga Jenis 2 dengan lebar "; //input matriks
	cin>>num; //simpan value
	cout<<"---------------------------------------"<<endl;
	
	for(a=1; a<=num; a++){ //perulangan tingkat 1
		for (b=1; b<=a; b++){ //perulangan tingkat 2
      cout<<"2 "; //menampilkan 2
   	}
   	cout<<endl; //new line
	}
}

main() //program utama
{
	int pilihan; //deklarasi variabel
	do{
		cout<<"\n\n================================================="<<endl;
		cout<<"|| Pilih Program                                ||"<<endl;
		cout<<"||                                              ||"<<endl;
		cout<<"=================================================="<<endl;
		cout<<"|| 1. Program Menghitung Pembayaran Belanja \t||"<<endl;
		cout<<"|| 2. Matriks Segitiga Jenis 1 \t\t\t||"<<endl;
		cout<<"|| 3. Matriks Segitiga Jenis 2 \t\t\t||"<<endl;
		cout<<"=================================================="<<endl;
		cout<<"\nPilih Menu : "; //input pilihan
		cin>>pilihan; //simpan value
		
		switch(pilihan){ //jika pilihan
			case 1:{ //pilihan 1
				pembayaran(); //panggil function persegi
				break; //berhenti
			}
			
			case 2:{
				segitigaSatu(); //panggil function lingkaran
				break; //berhenti
			}
			
			case 3:{
				segitigaDua(); //panggil function bola
				break; //berhenti
			}
		}
		
	}
	while(pilihan!=3); //berhenti jika pilihan diatas 3

	getch();
}
