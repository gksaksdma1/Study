#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;	//포인터 참조자 선언
	int **(&dpref) = dptr; //더블포인터 참조자 선언

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

}