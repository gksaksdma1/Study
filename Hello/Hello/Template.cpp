#include "stdafx.h"
#include <iostream>

//인라인 함수는 자료형에 의존적이라서 Template를 사용하여 모든 자료형을 받아 사용하게끔 하여
// 매크로함수의 장점을 살렸다.

template <typename T>

inline T SQUARE(T x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5.5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}