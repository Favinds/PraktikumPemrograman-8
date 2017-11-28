#include<iostream>
#include<iomanip> //<--- Library tambahan untuk menggunakan fungsi setw()
using namespace std;

main() 
{
	// v.Proses untuk menampilkan 10 baris
	
	for(int i = 1; i <= 10; i++)
	{
		
		// v.Proses untuk menampilkan i kolom tiap 1 baris 
		
		for(int j = 1; j <= i; j++) 
		{
			
			// v.Proses menampilkan hasil perkalian i dan j untuk membentuk tabel perkalian
			cout<<setw(3)<<i * j<<" ";
		}
		
		//Membuat baris baru 
		cout<<endl;
	}
}
