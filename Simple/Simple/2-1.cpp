#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int num = 12;

	const int* ptr = &num;

	const int* (&pref) = ptr;

	cout << num << endl;
	cout << *ptr << endl;
	cout << *pref << endl;
}