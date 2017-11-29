#include <iostream>
using namespace std;


//Fungsi mencari nilai terbesar dari array
int greatest(int angka[]) {
	int terbesar;
	
	for(int i = 0; i < 10; i++) {
		if(i == 0 || angka[i] > terbesar)
			terbesar = angka[i];
	}
	
	return terbesar;
}

//Fungsi mencari nilai terkecil dari array
int smallest(int angka[]) {
	int terkecil;
	
	for(int i = 0; i < 10; i++) {
		if(i == 0 || angka[i] < terkecil)
			terkecil = angka[i];
	}
	
	return terkecil;
}

main() {
	int angka[10];
	
	//Proses inisialisasi angka dalam array oleh user
	for(int i = 0; i < 10; i++) {
		cout<<"Masukkan angka ke- "<<i + 1<<": ";
		cin>>angka[i];
	}
	
	//Proses menampilkan nilai terbesar
	cout<<"Angka Terbesar: "<<greatest(angka)<<endl;
	
	//Proses menampilkan nilai terkecil
	cout<<"Angka Terkecil: "<<smallest(angka)<<endl;
}
