/*
Nhap 3 canh cua tam giac.
--> Kiem tra co hop le khong,
	Cho biet la tam giac gi,
	Tinh dien tich tam giac???
*/
#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float a, b, c;
	cout << "Nhap 3 canh cua tam giac:\n";
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	
	if(a+b <= c || b+c <= a || c+a <= b ) {
		cout << "3 canh khong tao nen tam giac ";
	} else {
		float p = (a + b + c)/2;
		float s = sqrt(p*(p-a)*(p-b)*(p-c));
		cout << "3 canh tao nen tam giac ";
		if(a == b && b == c) {
			cout << "deu.";
		} else if(a == b || b == c || c == a) {
			cout << "can.";
		}else {
			int max;
			if(a > b && a > c) {
				max = a;
				a = b;
				b = c;
			}
			if(b > c && b > c) {
				max = b;
				b = c;
			}
			if(c > b && c > a) {
				max = c;
			}
			if(max*max == a*a + b*b) {
				cout << "vuong.";
			} else {
				cout << "thuong.";
			}
		}
		cout << "\nDien tich cua tam giac la S = " << s;	
	}
	
	return 0;
}
