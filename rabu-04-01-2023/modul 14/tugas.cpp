#include <iostream>
#include <conio.h>
using namespace std;

int dataA[2][2][2]; //deklarasi array data A
int dataB[2][2][2]; //deklarasi array data B
float avr;

int inputA(){ //program input A
    cout << "======= Input data A ========" << endl;
    for (int i=0; i<2; i++){   //perulangan tingakat 1
        for (int j = 0; j < 2; j++){ //perulangan tingakat 2
            for (int k = 0; k < 2; k++){ //perulangan tingakat 3
                /* code */
                cout << "input data A baris " << i+1 << " kolom ke "<< k+1 <<"\t = "; cin >> dataA[i][j][k]; //input data A
            }
        }
    }
}

int inputB(){
    cout << "======= Input data B ========" << endl;
    for (int i=0; i<2; i++){   //perulangan tingakat 1
        for (int j = 0; j < 2; j++){ //perulangan tingakat 2
            for (int k = 0; k < 2; k++){ //perulangan tingakat 3
                /* code */
                cout << "input data A baris " << i+1 << " kolom ke "<< k+1 <<"\t = "; cin >> dataB[i][j][k]; //input data A
            }
        }
    }
}

int renderA(){ 
    cout << "======= Tampilkan data A =======" << endl;
    for (int i = 0; i < 2; i++){ //perulangan tingakat 1
        for (int j = 0; j < 2; j++){ //perulangan tingakat 2
             for (int k = 0; k < 2; k++){ //perulangan tingakat 3
                cout << dataA[i][j][k] << "\t"; //tampilkan data A
            }
            cout << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
int renderB(){
    cout << "======== Tampilkan data B ========" << endl;
    for (int i = 0; i < 2; i++){ //perulangan tingakat 1
        for (int j = 0; j < 2; j++){ //perulangan tingakat 2
            for (int k = 0; k < 2; k++){ //perulangan tingakat 3
                cout << dataB[i][j][k] << "\t"; //tampilkan data B
            }
            cout << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int sum(){
    cout << "======== Hasil Penjumlahan ========" << endl;
    for (int i = 0; i < 2; i++){ //perulangan tingakat 1
        for (int j = 0; j < 2; j++){ //perulangan tingakat 2
            for (int k = 0; k < 2; k++){ //perulangan tingakat 3
                cout << dataA[i][j][k] + dataB[i][j][k] << "\t"; //hitung penjumlahan
            }
            cout << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int substraction(){
    cout << "======== Hasil Pengurangan ========" << endl;
    for (int i = 0; i < 2; i++){ //perulangan tingakat 1
        for (int j = 0; j < 2; j++){ //perulangan tingakat 2
            for (int k = 0; k < 2; k++){ //perulangan tingakat 3
                cout << dataA[i][j][k] - dataB[i][j][k] << "\t"; //hitung pengurangan
            }
            cout << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int perkalian(){
    cout << "======== Hasil Perkalian ========" << endl;
    for (int i = 0; i < 2; i++){ //perulangan tingakat 1
        for (int j = 0; j < 2; j++){ //perulangan tingakat 2
            for (int k = 0; k < 2; k++){ //perulangan tingakat 3
                cout << dataA[i][j][k] * dataB[i][j][k] << "\t"; //hitung perkalian
            }
            cout << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int average(){
    for (int i = 0; i < 2; i++){ //perulangan tingakat 1
        for (int j = 0; j < 2; j++){ //perulangan tingakat 2
            for (int k = 0; k < 2; k++){ //perulangan tingakat 3
                avr += dataA[i][j][k] + dataB[i][j][k]; //jumlah semua data array
            }
        }
    }
    cout << "Hasil Rata Rata = " << avr/16; //hitung dan tampilkan rata-rata
}

main(){ //program utama
    inputA(); //panggil function input A
    cout<<endl;
    inputB(); //panggil function input B
    cout<<endl;
    cout<<endl;
    renderA(); //panggil function render A
    cout<<endl;
    renderB(); //panggil function render B
    cout<<endl;
    sum(); //panggil function penjumlahan
    cout<<endl;
    substraction(); //panggil function pengurangan
    cout<<endl;
    perkalian(); //panggil function perkalian
    cout<<endl;
    average(); //panggil function rata rata
    cout<<endl;

    return 0;
}
