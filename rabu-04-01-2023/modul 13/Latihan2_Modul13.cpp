//program 2 Array 1 Dimensi dengan Fungsi
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int x[]={4,9,11,1,3}; //deklarasi nilai x
float Rata(int x[]); //deklarasi function rata rata

main(){
	cout<<"Nilai Matrik \t: 11,4,9,3,1 ";
	cout<<endl <<"================================" <<endl;
	cout<<"Nilai Rata-Rata : " <<Rata(x);//panggil function rata rata
	getche();
}

float Rata(int x[]){ //program function rata rata
	float temp=0; //deklarasi variabel 
	for(int i=0; i<5; i++){ //perulagan
		temp=temp + x[i]; //tambahkan nilai x
	}
	return temp/5; //hitung dan kembalikan jumlah nilai x dibagi 5 
}
