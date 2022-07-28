/*
Nhap 3 so a, b, c.
--> Sap xep a, b, c tang dan
*/
#include<iostream>

using namespace std;

int main() {
	int a, b, c;
	cout << "Nhap a, b, c: "; cin >> a >> b >> c;
	int check;
	if(a > b) {
		check = a;
		a = b;
		b = check;
	}
	if(b < c) {
		cout << "Day so duoc sap xep lai: " << a << " " << b << " " << c;
	} else {
		check = b;
		b = c;
		c = check;
		if (b > a) {
			cout << "Day so duoc sap xep lai: " << a << " " << b << " " << c;
		} else {
			check = a;
			a = b;
			b = check;
			cout << "Day so duoc sap xep lai: " << a << " " << b << " " << c;
		}
	}
	return 0;
}
