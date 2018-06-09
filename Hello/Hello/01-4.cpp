/*
	판매원들의 급여 계산 프로그램

	모든 판매원에게 매달 50만원의 기본급여와 물품 판매 가격의 12%에 해당하는 돈을 지급한다.
	-1이 입력되면 프로그램은 종료된다.
*/
#include "stdafx.h"
#include <iostream>

int main()
{
	int sales = 0;
	int salary = 0;

	std::cout << "판매 금액을 만원 단위로 입력 (-1 to end): ";
	std::cin >> sales;
	while (sales != -1)
	{
		salary = 50 + (int)(sales * 0.12);
		std::cout << "이번 달 급여:" << salary<<std::endl;
	}

	std::cout << "프로그램을 종료합니다." << std::endl;




	


}