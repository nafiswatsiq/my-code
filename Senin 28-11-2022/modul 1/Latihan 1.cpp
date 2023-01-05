//program mengenaL Tipe Data Dasar
#include<iostream> //header program yg digunakan agar bisa menggunakan perintah cin dan cout
using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi
main()
{
	float hasil, a, b; //dihunakan untuk mendeklarasikan hasil, a, b
	
	cout<<"penambahan"; //menampilkan penambahan
	cout<<"\na = "; //menampilkan input a
	cin>>a; //menyimpan nilai input a
	
	cout<<"\nb = "; //menampilkan input b
	cin>>b; //menyimpan nilai input b
	
	hasil=a+b; //menghitung hasil penambahan
	cout<<"\nhasil = " <<hasil; //menampilkan hasil penambahan
	
	cout<<"\n\npengurangan"; //menampilkan pengurangan 
	cout<<"\na = "; //menampilkan input a
	cin>>a; // menyimpan nilai input a
	
	cout<<"\nb = "; //menampilkan input b
	cin>>b; //menyimpan nilai input b
	
	hasil=a-b; //menghitung hasil pengurangan
	cout<<"\nhasil = " <<hasil; //menampilkan hasil pengurangan
	
	cout<<"\n\nperkalian"; //menampilkan perkalian
	cout<<"\na = "; //menampilkan input a
	cin>>a; // menyimpan nilai input a
	
	cout<<"\nb = "; //menampilkan input b
	cin>>b; // menyimpan nilai input b
	
	hasil=a*b; //menghitung hasil perkalian
	cout<<"\nhasil = " <<hasil; //menampilkan hasil perkalian
	
	cout<<"\n\npembagian"; //menampilkan pembagian
	cout<<"\na = "; //menampilkan input a
	cin>>a; //menyimpan nilai input a
	
	cout<<"\nb = "; //menampilkan input b
	cin>>b; //menyimpan nilai input b
	
	hasil=a/b; //menghitung hasil pembagian
	cout<<"\nhasil = " <<hasil; //menampilkan hasil pembagian
}
