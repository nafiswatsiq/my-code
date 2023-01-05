#include <iostream>
using namespace std;

int hrg, dp, tAngs, angsKe; //deklarasi variabel  berupa integer

void input(){ //program fntion input
    cout << "Harga Rumah \t\t= Rp "; cin >> hrg; //input harag rumah
    cout << "Uang Muka/DP \t\t= Rp "; cin >> dp; //input harga dp
    cout << "Tahun Angsuran \t\t= "; cin >> tAngs; //input tahun angsuran
    cout << "============================"<< endl;
}

int bunga(int hrg){ //program function bunga
    return 0.11 * hrg; //hitung bunga
}

int angsuran(int hrg, int dp, int tAngs){ //progran funtion angsuran
    return (hrg - dp)/(tAngs*12); //hitung angsuran
}

int totAngsuran(int hrg, int dp, int tAngs){ //program function total angsuran
    return angsuran(hrg, dp, tAngs) + bunga(hrg); //hitung total angsuran
}

int sisa(int tAngs,int angsKe){ //progam funtion sisa
    return tAngs*12 - angsKe; //hitung sisa
}
main(){ //program utama
    input(); //panggil funtion input

    cout << "\nAngsuran ke \t\t= "; cin >> angsKe; //input angsuran
    cout << endl; //new line
    cout <<"\nBunga \t\t\t= Rp " << bunga(hrg); //tampilkan bunga
    cout <<"\nAngsuran \t\t= Rp " << angsuran(hrg, dp, tAngs); //tampilkan angsuran
    cout <<"\nTotal Angsuran/bulan \t= Rp " << totAngsuran(hrg, dp, tAngs); //tampilkan total angsuran
    cout <<"\nSisa Waktu Angsuran \t= " << sisa(tAngs, angsKe) << " Bulan"; //tampilkan sisa waktu angsuran

    return 0;
}