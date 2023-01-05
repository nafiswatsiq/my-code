// program sorting binary
#include <iostream>
using namespace std;

int cari(int A[], int n, int nilai){ //progaram fungsi cari
    int i=0,j=n-1, hasil=-1, t; //deklarasi variabel

    while (hasil==-1 && i<=j){ //looping jika hasil = -1 dan i kurang dari j
        t = (i+j)/2; //nilai tengah
        if(A[t] == nilai){ //jika array ke t = nilai
            hasil = t; //hasil = niai tengah
        }else{ //jika tidak
            if(A[t] < nilai){ //jika array ke t kurang dari nilai
                i = t+1; //nilai i = nilai tengah ditambah 1
            }else if(A[t] > nilai){ //jika array ke t lebih dari nilai
                j=t-1; //nilai j = nilai tengah dikurangi 1
            }
        }
    }
    return hasil; //megembalikan nilai hasil
}

int langkah(int A[], int n, int nilai){ //program fungsi langkah
    int i=0,j=n-1, hasil=-1, t, langkah=0; //deklarasi variabel

    while (hasil==-1 && i<=j){ //looping jika hasil = -1 dan i kurang dari j
        t = (i+j)/2; //nilai tengah
        if(A[t] == nilai){ //jika array ke t = nilai
            hasil = t; //hasil = niai tengah
            langkah++; //increment langkah
        }else{ //jika array ke t kurang dari nilai
            if(A[t] < nilai){ //jika array ke t kurang dari nilai
                i = t+1; //nilai i = nilai tengah ditambah 1
                langkah++; //increment langkah
            }else if(A[t] > nilai){ //jika tidak
                j=t-1; //nilai j = nilai tengah dikurangi 1
                langkah++; //increment langkah
            }
        }
    }
    return langkah; //megembalikan nilai hasil
}

int A[10] = {0,3,7,9,10,13,18,19,23,26}; ///deklarasi array A
int nilai; //deklarasi variabel nilai
char jwb; //deklarasi variabel jawab
main(){
    do{
        cout<<endl<<"Masukan Data yg Dicari = "; cin>>nilai; //input nilai
        if(cari(A, 10, nilai) != -1){ //jika indeks tidak sama dengan -1
            cout<<endl<<"Data "<< nilai << " ditemukan pada indeks ke "<< cari(A, 10, nilai); //tampilkan nilai indeks
        }else{ //jika tidak
            cout<<endl<<"Data "<< nilai << " tidak dtemukan pada array"; //tampilkan data tidak ada di array
        }

        cout<<endl<<endl<<"Elemen-elemen array : "; 
        for(int i=0; i<10; i++){ //looping
            cout<<" "<< A[i]; //tampilkan data array
        }

        cout<<endl<<endl<<"Pencarian dilakukan sebanyak "<< langkah(A, 10, nilai) << " langkah"; //tampilkan langkah ke

        cout<<endl<<endl<<"apakah Ingin mengulangi program lagi y/n ? "; //input pertanyaan
        cin>>jwb; //simpan jawaban
    }while(jwb=='Y' || jwb=='y'); //jika jawaban Y maka akan mengulangi program 

    return 0;
}