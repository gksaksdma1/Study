#include "stdafx.h"
#include <iostream>

int Adder(int num1 = 1, int num2 = 2);	//�Լ� �Ű������� ����Ʈ ���� �Լ��� ���� �κп� ǥ���ؾ� �Ѵ�.

int main()
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}