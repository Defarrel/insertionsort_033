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
void insertionsort()
{
	int temp;
	int j;

	for (int)
}
		int main() {
		input();
		bubbleShortArray();
		display();
		return 0;
}