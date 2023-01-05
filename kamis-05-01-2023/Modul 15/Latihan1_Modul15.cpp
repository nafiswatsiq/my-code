//program Linier Search
#include<iostream>
using namespace std;

int cari(int A[], int n, int x){ //program fungsi cari
    int i=0, hasil=-1; //deklarasi variabel
    while(i<n){ //perulangan
        if(A[i] == x){ //jika array A ke i == nilai
            hasil=i; //simpan hasil = i
        }
        i++; //increment
    }
    return hasil; //mengembalikan nilai hasil
}

int langkah(int A[], int n, int x){//program fungsi langkah
    int i=0, langkah=0; //deklarasi variabel
    while(i<n){ //perulangan
        if(A[i] == x){ //jika array A ke i == nilai
            langkah++; break; //increment langkah
        }
        langkah++; //incerment langkah
        i++; //increment
    }
    return langkah; //mengembalikan nilai langkah
}

int A[10]={5, 9, 1, 7, 23, 4, 8, 0, 16, 2}; //deklarasi array A
int nilai; //deklarasi variabel nilai
char jawab; //deklarasi variabel jawab

main(){
    do{
        system("cls");
        cout<<"Masukkan Data yang Dicari : "; cin>>nilai; //input nilai

        if(cari(A, 10, nilai)!= -1) //jika indeks tidak sama dengan -1
            cout<<endl <<"Data " <<nilai  <<" ditemukan pada Indeks ke " <<cari(A, 10, nilai); //tampilkan nilai indeks
        else //jika tidak
            cout<<endl <<"Data " <<nilai <<" tidak ditemukkan pada Array "; //tampilkan data tidak ada di array

        cout<<endl <<endl <<"Elemen-Elemen Array : "; 
        for(int i=0; i<10; i++) //looping
            cout<<" " <<A[i]; //tampilkan data array

        cout<<endl <<endl <<"Pencarian dilakukan sebanyak " <<langkah(A, 10, nilai) <<" langkah"; //tampilkan langkah ke
        
        cout<<endl <<endl <<"Apakah ingin isi Data lagi Y/N ? "; cin>>jawab; //input pertanyaan mengulangi program
    }
    while(jawab == 'Y' || jawab == 'y'); //jika jawaban Y maka akan mengulangi program 

    return 0;
}
