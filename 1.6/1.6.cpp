// 1.6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char *input;
	int count;
	cout << "Write number of elements: "; //���� ���������� ��������� �������
	cin >> count; //���� ��������� �������
	cout << "Write input array: ";
	input = (char*)malloc(count*sizeof(char)); //��������� ������ ��� ������
	cin >> input;
	cout << "Output array is: ";
	for (int i = count - 1; i >= 0; i--)
	{
		cout << input[i]; //����� ��������� �������
	}
	cout << '\n';
	system("pause");
	return 0;
}

