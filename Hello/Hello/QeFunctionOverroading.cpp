/*
	swap 함수를 오버로딩하여 필요한 메인함수에서 필요한 함수 구현
*/

#include "stdafx.h"
#include <iostream>


void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void swap(char* p1, char* p2)
{
	char temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void swap(double* p1, double* p2)
{
	double temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;
	
	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
	return 0;
}

