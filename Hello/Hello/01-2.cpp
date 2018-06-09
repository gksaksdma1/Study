/*
*
*	사용자로부터 이름과 전화번호를 문자열 형태로 입력 받아서, 입력 받은 데이터를 그대로 출력하는 프로그램
*
*/
#include "stdafx.h"
#include <iostream>

int main()
{
	char name[20];
	char tel[20];

	std::cout << "이름을 입력하세요 ";
	std::cin >> name;
	
	std::cout << "전화번호를 입력하세요";
	std::cin >> tel;

	std::cout << "이름은 : " << name << "전화번호는 : " << tel << "입니다" <<std::endl;


}