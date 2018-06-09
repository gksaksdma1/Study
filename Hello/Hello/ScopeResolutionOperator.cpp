#include "stdafx.h"
#include <iostream>

int val = 100;

int SimpleFunc()
{
	int val = 20;
	val += 3;	//지역변수의 증가
	::val += 7; //전역변수의 증가
}