/*
So bao hiem xa hoi Canada(SIN - Canadian Social Insurance Number) la mot so co 9 chu so
duoc kiem tra tinh hop le nhu sau:
- So phai nhat(vt1, tinh thu phai sang), la so kiem tra(check digit)
- Trong so tinh thu phai qua trai(ko tinh check digit), bang s1 + s2
  s1 la tong cac so o vt le
  cac so vt chan nhan 2. neu nhan 2 > 10 thi kq = tong 2 so. s2 la tong cac ket qua
-->SIN hop le la co tong trong so voi so kiem tra chia het cho 10.
*/
#include<iostream>
#include<cstring>

using namespace std;

int main() {
	for(int i = 0 ; i < i+1; i++) {
		int SIN;
		cout << "Nhap SIN (nhap 0 de thoat): ";cin >> SIN;
		if(SIN == 0) {
			break;
		}
		int digit, s1 = 0, s2 = 0;
		int j = 0;
		digit = SIN % 10;
		SIN /= 10;
		while(SIN > 0) {
			int x = SIN % 10;
			if(j % 2 == 0) {
				if(x*2 < 10) {
					s2 += x*2;
				} else {
					s2 = s2 + (x*2%10 + x*2/10);
				}
			} else {
				s1 += x;
			}
			j++;
			SIN /= 10;
		}
		int check = s1 + s2 + digit;
		if(check % 10 == 0) {
			cout << "SIN hop le";
		} else {
			cout << "SIN khong hop le";
		}
		cout << endl;
	}
	return 0;
}
