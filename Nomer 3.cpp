#include <iostream>
using namespace std;

//Fungsi untuk list bilangan fibonacci
int* getFibonacci(int n) {
	int* fbc = new int[n];
	
	int temp;
	for(int i = 0; i < n; i++) {
		if(i == 0 || i == 1)
			temp = 1;
		else
			temp = fbc[i - 2] + fbc[i - 1];
		
		fbc[i] = temp;
	}
	
	return fbc;
}

//Fungsi untuk nilai rata rata dari array
float getAverage(int n) {
	int sum = 0;
	int* fbc = getFibonacci(n);
	
	for(int j = 0; j < n; j++) {
		sum += fbc[j];
	}
	
	delete[] fbc;
	
	return sum / n;
}

main() {
	int n;
	
	cout<<"Masukkan Jumlah: ";
	cin>>n;
	
	cout<<endl;
	
	int* fbc = getFibonacci(n);
	
	//For menampilkan daftar fibonacci
	for(int k = 0; k < n; k++) {
		cout<<fbc[k]<<endl;
	}
	
	//Memanggil fungsi untuk proses rata rata
	cout<<endl<<"Rata rata: "<<getAverage(n);
	
	delete[] fbc;
}
