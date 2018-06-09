#include "stdafx.h"
#include <iostream>

//매개변수 초깃값은 항상 오른쪽 부터 정의 되어 있어야하며 왼쪽만 정의 되어있으면 오류발생!
//매개변수를 적게 넘겨줄때 왼쪽부터 채워지기 때문에 부족하면 오른쪽은 비어있게 된다.

int BoxVolume(int length, int width = 1, int height = 1);

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