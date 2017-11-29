#include <iostream>
using namespace std;


//Fungsi untuk mengecek bilangan itu perfect 
bool perfectCheck(int n) {
	int total = 0;
	
	for(int i = 1; i < n; i++)
		if(n % i == 0)
			total += i;
		
	return total == n;
}

main() {
	int n;
	
	cout<<"Masukkan angka: ";
	cin>>n;
	
	//Memanggil fungsi untuk mendapatkan status bool angka tersebut
	bool status = perfectCheck(n);
	
	if(status)
		cout<<"Given number is a perfect number";
	else
		cout<<"Given number is not a perfect number";
}
