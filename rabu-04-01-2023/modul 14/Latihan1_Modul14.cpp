//program 1 Array 2 Dimensi
#include<iostream>
using namespace std;

int main(){
	float nilai[5][2]; //deklarasi array nilai
	float total, rata;//deklarasi variabel
	
	cout<<"Masukkan Data Nilai" <<endl;
	for(int i=0; i<5; i++){ //perulagan tingkat 1
		for(int j=0; j<2; j++){ //perulangan tingakt 2
			cout<<(i+1) <<" dan " <<(j+1) <<" : "; //input nilai 
			cin>>nilai[i][j]; //simpan data nilai
		}
	}
	
	cout<<"\nData Nilai yang Dimasukkan" <<endl;
	for (int i=0; i<5; i++) //perulangan tingakt 1
		for(int j=0; j<2; j++) //perulangan tingkat 2
			cout<<nilai[i][j] <<endl; //tampilkan nilai
			
	total=0;
	for(int i=0; i<5; i++) //perulagan tingakt 1
		for(int j=0; j<2; j++) //perulangan tingkat 2
			 total=total + nilai[i][j]; //tambahkan nilai
	
	rata=total/10; //jumlah nilai dibasi 10
	cout<<"\nTotal Data = " <<total <<endl; //tampilkan jumlah nilai
	cout<<"Rata-Rata  = " <<rata <<endl; //tampilkan rata rata
	
}
