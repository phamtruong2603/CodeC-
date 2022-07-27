/*
Nhap toa do 2 diem A B,
-->tinh khoang cach AB
*/
#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float xA, xB, yA, yB;
	cout << "Nhap toa do diem A:\n";
	cout << "xA = "; cin >> xA;
	cout << "yA = "; cin >> yA;
	
	cout << "Nhap toa do diem B:\n";
	cout << "xB = "; cin >> xB;
	cout << "yB = "; cin >> yB;
	
	float AB = sqrt((xB-xA)*(xB-xA) + (yB-yA)*(yB-yA));
	
	cout << "Khoang cach 2 diem A va B la: |AB| = " << AB;
	
	return 0;
}
