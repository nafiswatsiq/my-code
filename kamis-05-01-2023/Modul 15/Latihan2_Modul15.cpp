//program Binary Search 
#include<iostream>
using namespace std;

int cari(int A[], int n, int x){ //program fungsi cari
    int i=0, j=n-1, t, hasil=-1; //deklarasi variabel
    while (hasil == -1 && i <= j){ //perulangan
        t=(i+j)/2; //nilai tengah
        if (A[t] == x){ //jika array ke t = nilai
            hasil=t; //hasil = niai tengah            
        }else{ //jika tidak
            if(A[t] > x){ //jika array ke t lebih dari nilai
                i=t+1; //nilai i = nilai tengah ditambah 1
            }else if(A[t] < x){ //jika array ke t kurang dari nilai
                j=t-1; //nilai j = nilai tengah dikurangi 1
            }
        }        
    }
    return hasil; //megembalikan nilai hasil
}

int langkah (int A[],int n,int x){ //program fungsi langkah
    int i=0, j=n-1, t, hasil=-1, jum=0; //deklarasi variabel
    while(hasil == -1 && i <= j){ //looping jika hasil = -1 dan i kurang dari j
        t=(i+j)/2; //nilai tengah
        if (A[t] == x){ //jika array ke t = nilai
            hasil=t; //hasil = niai tengah
            jum++; //increment langkah         
        }else{ //jika tidak
            if(A[t] > x){ //jika array ke t lebih dari nilai
                i=t+1; //nilai i = nilai tengah ditambah 1
                jum++; //increment jumlah
            }else if(A[t] < x){ //jika tidak
                j=t-1; //nilai j = nilai tengah dikurangi 1
                jum++; //increment jumlah
            }
        }        
    }
    return jum; //megembalikan nilai hasil
}

int A[10]={91, 81, 76, 21, 18, 16, 13, 10, 7, 5}; //deklarasi array A
int nilai; //deklarasi variabel nilai
char jawab; //deklarasi variabel jawab

main (){
    do{    
        system ("cls");
        cout<<"Masukkan data yang dicari : "; cin>>nilai; //input nilai

        if(cari (A, 10, nilai)!= -1)  //jika indeks tidak sama dengan -1
            cout<<endl <<"Data " <<nilai <<" ditemukan pada Indeks ke " <<cari(A, 10, nilai); //tampilkan nilai indeks
        else //jika tidak
            cout<<endl <<"Data " <<nilai <<" tidak ditemukan pada Array"; //tampilkan data tidak ada di array    
        
        cout<<endl <<endl <<"Pencarian dilakukan sebanyak " <<langkah(A, 10, nilai) <<" langkah"; //tampilkan langkah ke
        
        cout<<endl <<endl <<"Elemen-Elemen Array : ";
        for(int i=0; i<10; i++)
            cout<<" " <<A[i]; //tampilkan data array
        
        cout<<endl <<endl <<"Apakah ingin isi Data lagi Y/N ? "; cin>>jawab; //input jawaban
    }
    while (jawab == 'Y' || jawab == 'y');//jika jawaban Y maka akan mengulangi program 

}

