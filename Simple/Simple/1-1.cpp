/*
	���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
	���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�
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