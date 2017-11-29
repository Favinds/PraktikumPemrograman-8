#include <iostream>
using namespace std;


//Fungsi mencari total bilangan genap, untuk menentukan panjang array
int getEvenCount(int* angka, int n) {
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(angka[i] % 2 == 0) {
			count++;
		}
	}
	return count;
}

//Fungsi untuk filter angka genap serta membuat array baru
int* evenNumberFilter(int* angka, int n) 

{
	//Memanggil fungsi untuk mendapatkan panjang array 
	int count = getEvenCount(angka, n);
	
	//Proses pembuatan array genap
	int* even = new int[count];
	int i = 0;
	for(int j = 0; j < n; j++) {
		if(angka[j] % 2 == 0) {
			even[i] = angka[j];
			i++;
		}
	}
	
	//Mengembalikan array yg hanya genap
	return even;
}


main() {
	int n;
	
	cout<<"Masukkan jumlah : ";
	cin>>n;
	
	int angka[n];
	
	//Proses inisialisasi angka dari user
	for(int i = 0; i < n; i++) {
		cout<<"Masukkan angka ke-"<<i + 1<<": ";
		cin>>angka[i];
	}
	
	cout<<endl;
	
	//Memanggil fungsi untuk mendapatkan panjang array genap
	int count = getEvenCount(angka, n);
	
	//Memanggil fungsi untuk mendapatkan array angka genap
	int* genap = evenNumberFilter(angka, n);
	
	//looping untuk menampilkan array genap
	for(int i = 0; i < count; i++) {
		cout<<"Angka yang genap :"<<genap[i]<<endl;
	}
	
	//Jika nilai count < 1
	if(count < 1)
		cout<<"Even number not found in array";
	
	//Menghapus alokasi memori
	delete[] genap;
}
