#include <iostream>

using namespace std;

//Fungsi untuk mengecek bilangan prima
void generatePrime(int length);

int main()
{
  //Proses input panjang bilangan prima oleh user
  	int panjang = 0;
  	cout << "Masukkan Panjang Bilangan Prima = ";
  	cin >> panjang;

  generatePrime(panjang);
}

//Memanggil fungsi void diatas
void generatePrime(int length)
{
	//Proses menentukan bilangan itu prima
  int batas = 0, bil = 1, prima[length], jumBagi = 0;

  while (batas < length) {
    jumlahBagi = 0;

    for (int i = 1; i <= bil; i++) {
      if (bil % i == 0) {
        jumlahBagi++;
      }
    }

    if (jumlahBagi == 2) {
      prima[batas] = bil;
      batas++;
    }

    bil++;
  }

  cout << "Bilangan Prima = " << endl;
  for (int i = 0; i < length; i++) {
     cout << prima[i] << endl;
  }
}
