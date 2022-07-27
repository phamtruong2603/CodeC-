/*
Nhap vao S mat cau --> tinh V hinh cau nay???
*/
#include<iostream>
#include<math.h>
#define pi 3.141593

using namespace std;

int main() {
	float r, s, v;
	float S = 4*pi*(r*r);
	float V = (4/3)*pi*(r*r*r); 
	cout << "Nhap dien tich mat cau: "; 
	cin >> s;
	r = sqrt(s/(4*pi));
	v = s*r/3;
	cout << "\nThe tich hinh cau la: " << v;
	
	return 0;
}
