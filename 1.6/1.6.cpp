// 1.6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char *input;
	int count;
	cout << "Write number of elements: "; //Ввод количества элементов массива
	cin >> count; //Ввод исходного массива
	cout << "Write input array: ";
	input = (char*)malloc(count*sizeof(char)); //выделение памяти под массив
	cin >> input;
	cout << "Output array is: ";
	for (int i = count - 1; i >= 0; i--)
	{
		cout << input[i]; //Вывод элементов массива
	}
	cout << '\n';
	system("pause");
	return 0;
}

