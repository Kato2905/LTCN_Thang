#include <iostream>
using namespace std;
int main() {
	int thang;
	cout << "Nhap vao thang trong nam: ";
	cin >> thang;
	switch (thang) {
	case 1:;
	case 3:;
	case 5:;
	case 7:;
	case 10:;
	case 12:;
		cout << "Thang " << thang << " co 31 ngay";
		cin >> thang;
			break;
	case 4:;
	case 6:;
	case 9:;
	case 11:;
		cout << "Thang " << thang << "" " co 30 ngay" << endl;
		cin >> thang;
		break;
	case 2:;
		cout << "thang 2 co 28 hoac 29 ngay";
		cin >> thang;
		break;
	default:
		cout << " Khong co thang" << thang << endl;
		break;
	}
	return 0;
}