#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
private:
	char string[100] = { 0 };
public:
	void SetString(const char* pt)
	{
		strcpy(string, pt);
	}
	void ShowString()
	{
		cout << string << endl;
	}
};

int main()
{
	Printer pnt;
	pnt.SetString("Hello world");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}