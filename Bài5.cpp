/*
Kiem tra diem M có thuoc tam giac ABC???
*/
#include<iostream>
#include<math.h>

using namespace std;

float S(float xA, float yA, float xB, float yB, float xC, float yC) {
	return (1/2) * abs((xA*yB - xB*yA) + (xB*yC - xC*yB) + (xC*yA - xA*yC));
}

int main() {
	float xA, xB, yA, yB, xC, yC;
	cout << "Nhap toa do 3 dinh cua tam giac.\n";
	
	cout << "Nhap toa do diem A(xA;yA):\n";
	cout << "xA = "; cin >> xA;
	cout << "yA = "; cin >> yA;
	
	cout << "Nhap toa do diem B(xB;yB):\n";
	cout << "xB = "; cin >> xB;
	cout << "yB = "; cin >> yB;
	
	cout << "Nhap toa do diem C(xC;yC):\n";
	cout << "xC = "; cin >> xC;
	cout << "yC = "; cin >> yC;
	
	float xM, yM;
	cout << "Nhap toa do diem bat ki M(xM;yM):\n";
	cout << "xM = "; cin >> xM;
	cout << "yM = "; cin >> yM;
	
	float sAMB, sAMC, sBMC, sABC;
	
	sAMB = S(xM, yM, xA, yA, xB, yB);
    sAMC = S(xM, yM, xA, yA, xC, yC);
    sBMC = S(xM, yM, xB, yB, xC, yC);
    sABC = S(xA, yA, xB, yB, xC, yC);
    
    float s = sAMB + sAMC + sBMC - sABC;
    
    if(s > 0) {
    	cout << "M nam ngoai tam giac ABC";
    } else if(sAMB == 0 || sAMC == 0 || sBMC == 0) {
    	cout << "M nam tren canh giac ABC";
	} else {
		cout << "M nam trong tam giac ABC";
	}
	
	return 0;
}
