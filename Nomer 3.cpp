#include<iostream>
#include<iomanip>

using namespace std;

main() {
	// v.Variable untuk menentukan angka
	int angka = 3;
	
	// v.Proses pertama untuk menampilkan 10 baris
	for(int i = 1; i <= 10; i++) 
	{
		// v.Proses kedua untuk menampilkan i kolom tiap 1 baris (jumlah kolom mengikuti nilai i)
		for(int j = 0; j < i; j++) 
		{	
			// v.Proses menampilkan hasil penjumlahan angka dan j untuk membentuk tabel
			cout<<setw(2)<<angka + j<<" ";
		}
		cout<<endl;	
		//Deklarasi menambah 2 nilai variabel angka
		angka += 2;
	}
}
