#include <iostream>
#include <conio.h>
using namespace std;

int D[8]={66, 16, 23, 8, 46, 27, 6, 21}; //deklarasi nilai D
void seleksiMaks(int D[], int n); //deklarasi fungsi seleksi maksimum

main(){
    cout<<"Elemen larik : "<<endl; 
    for(int i=0; i<8; i++) //looping
        cout<<" "<<D[i]; //tampilkan array D
    
    cout<<endl<<endl<<"Seleksi Maksimum : ";
    seleksiMaks(D, 8); //panggil fungsi seleksi maksimum
    for(int i=0; i<8; i++) //looping
        cout<<" "<<D[i]; //tampilkan array D
    
    getch(); //menghentikan program
}

void seleksiMaks(int D[], int n){ //program fungsi seleksi maksimum
    int temp, i, j; //deklarasi variabel
        for(i=n-1; i>=0; i--){ //perulangan tingkat 1
            int iMaks=0; //deklarasi variabel
            for(j=1; j<=i; j++){ //perulangan tingkat 2
                if(D[j] < D[iMaks]) //jika array D ke j kurang dari array D ke iMaks
                    iMaks = j; //nilai iMaks = j
            }
            temp = D[iMaks]; //simpan nilai temp = array D ke iMaks
            D[iMaks] = D[i]; //simpan nilai array D ke iMaks = array D ke i
            D[i] = temp; //simpan nilai array D ke i = temp
        }
}