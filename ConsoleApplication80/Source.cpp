#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int task;
	cin >> task;
	if (task == 1)
	{
		//1.	�������� ������� int f(int h, int m, int s), ������� ��������� ��� ����� ���������(���� h, ������ m � ������� s) �
		/*���������� ���������� ������, ��������� � ������ ���.*/
		int h, m, s, sec;
		cin >> sec;
		h = sec / 3600;
		m = (sec % 3600) / 60;
		s = ((sec % 3600) % 60);
		cout << h << " chasov " << m << " minut " << s << " sekund" << endl;
	}
	if (task == 2)
	{
		/*2.	�������� ������� int f(int m, int d), ������� ��������� ��� ����� ���������(����� m � ���� d) � ���������� ���������� ����, 
		��������� � ������ ����.�������, ��� � ������ ������ 30 ����.*/
		int m, d, dd;
		cin >> m;
		cin >> d;
		dd = m * 30 + d;
		cout << "kolichestvo dnei c nachala goda " << dd << endl;
	}
	if (task == 3)
	{
		/*3.	�������� ������� int f(int m, int d), ������� ��������� ��� ����� ���������(����� m � ���� d) � ���������� ���������� ����, 
		��������� � ������ ����.�������, ��� � ������ ������ 30 ��� 31����, � ��� �� ����������.*/
		int m, d, dd;
		cin >> m;
		cin >> d;
		dd = 0;
		for (int i = 1;i <= m;i++)
		{
			if (i % 2 != 0)
			{
				dd+=31;
			}
			else if (i == 2)
			{
				dd += 28;
			}
			else if(i==8)
			{
				dd+=31;
			}
			else
			{
				dd += 30;
			}
			cout << "kolichestvo dnei c nachala goda " << dd+d << endl;
		}
		
	}
	if (task == 4)
	{
		/*4.	�������� ������� f(int& m1, int& m0, int N), ������� ���������� ������ � ��������� ����� ����������� ������������ ����� N.*/
		int m1, m0, n;
		cin >> n;
		m1 = n / 10;
		m0 = n % 10;
		cout << m1 << endl;
		cout << m0 << endl;
	}
	if (task == 5)
	{
		/*5.	�������� ������� int f(int m1, int m2, int m3), ������� ������� ���������� ����� �� ��������� ������ ���� ����� �����.
		����������� �������� �������� if*/
		int m1, m2, m3;
		cin >> m1;
		cin >> m2;
		cin >> m3;
		cout << min((m1, m2), m3) << endl;
	}
	if (task == 6)
	{
		/*6.	�������� ������� f(int m, int n), ������� ���������� ��� ���� ����� ����� m � n, ������ �� ������ ����� �������*/
		int m, n;
		cin >> n;
		cin >> m;
		if (m%n == 0)
		{
			cout << "kratno" << endl;
		}
		else
		{
			cout << "ne kratno" << endl;
		}
	}
	
}