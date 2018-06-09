/*
	인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
	인자로 전달된 int형 변수의 부호를 바꾸는 함수
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

void Plus(int &num)
{
	 num = num + 1;
}

void Change(int &num)
{
	num = -num;
}

int main()
{
	int val = 5;
	cout << "val : " << val << endl;
	Plus(val);
	cout << "val : " << val << endl;
	Change(val);
	cout << "val : " << val << endl;
}