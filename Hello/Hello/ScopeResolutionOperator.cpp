#include "stdafx.h"
#include <iostream>

int val = 100;

int SimpleFunc()
{
	int val = 20;
	val += 3;	//���������� ����
	::val += 7; //���������� ����
}