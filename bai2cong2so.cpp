#include <iostream>
using namespace std;
int main()
{
	cout << "CHUONG TRINH TINH TONG HAI SO" << endl;
	int so1, so2;	//khai bao bien so1 va so2 kieu so nguyen
	int tong;
	cout << "nhap so 1:"; cin >> so1;
	cout << "nhap so 2:"; cin >> so2;
	tong = so1 + so2;
	cout << "tong hai so:" << so1 << "+" << so2 << "=" << tong;
	cout << "tong hai so:" << so1 << "+" << so2 << "=" << so1 + so2;
	return 0;
}