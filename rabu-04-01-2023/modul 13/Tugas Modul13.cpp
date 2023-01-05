//program Array Data Mahasiswa
#include<iostream>
#include<conio.h>
using namespace std;

int nim[]={170102001, 170102002, 170102003, 170102004, 170102005}; //deklarasi array nim
string nama[]={"JULY", "AMALIA", "FUJI", "HANIF", "RAFLI"}; //deklaasi array nama
string nBuku[5]; //deklarasi array nama buku

int main(){

	for(int i=0; i<5; i++){ //perulangan 
		cout<<"Nama \t\t\t = " <<nama[i] <<endl; //tampilkan nama
		cout<<"NIM \t\t\t = " <<nim[i] << endl; //tampilkan NIM
		cout<<"Masukkan Nama Buku \t = "; //input nama buku
		cin>>nBuku[i]; //simpan nama buku
		cout<<"---------------------------------------" <<endl;
	}

	cout << endl;
	cout<<"======================================================" <<endl;
	cout<<"\t\t\tDATA MAHASISWA " <<endl;
	cout<<"======================================================" <<endl;
	cout<<"NO   \tNAMA  \t\tNIM  \t\tNAMA BUKU" <<endl;
	cout<<"======================================================" <<endl;
	
	for(int i=0; i<5; i++){ //perulangan
		cout<<i+1 <<"\t" <<nama[i] <<"\t\t" <<nim[i] <<"\t" <<nBuku[i] <<" " <<endl; //tampilkan data
		cout<<"------------------------------------------------------" <<endl; 
	}
	return 0;
}

