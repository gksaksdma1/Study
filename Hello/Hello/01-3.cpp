/*
	�����ϳ��� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ���
*/
#include "stdafx.h"
#include <iostream>

int main()
{
	int dan = 0;

	std::cout << "����� ���ϴ� ���� �Է����ּ���.";
	std::cin >> dan;

	for (int i = 1; i <= 9; i++)
	{
		std::cout << dan << " * " << i << " = "<< dan * i <<std::endl;
	}
}