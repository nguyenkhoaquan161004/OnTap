#include <iostream>
using namespace std;

struct Ngay
{
	int ngay;
	int thang;
	int nam;
};
typedef struct Ngay NGAY;

void input(NGAY& a)
{
	cout << "Ngay: ";
	cin >> a.ngay;
	cout << "Thang: ";
	cin >> a.thang;
	cout << "Nam: ";
	cin >> a.nam;
}

void load(NGAY& a)
{
	if (a.thang == 2)
	{
		if (a.ngay >1)
			a.ngay--;
		else if (a.ngay == 1)
		{
			a.ngay = 31;
			a.thang = 1;
		}
		else
			cout << "Khong hop le";
	}
	else if (a.thang == 4 || a.thang == 6 || a.thang == 9 || a.thang == 11)
	{
		if (a.ngay >1)
			a.ngay--;
		else if (a.ngay == 1)
		{
			a.thang--;
			a.ngay = 31;
		}
		else
			cout << "Khong hop le";
	}
	else if ( a.thang == 3 || a.thang == 5 || a.thang == 7 || a.thang == 12 || a.thang == 10)
	{
		if (a.ngay >1)
			a.ngay--;
		else if (a.ngay == 1)
		{
			a.thang--;
			a.ngay = 30;
		}
		else
			cout << "Khong hop le";
	}
	else if (a.thang == 1)
	{
		if (a.ngay >1)
			a.ngay--;
		else if (a.ngay == 1)
		{
			a.nam--;
			a.thang = 12;
			a.ngay = 31;
		}
		else
			cout << "Khong hop le";
	}
	else if (a.thang == 8)
	{
		if (a.ngay > 1)
			a.ngay--;
		else if (a.ngay == 1)
		{
			a.nam--;
			a.thang = 7;
			a.ngay = 31;
		}
		else
			cout << "Khong hop le";
	}
}

void output(NGAY a)
{
	if (a.thang == 2 && a.ngay <= 28)
	{
		cout << "Ngay tiep theo la: " << a.ngay << "/" << a.thang << "/" << a.nam;
	}
	if ((a.thang == 4 || a.thang == 6 || a.thang == 9 || a.thang == 11) && a.ngay <= 30)
	{
		cout << "Ngay tiep theo la: " << a.ngay << "/" << a.thang << "/" << a.nam;
	}
	if ((a.thang == 1 || a.thang == 3 || a.thang == 5 || a.thang == 7 || a.thang == 8 || a.thang == 10 || a.thang == 12) && a.ngay <= 31)
	{
		cout << "Ngay tiep theo la: " << a.ngay << "/" << a.thang << "/" << a.nam;
	}
}
int main()
{
	NGAY a;
	input(a);
	load(a);
	output(a);
	return 0;
}