#include <iostream>
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

void load(DIEM a, DIEM b, float& distance)
{
	distance = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

void output(DIEM a, DIEM b, float distance)
{
	cout << "Diem a co toa do x= " << a.x << " y= " << a.y << endl;
	cout << "Diem b co toa do x= " << b.x << " y= " << b.y << endl;
	cout << "Khoang cach giua a va b la: " << distance;
}

int main()
{
	DIEM a, b;
	input(a);
	input(b);
	float distance;
	load(a, b, distance);
	output(a, b, distance);
	return 1;
}