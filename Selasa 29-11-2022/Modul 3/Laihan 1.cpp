//Program bilangan genap dan ganjil
#include <iostream> //header program yg digunakan agar bisa menggunakan perintah cin dan cout

using namespace std; //deklarasi std agar tidak menambahkan std:: di depan fungsi

int bil; //mendaftarkan variabel bil

main(){
	cout << "masukan Bilangan: "; //menampilkan input bilangan
	cin >> bil; //menyimpan input bilangan
	
	if(bil % 2 == 0){ //jika bilangan habis dibagi 2
		cout << "Bilangan " << bil << "merupakan bilangan Genap" << endl; //maka bilangan tersebut adalah genap
	} else{ //jika tidak
		cout << "Bilangan " << bil << "merupakan bilangan Ganjil" << endl; //maka bilangan tersebut adalah genap
	}
	
	system("pause"); //memberhentikan sementara program
	
	return 0; //menghentikan program
}
