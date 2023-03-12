#include <iostream>
#include <cmath>
using namespace std;

struct Tam
{
	float x;
	float y;
};
typedef struct Tam TAM;

struct DuongTron
{
	TAM i;
	float r;
};
typedef struct DuongTron DUONGTRON;

void input(DUONGTRON& a)
{
	cout << "Nhap toa do x: ";
	cin >> a.i.x;
	cout << "Nhap toa do y: ";
	cin >> a.i.y;
	cout << "Nhap ban kinh: ";
	cin >> a.r;
}

void load(DUONGTRON a, float& P, float& S)
{
	P = 2 * 3.14 * a.r;
	S = 3.14 * pow(a.r, 2);
}

void output(DUONGTRON a, float P, float S)
{
	cout << "Toa do tam la: (" << a.i.x << "," << a.i.y << ")" << endl;
	cout << "Chu vi = " << P << endl;
	cout << "Dien tich = " << S;
}
int main()
{
	DUONGTRON a;
	input(a);
	float P, S;
	load(a, P, S);
	output(a, P, S);
	return 1;
}