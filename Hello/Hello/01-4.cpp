/*
	�Ǹſ����� �޿� ��� ���α׷�

	��� �Ǹſ����� �Ŵ� 50������ �⺻�޿��� ��ǰ �Ǹ� ������ 12%�� �ش��ϴ� ���� �����Ѵ�.
	-1�� �ԷµǸ� ���α׷��� ����ȴ�.
*/
#include "stdafx.h"
#include <iostream>

int main()
{
	int sales = 0;
	int salary = 0;

	std::cout << "�Ǹ� �ݾ��� ���� ������ �Է� (-1 to end): ";
	std::cin >> sales;
	while (sales != -1)
	{
		salary = 50 + (int)(sales * 0.12);
		std::cout << "�̹� �� �޿�:" << salary<<std::endl;
	}

	std::cout << "���α׷��� �����մϴ�." << std::endl;




	


}