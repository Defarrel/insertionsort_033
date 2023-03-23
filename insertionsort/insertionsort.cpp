#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {

		cout << "Data ke-" << (i + 1) << ": ";
		cin >> a[i];
	}
}

void insetionsort() {
	int temp;									
	int j;										

	for (int i = 1; i < n; i++) {				

		temp = a[i];							

		j = i - 1;								

		while (j >= 0 && a[j] > temp)     
			
		{
			a[j + 1] = a[j];			
			j = j - 1;						 
		}
		a[j + 1] = temp;					

		cout << "\nStep " << i << ": ";		
		for (int k = 0; k < n; k++) {		
			cout << a[k] << " ";			
		}
	}
}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}
int main() {
	input();
	insetionsort();
	display();
	return 0;


}