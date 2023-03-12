#include <iostream>
using namespace std;

struct Phanso
{
	float tu;
	float mau;
};
typedef struct Phanso PHANSO;

void input(PHANSO& x)
{
	cout << "Nhap phan tu: ";
	cin >> x.tu;
	cout << "Nhap phan mau: ";
	cin >> x.mau;
}

void output(PHANSO x)
{
	if (x.mau != 0)
	{
		if (x.tu < 0 && x.mau < 0)
			cout << "Phan so duong";
		if (x.tu > 0 && x.mau > 0)
			cout << "Phan so duong";
		if (x.tu < 0 && x.mau > 0)
			cout << "Phan so am";
		if (x.tu > 0 && x.mau < 0)
			cout << "Phan so am";
		if (x.tu == 0)
			cout << "Phan so bang khong";
	}
	else
		cout << "Khong hop le";
}

int main()
{
	PHANSO ps;
	input(ps);
	output(ps);
	return 1;
}