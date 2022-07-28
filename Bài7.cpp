/*
Nhap a, b cua phuong trinh ax + b = 0.
--> Tim x???
*/
#include<iostream>

using namespace std;

int main() {
	float a, b;
	cout << "Giai phuong trinh ax + b = 0. Voi:\n";
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "Phuong trinh co nghiem x = " << -b/a;
	return 0;
}
