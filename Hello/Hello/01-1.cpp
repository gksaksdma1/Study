/*
*
*	����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�, �� ���� ����ϴ� ���α׷�
*	
*/
#include "stdafx.h"
#include <iostream>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;

	int result = 0;

	std::cout << "1��° ���� �Է�: ";
	std::cin >> num1;
	
	std::cout << "2��° ���� �Է�: ";
	std::cin >> num2;

	std::cout << "3��° ���� �Է�: ";
	std::cin >> num3;

	std::cout << "4��° ���� �Է�: ";
	std::cin >> num4;

	std::cout << "5��° ���� �Է�: ";
	std::cin >> num5;

	result = num1 + num2 + num3 + num4 + num5;

	std::cout <<"�հ�: "<< result<<std::endl;
}