/*
Nhap a, b, c cua phuong trinh ax^2 + bx + c = 0.
--> Tim x???
*/

#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float a, b, c;
	float denta, x1, x2;
	cout << "Giai phuong trinh bac 2 co dang ax^2 + bx + c = 0 (a != 0). Voi:\n";
	cout << "Nhap a = "; cin >> a;
	cout << "Nhap b = "; cin >> b;
	cout << "Nhap c = "; cin >> c;
	if (a == 0) {
		cout << "Voi a = 0. Phuong trinh chuyen thanh dang ax + b = 0. Voi:";
		cout << "\na = " << b;
		cout << "\nb = " << c;
		cout << "\nVay phuong trinh co nghiem duy nhat x = " << -b/c;
	} else {
		denta = b*b - 4*a*c;
		if(denta < 0) {
			cout << "Phuong trinh da cho vo nghiem";
		} else if(denta > 0){
			x1 = (-b+sqrt(denta)) / (2*a);
			x2 = (-b-sqrt(denta)) / (2*a);
			cout << "Phuong trinh da cho co 2 nghiem:";
			cout << "\nx1 = " << x1;
			cout << "\nx2 = " << x2;
		} else {
			cout << "Phuong trinh da cho co nghiem kep x1 = x2 = " << -b/(2*a);
		}
	}
	return 0;
}
