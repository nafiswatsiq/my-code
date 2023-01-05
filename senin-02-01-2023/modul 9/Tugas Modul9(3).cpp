//program Tugas 2
#include<iostream>
#include<conio.h>
using namespace std;

int main(){

	int a, b, c, num; //deklarasi variabel integer
	
	cout<<"Matriks Persegi dengan lebar "; //input matriks
	cin>>num; //simpan value
	cout<<"-------------------------------"<<endl;
	
	for(a=1; a<=num; a++){ //perulangan tingakat 1
		for(b=1; b<=num; b++){ //perulangan tingakt 2
			cout<<"* "; //menampilkan bintang	 
		}	
		cout<<endl; //new line	
	}
	
	cout<<"\nMatriks Persegi dengan lebar "; //input matriks
	cin>>num; //simpan value
	cout<<"------------------------------"<<endl;
	
	for(a=1; a<=num; a++){ //perulangan tingakat 1
		for(b=1; b<=num; b++){ //perulangan tingakt 2
			cout<<"* "; //menampilkan bintang	
		}	
		cout<<endl;	//new line
	}
	
	cout<<"\nMatriks Segitiga Jenis 1 dengan lebar "; //input matriks
	cin>>num; //simpan value
	cout<<"---------------------------------------"<<endl;
	
 	for(a=1; a<=num; a++){ //perulangan tingkat 1
  	for(b=a; b>=1; b--){ //perulangan tingkat 2
  		cout<<" "; //tampilkan spasi
 	  }
 	  for(c=a; c<=num; c++){ //perulangan tingakat 2
 	  	cout<< c <<" "; //menampilkan nilai c
		}
		cout<<endl; //new line
  }
	
	cout<<"\nMatriks Segitiga Jenis 2 dengan lebar "; //input matriks
	cin>>num; //simpan value
	cout<<"---------------------------------------"<<endl;
	
	for(a=1; a<=num; a++){ //perulangan tingkat 1
		for (b=1; b<=a; b++){ //perulangan tingkat 2
      cout<<"2 "; //menampilkan 2
   	}
   	cout<<endl; //new line
	}
	
	getch(); //menghentikan program
}
