//program 1 Array 1 Dimensi
#include<iostream>
using namespace std;

int main(){
	float nilai[5]; //deklarasi array nilai
	cout<<"Masukkan 5 Buah Data Nilai" <<endl;
	for(int i=0; i<5; i++){ //perulangan untuk input nilai
		cout<<(i+1) <<" : "; //input nilai
		cin>>nilai[i]; //simpan input nilai
	}
	
	cout<<"\nData Nilai yang dimasukkan : " <<endl;
	for(int i=0; i<5; i++) //perulangan untuk menampilkan nilai
		cout<<nilai[i] <<endl; //tampilkan nilai
}
