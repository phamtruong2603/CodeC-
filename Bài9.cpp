/*
Nhap x (la so do mot goc tinh bang phut).
--> x thuoc goc vuong thu bao nhieu cua vong tron luong giac.
	Tinh cos(x)
*/
#include<iostream>
#include<math.h>
#define pi 3.14

using namespace std;

int main() {
	float x;
	cout << "Nhap x la so do goc (phut): "; cin >> x;
	x = x/60;
	cout << "x = "<< x << " do\n";
	if(x <= 90) {
		cout << "x thuoc goc phan tu thu nhat";
	} else if(x <= 180) {
		cout << "x thuoc goc phan tu thu 2";
	} else if(x <= 270) {
		cout << "x thuoc goc phan tu thu 3";
	} else {
		cout << "x thuoc goc phan tu thu 4";
	}
	cout << "\ncos(x) = " << cos(x*(pi/180));
	return 0;
}
