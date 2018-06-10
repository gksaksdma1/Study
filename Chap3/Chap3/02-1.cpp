#include <iostream>
using namespace std;

class Calculator
{
private:
	int AddCount = 0;
	int DivCount = 0;
	int MinCount = 0;
	int MulCount = 0;
public:
	void Init()
	{
		AddCount = 0;
		DivCount = 0;
		MinCount = 0;
		MulCount = 0;
	}

	double Add(double a, double b)
	{
		AddCount++;
		return a + b;
		
	}

	double Div(double a, double b)
	{

		if (b == 0)
			return 0;
		DivCount++;
		return a / b;

	}

	double Min(double a, double b)
	{
		MinCount++;
		return a - b;
	}

	double Mul(double a, double b)
	{
		MulCount++;
		return a * b;
	}

	void ShowOpCount()
	{
		cout << "����: " << AddCount << " ����: " << MinCount << " ����: " << MulCount << " ������: " << DivCount << endl;
	}

};

int main()
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 + 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;

}