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

void load(PHANSO a, PHANSO b, float& sum, float& diff, float& product, float& quotinet)
{
	if (a.mau != 0 && b.mau != 0)
	{
		sum = (a.tu / a.mau) + (b.tu / b.mau);
		diff = (a.tu / a.mau) - (b.tu / b.mau);
		product = (a.tu / a.mau) * (b.tu / b.mau);
		quotinet = (a.tu / a.mau) / (b.tu / b.mau);
	}
}

void output(PHANSO a, PHANSO b, float sum, float diff, float product, float quotinet)
{
	if (a.mau != 0 && b.mau != 0)
	{
		cout << "Phan so thu nhat la: " << a.tu << "/" << a.mau << endl;
		cout << "Phan so thu hai la: " << b.tu << "/" << b.mau << endl;
		cout << "Tong hai phan so = " << sum << endl;
		cout << "Hieu hai phan so = " << diff << endl;
		cout << "Tich hai phan so = " << product << endl;
		cout << "Thuong hai phan so = " << quotinet;
	}
	else
		cout << "Khong hop le";
}
int main()
{
	PHANSO a, b;
	input(a);
	input(b);
	float sum, diff, product, quotinet;
	load(a, b, sum, diff, product, quotinet);
	output(a, b, sum, diff, product, quotinet);
	return 1;
}