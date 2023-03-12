#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void input(DIEM& a)
{
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}

void load(DIEM a, DIEM b, DIEM c, DIEM& g, float& P, float& S)
{
	float ab = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
	float ac = sqrt(pow((a.x - c.x), 2) + pow((a.y - c.y), 2));
	float bc = sqrt(pow((b.x - c.x), 2) + pow((b.y - c.y), 2));
	P = ab + ac + bc;
	float t = 2;
	S = sqrt(t * (t - ab) * (t - ac) * (t - bc));
	g.x = (a.x + b.x + c.x) / 3;
	g.y = (a.y + b.y + c.y) / 3;
}

void output(DIEM a, DIEM b, DIEM c, DIEM g, float P, float S)
{
	cout << "Toa do diem thu nhat: (" << a.x << "," << a.y << ")" << endl;
	cout << "Toa do diem thu hai: (" << b.x << "," << b.y << ")" << endl;
	cout << "Toa do diem thu ba: (" << c.x << "," << c.y << ")" << endl;
	cout << "Chu vi = " << P << endl;
	cout << "Diem tich = " << S << endl;
	cout << "Toa do trong tam: (" << g.x << "," << g.y << ")";
}
int main()
{
	DIEM a, b, c, g;
	float P, S;
	input(a);
	input(b);
	input(c);
	load(a, b, c, g, P, S);
	output(a, b, c, g, P, S);
	return 1;
}