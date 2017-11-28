#include <iostream>

using namespace std;

main()
{
	// v.Proses untuk menampilkan 5 baris dari 2 - 6
	for (int i = 2; i <= 6; i++)
	{ 	
		// V.Proses untuk menampilkan 5 kolom tiap 1 baris
		for (int j = 0; j < 5; j++)
		{
			// v.Proses untuk menampilkan nilai 
			cout << i + j << " ";
		}
		cout << endl;
	}
	
}
