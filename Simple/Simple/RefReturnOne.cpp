#include "stdafx.h"
#include <iostream>
using namespace std;

int& RefRetFuncOne(int &ref)
{
	ref++;
	return ref;

	//���� �� �Լ��� ��ȯ���� int ���̶��
	//���ϵǴ°��� �����ϴ� ������ '��'�̴�!!
	//���� int& num2=RefRetFuncOne(num1); �� �Ұ��ϴ�!!

	//����Ÿ���� int&�̱� ������
}

int main(void)
{
	int num1 = 1;
	int &num2 = RefRetFuncOne(num1);
	//int num2 = RefRetFuncOne(num1); �ٸ� ��� �ƿ� �ٸ� ����
	num1++;
	num2++;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}