﻿#include <string>
#include <iostream>
using namespace std;

bool isKPeriodic(string str, int d, int k)
{
	for (int i = k; i < d; i += k) //двигаемся по длине
	{
		if (i + k > d)
			return false;
		for (int j = 0; j < k; j++)
		{
			if (str[i] != str[j]) // несовпадение
				return false;
			i++;
		}
		return true;
	}		
	return true;
}

int main()
{
	//string str = "abcabcabcabc";	
	//int k = 3;

	string str = "privetprivet"; // пара вариантов для проверки
	int k = 6;
	
	int d = str.size(); // длина строки

	if (isKPeriodic(str, d, k))
		cout << "Yes";
	else
		cout << "No";
}

