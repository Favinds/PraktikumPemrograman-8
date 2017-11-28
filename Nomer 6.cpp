#include <iostream>

using namespace std;

main()
{
	int n; // <- variable menyimpan nilai dari user
	bool flip = false; // <- variable membuat nilai terbalik

	// v.Inputan user
	cout<<"masukkan nilai n : ";
	cin >> n;
	
	// v.Deklarasi angka awal bernilai var n
	int angka = n;
	
	
	// v.Proses membuat baris dengan rumus 2n-1
	for (int i = 0; i < (2*n-1); i++) 
	{
		// v.Proses membuat kolom dengan rumus 2n-1
		for (int j = 1; j <= (2*n-1); j++)
		{
			cout << angka;
		}
	cout << endl;
	
	// v.Mengecek nilai, untuk naik jika angka = 1
	if(angka == 1)
		flip = !flip;
	// v.Jika tidak flip (false)
	if(!flip)
		angka--; //<- Maka nilai menurun
		
	// v.Jika tidak	
	else 
		angka++; //<- Maka nilai menaik 

	}
}


