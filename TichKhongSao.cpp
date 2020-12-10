#include <iostream>
using namespace std;
int main()
{
	int sonhan, binhan,
		tich = 0;
	cout << "Nhap so bi nhan: ";
	cin >> binhan;
	cout << "Nhap so nhan: ";
	cin >> sonhan;
	tich = binhan;
	for(int i = 2; i <= sonhan; i++)
		tich += sonhan;
	cout << "Tich: " << tich;
}