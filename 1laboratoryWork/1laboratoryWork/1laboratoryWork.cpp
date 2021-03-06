// 1laboratoryWork.cpp : Defines the entry point for the console application.
//используя функцию SumDigits, разработайте программу, выводящую в порядке возрастания целые числа диапазона
//от 1 до 1000, делящиеся без остатка на сумму своих цифр.

#include "stdafx.h"
#define NDEBUG
using namespace std;

int SumDigits(int i)
{
	int sum = 0;
	// цикл продолжается до тех пор, пока число не станет равным 0
	while (i != 0)
	{
		sum += i % 10;
		i /= 10; // x /= y;	x = x / y;
	}
	return sum;
}


int main() //int argc, char* argv[]
{
	for (int i = 0; i <= 9; ++i)
	{
		for (int j = 0; j <= 9; ++j)
		{
			for (int k = 0; k <= 9; ++k)
			{
				int x = i * 100 + j * 10 + k;
				int sum = SumDigits(x);
				assert((i + j + k) == sum);
				if (x != 0)
					if (x % sum == 0)
						cout << i << j << k << endl;
			}
		}
	}
	return 0;
}
