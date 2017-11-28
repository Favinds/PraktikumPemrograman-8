#include <iostream>
#include<iomanip> //<--- Library tambahan untuk menggunakan fungsi setw()
using namespace std;

main() {

	// v.Proses pertama untuk menampilkan 10 baris
	for(int i = 1; i <= 10; i++) {

	// v.Proses kedua untuk menampilkan 10 kolom tiap 1 baris
		for(int j = 1; j <= 10; j++) {
			
			
			// v.Proses hasil perkalian i dan j untuk membentuk tabel perkalian
			/*
				Keterangan fungsi setw() :
				setw() adalah satu fungsi manipulator yang digunakan untuk mengatur lebar tampilan dilayar dari suatu nilai.
				
				setw(4) berarti lebar tiap cout adalah 4 karakter,
				sehingga output akan tersusun rapi
			*/
			cout<<setw(4)<<i * j;
		}
		
		//Membuat baris baru 
		cout<<endl;
	}
}
