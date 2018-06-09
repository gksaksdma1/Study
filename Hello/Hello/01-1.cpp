/*
*
*	사용자로부터 총 5개의 저수를 입력 받아서, 그 합을 출력하는 프로그램
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

	std::cout << "1번째 정수 입력: ";
	std::cin >> num1;
	
	std::cout << "2번째 정수 입력: ";
	std::cin >> num2;

	std::cout << "3번째 정수 입력: ";
	std::cin >> num3;

	std::cout << "4번째 정수 입력: ";
	std::cin >> num4;

	std::cout << "5번째 정수 입력: ";
	std::cin >> num5;

	result = num1 + num2 + num3 + num4 + num5;

	std::cout <<"합계: "<< result<<std::endl;
}