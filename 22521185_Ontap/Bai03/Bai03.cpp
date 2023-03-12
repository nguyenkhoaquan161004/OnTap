#include <iostream>
using namespace std;

struct Phanso
{
	float tu;
	float mau;
};
typedef struct Phanso PHANSO;

void input(PHANSO& a)
{
	cout << "Nhap tu: ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}

void load(PHANSO a, PHANSO  b)
{
	if (a.mau != 0 && b.mau != 0)
	{
		if (a.tu / a.mau > b.tu / b.mau)
			cout << "Phan so lon hon la " << a.tu << "/" << a.mau;
		if (a.tu / a.mau < b.tu / b.mau)
			cout << "Phan so lon hon la " << b.tu << "/" << b.mau;
		if (a.tu / a.mau == b.tu / b.mau)
			cout << "Hai phan so bang nhau";
	}
	else
		cout << "Khong hop le";
}
int main()
{
	PHANSO a, b;
	input(a);
	input(b);
	load(a, b);
	return 1;
}