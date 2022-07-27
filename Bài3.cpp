/*
Nhap toa do tam C cua duong tron,
nhap ban kinh R,
nhap toa do diem M.
--> diem M nam o dau
*/
#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float xC, xM, yC, yM , r;
	cout << "Nhap toa do tam C cua duong tron:\n";
	cout << "xC = "; cin >> xC;
	cout << "yC = "; cin >> yC;
	
	cout << "Nhap ban kinh R cua duong tron tam C:\n";
	cout << "R = "; cin >> r;
	
	cout << "Nhap toa do diem M bat ki:\n";
	cout << "xM = "; cin >> xM;
	cout << "yM = "; cin >> yM;
	
	float AB = sqrt((xM-xC)*(xM-xC) + (yM-yC)*(yM-yC));
	
	if(AB > r) {
		cout << "M(" << xC << "," << yC << ") nam ngoai duong tron tam C(" << xC << "," << yC << ") ban kinh R = " << r;
	} else if(AB < r) {
		cout << "Diem M(" << xC << ";" << yC << ") nam trong duong tron tam C(" << xC << ";" << yC << ") ban kinh R = " << r;
	} else {
		cout << "M(" << xC << "," << yC << ") nam tren duong tron tam C(" << xC << "," << yC << ") ban kinh R = " << r;
	}
	
	return 0;
}
