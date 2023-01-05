//program 1 Bubble Sort
#include<iostream>
#include<conio.h>
using namespace std;

int D[8]={66, 16, 23, 8, 46, 27, 6, 21}; //deklarasi array D

void bublesort(int D[], int n); //deklarasi fungsi bubble sort
main(){
    cout<<"Isi Array : " <<endl;
    for(int i=0; i<8; i++) //looping
        cout<<" " <<D[i]; //tampilkan array D
    
    cout<<endl <<endl <<"Bublesort : ";
    bublesort(D, 8); //panggil prgram fungsi bubble sort
    for(int i=0; i<8; i++) //looping
        cout<<" " <<D[i];  //tampilkan array D
        
    getche(); 
}

void bublesort(int D[], int n) { //program fungsi bubblesort
    int i, k, temp; //deklarasi variabel
    for(i=0; i<n-1; i++){ //looping tingkat 1
        for (k=n; k>=i; k++){ //looping tingkat 2
            if(D[k] < D[k-1]){ //jika array D ke j lebih dari array D ke iMaks
                temp=D[k]; //simpan nilai temp = array D ke k
                D[k]=D[k-1]; //simpan nilai array D ke k = array D ke k-1
                D[k-1]=temp; //simpan nilai array D ke k-1 = temp
            }    
        }
    }
}
