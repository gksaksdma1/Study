#include "stdafx.h"
#include <iostream>

// �Ű������� �ʱ갪�� �ָ� �������ڸ� �Ѱ����� �ʾƵ� ����Ʈ�� ���� �Ű������� ���Եȴ�.
int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl; // �Ű������� ������ ���� ���� ���������� �����ϴ�. ���ʺ��� ä������.
	std::cout << Adder(3, 5) << std::endl;
}