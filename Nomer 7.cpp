#include <iostream>

using namespace std;

main() 
{

	// v. Variabel menyimpan nilai dari user
	int n;
	
	// v. Variabel untuk merubah nilai yang awalnya menurun ke naik
	bool flip = false;
	
	// v. Inputan user
	cout<<"masukkan nilai n : ";
	cin>>n;
	
	// v. Deklarasi angka awal bernilai var n
	int angka = n;
	
	// v. Variabel pembantu
	int k;
	
	// v. Proses pertama untuk membuat baris 
	for(int i = 0; i < (2*n-1); i++) {
		//Flip
		if((2*n-1-i) == n - 1) {
			flip = !flip;
			k = n - 2;
		}
		
		// v. Proses kedua untuk membuat kolom
		for(int j = 0; j < (2*n-1); j++) {
			// v. Proses naik dan turun
			if(!flip) {
				if(n - i <= n - j && j > 0) {
					angka--;
				}
				else if(j >= (2*n-1) - i) {
					angka++;
				}
			}
			else {
				if(n - k <= n - j && j > 0) {
					angka--;
				}
				else if(j >= (2*n-1) - k) {
					angka++;
				}
			}
			cout<<angka;
		}
		
		// v. Membuat baris baru 
		cout<<endl;
		
		//Mereset nilai angka ke nilai n
		angka = n;
		
		//Menurunkan variabel k
		k--;
	}
}
