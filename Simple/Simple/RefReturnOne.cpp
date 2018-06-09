#include "stdafx.h"
#include <iostream>
using namespace std;

int& RefRetFuncOne(int &ref)
{
	ref++;
	return ref;

	//만약 이 함수의 반환형이 int 형이라면
	//리턴되는것은 참조하는 변수의 '값'이다!!
	//따라서 int& num2=RefRetFuncOne(num1); 은 불가하다!!

	//리턴타입이 int&이기 때문에
}

int main(void)
{
	int num1 = 1;
	int &num2 = RefRetFuncOne(num1);
	//int num2 = RefRetFuncOne(num1); 다른 결과 아예 다른 변수
	num1++;
	num2++;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}