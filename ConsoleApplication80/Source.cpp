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
		//1.	Напишите функцию int f(int h, int m, int s), которая принимает три целых аргумента(часы h, минуты m и секунды s) и
		/*возвращает количество секунд, прошедших с начала дня.*/
		int h, m, s, sec;
		cin >> sec;
		h = sec / 3600;
		m = (sec % 3600) / 60;
		s = ((sec % 3600) % 60);
		cout << h << " chasov " << m << " minut " << s << " sekund" << endl;
	}
	if (task == 2)
	{
		/*2.	Напишите функцию int f(int m, int d), которая принимает два целых аргумента(месяц m и день d) и возвращает количество дней, 
		прошедших с начала года.Считаем, что в каждом месяце 30 дней.*/
		int m, d, dd;
		cin >> m;
		cin >> d;
		dd = m * 30 + d;
		cout << "kolichestvo dnei c nachala goda " << dd << endl;
	}
	if (task == 3)
	{
		/*3.	Напишите функцию int f(int m, int d), которая принимает два целых аргумента(месяц m и день d) и возвращает количество дней, 
		прошедших с начала года.Считаем, что в каждом месяце 30 или 31дней, а год не високосный.*/
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
		/*4.	Напишите функцию f(int& m1, int& m0, int N), которая возвращает первую и последнюю цифры двузначного натурального числа N.*/
		int m1, m0, n;
		cin >> n;
		m1 = n / 10;
		m0 = n % 10;
		cout << m1 << endl;
		cout << m0 << endl;
	}
	if (task == 5)
	{
		/*5.	Напишите функцию int f(int m1, int m2, int m3), которая находит наименьшее число из заданного набора трех целых чисел.
		Используйте условный оператор if*/
		int m1, m2, m3;
		cin >> m1;
		cin >> m2;
		cin >> m3;
		cout << min((m1, m2), m3) << endl;
	}
	if (task == 6)
	{
		/*6.	Напишите функцию f(int m, int n), которая определяет для пары целых чисел m и n, кратно ли второе число первому*/
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