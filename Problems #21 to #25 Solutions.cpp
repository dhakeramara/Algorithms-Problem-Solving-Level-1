#include<cmath>
#include <iostream>
#include<string>
using namespace std;

//************************************** Problem 21 ************************************

/*float ReadNumbers()
{
	float L;
	cout << "Please Enter a Circle Circumference ?" << endl;
	cin >> L;
	return L;
}

float CalcArea(float L)
{
	float const PI = 3.14;
	float Area = (pow(L, 2)) / (PI * 4);
	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area is = " << Area << endl;
}*/


//************************************** Problem 22 ************************************

/*void ReadNumbers(float& A, float& B)
{
	cout << "Please Enter Number A ?" << endl;
	cin >> A;
	cout << "Please Enter Number B ?" << endl;
	cin >> B;

}

float CalcArea(float A, float B)
{
	float const PI = 3.14;
	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area is = " << Area << endl;
}*/


//************************************** Problem 23 ************************************


/*void ReadNumbers(float& A, float& B, float& C)
{
	cout << "Please Enter Number A ?" << endl;
	cin >> A;
	cout << "Please Enter Number B ?" << endl;
	cin >> B;
	cout << "Please Enter Number C ?" << endl;
	cin >> C;

}

float CalcArea(float A, float B, float C)
{
	float const Pi = 3.14;
	float P = (A + B + C) / 2;
	float Equ = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	float R = Pi* pow(Equ, 2);
	
	return R;
}

void PrintArea(float Area)
{
	cout << "Area is = " << Area << endl;
}*/


//************************************** Problem 24 & 25 ************************************


int ReadAge()
{
	int Age;
	cout << "Please Enter Age Between 18 and 45 ?" << endl;
	cin >> Age;
	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
	int Age = 0;

	do
	{
		Age = ReadAge();

	} while (!ValidateNumberInRange(Age, 18, 45));

	return Age;
}

void PrintAge(int Age)
{
	cout << "Your Age is : " << Age << endl;
}

int main()
{
	//PrintArea(CalcArea(ReadNumbers()));

	/*float A, B;
	ReadNumbers(A, B);
	PrintArea(CalcArea(A, B));*/

	/*float A, B, C;
	ReadNumbers(A, B, C);
	PrintArea(CalcArea(A, B, C));*/

	
	PrintAge(ReadUntilAgeBetween(18,45));
}

