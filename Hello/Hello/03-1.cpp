#include "stdafx.h"
#include <iostream>

// 매개변수의 초깃값을 안주고 오버로딩을 이용해 구현하니 훨씬 힘들다..

int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);

int main()
{
	std::cout << "[3, 3, 3] :" << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] :" << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] :" << BoxVolume(7) << std::endl;
	//std::cout << "[D, D, D] :" << BoxVolume() << std::endl;
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

int BoxVolume(int length, int width)
{
	int height = 1;
	return length * width * height;
}

int BoxVolume(int length)
{
	int width = 1;
	int height = 1;
	return length * width * height;
}