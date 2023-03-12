#include <iostream>
#include <cmath>
using namespace std;
struct Phuc
{
	float thuc;
	float ao;
};
typedef struct Phuc PHUC;

void input(PHUC& a)
{
	cout << "Nhap phan thuc: ";
	cin >> a.thuc;
	cout << "Nhap phan ao: ";
	cin >> a.ao;
}

void load(PHUC a, PHUC b, float& sumThuc,float& sumAo, float& diffThuc, float& diffAo)
{
	sumThuc = a.thuc + b.thuc;
	sumAo = a.ao + b.ao;
	diffThuc = a.thuc - b.thuc;
	diffAo = a.ao - b.ao;
}

void output(PHUC a, PHUC b, float sumThuc, float sumAo, float diffThuc, float diffAo)
{
	cout << "So phuc thu nhat la " << a.thuc << "+(" << a.ao << ")i" << endl;
	cout << "So thuc thu hai la " << b.thuc << "+(" << b.ao << ")i" << endl;
	cout << "Tong hai so phuc la " << sumThuc << "+(" << sumAo << ")i" << endl;
	cout << "Hieu hai so phuc la " << diffThuc << "+(" << diffAo << ")i";
}
int main()
{
	PHUC a, b;
	input(a);
	input(b);
	float sumThuc, sumAo, diffThuc, diffAo;
	load(a, b, sumThuc, sumAo, diffThuc, diffAo);
	output(a, b, sumThuc, sumAo, diffThuc, diffAo);
	return 0;
}