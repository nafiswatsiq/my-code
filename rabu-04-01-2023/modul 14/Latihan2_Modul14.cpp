//program 2 Array 3 Dimensi
#include<iostream>
#include<conio.h>
//#include<stdio.h>
using namespace std;

int main(){
	int i, j, k; //deklarasi variabel
	int nilai[2][3][3]=
	{
		{{1,2,3}, {4,5,6}, {7,8,9}},
		{{10,11,12}, {13,14,15}, {16,17,18}},
	}; //deklarasi array nilai 
	
	cout<<"--Data Array--" <<endl;
	for(i=0; i<2; i++){ //perulangan tingakt 1
		for(j=0; j<3; j++){ //perulangan tingkat 2
			for(k=0; k<3; k++){ //perulangan tingkat 3
				cout<<nilai[i][j][k] <<" "; //tampilkan nilai
			}
			cout<<endl;
		}
	}
	
}
