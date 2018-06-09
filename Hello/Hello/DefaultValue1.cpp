#include "stdafx.h"
#include <iostream>

// 매개변수에 초깃값을 주면 전달인자를 넘겨주지 않아도 디폴트로 값이 매개변수에 대입된다.
int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl; // 매개변수의 수보다 적은 수의 인자전달이 가능하다. 왼쪽부터 채워진다.
	std::cout << Adder(3, 5) << std::endl;
}