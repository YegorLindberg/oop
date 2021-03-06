/*
Задание 3. – 30 баллов
Разработайте программу, выводящую числа Фибоначчи  диапазона от 0 до N.Целочисленный параметр N(верхняя граница) должен быть указан пользователем в виде аргумента командной строки.Числа последовательности должны выводиться через запятую по 5 чисел в каждой строке.
Внимание, программа должна проверять значения входных параметров.В частности, параметр N, должен быть целым числом большим 0. В виду особенностей целочисленной арифметики языков Си и Си++, должна корректно обрабатываться ситуация с переполнением результатов целочисленных выражений.Вы можете столкнуться с данным эффектом, например, при N = 2 миллиардам.
*/

#include "stdafx.h"
using namespace std;

int main()
{
	//setlocale(LC_ALL, "Russian");
	cout << "Enter integer number: ";
	double N = 0;
	cin >> N;
	bool isInt = (N == int(N));
	if ((N > 0) && (isInt) && (N <= INT_MAX))
	{
		cout << "all is o.k.\n";
		//cout << INT_MAX << endl;
		int count = 1;
		int beforePrev = 0;
		int previous = 0;
		int active = 1;
		while (active + previous <= N)
		{
			count++;
			beforePrev = previous;
			previous = active;
			active = previous + beforePrev;
			if (count <= 5)
			{
				if (!(active + previous >= N))
					cout << active << ", ";
				else
					cout << active << ".\n";
			}
			else
			{
				count = 0;
				if (!(active + previous > N))
					cout << active << ",\n";
				else
					cout << active << ".\n";
			}
		}
		cout << endl;
	}
	else
	{
		cout << "Uncorrect enter.\n  Number \"N\" "
			"will be bigger 0(zero) and the value must be an integer.\n"
			"  May be you write number, bigger than the maximum value allowed: " << INT_MAX << ".\n";
	}
	cout << "flag on.\n";
    return 0;
}
