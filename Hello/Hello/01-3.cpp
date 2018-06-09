/*
	숫자하나를 입력 받아서 그 숫자에 해당하는 구구단을 출력
*/
#include "stdafx.h"
#include <iostream>

int main()
{
	int dan = 0;

	std::cout << "출력을 원하는 단을 입력해주세요.";
	std::cin >> dan;

	for (int i = 1; i <= 9; i++)
	{
		std::cout << dan << " * " << i << " = "<< dan * i <<std::endl;
	}
}