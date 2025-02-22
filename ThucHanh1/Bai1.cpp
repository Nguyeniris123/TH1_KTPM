#include <iostream>
using namespace std;

void Menu() {
	cout << "=================MENU================\n";
	cout << "1. Kiem tra so nguyen to\n";
	cout << "2. Kiem tra nam nhuan\n";
	cout << "99. Thoat!!!\n";
	cout << "=====================================\n";
}


int prime(int n) {
	int dem = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			++dem;
			if (i != n / i) {
				++dem;
			}
		}
	}
	if (dem == 2) {
		return 1; // true
	}
	else {
		return 0; // false;
	}
}

// Kiểm tra năm nhuận
  


int ChonMenu()
{
	int n = 0;
	cout << "\n\nMoi chon menu: ";
	cin >> n;
	if (n > 0 || n < 99)
		return n;
	else return ChonMenu();
}

void XuLyMenu()
{
	int chon = ChonMenu();
	int a = 5; int b = 6;
	switch (chon)
	{
	case 1:
		cout << "1. Kiem tra so nguyen to\n";
		int n;
		cin >> n;
		cout<<prime(n);
		break;
	case 2:
		cout << "2. Kiem tra nam nhuan\n";
		int nam;
		cin >> nam;
		cout << laNamNhuan(nam);
		break;
	case 99:
		cout << "Thoat!!!\n";
		exit(1);
		break;
	}
}


int main() {
	Menu();
	ChonMenu();
	XuLyMenu();
	system("pause");
	return 0;
}

