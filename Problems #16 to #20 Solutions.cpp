#include<cmath>
#include <iostream>
#include<string>
using namespace std;

//********************************** Problem 16 ****************************

/*void ReadNumbers(float& a, float& b)
{
	cout << "Please Enter Oe Side of Rectangle ?" << endl;
	cin >> a;
	cout << "Please Enter The Diagonal of Rectangle ?" << endl;
	cin >> b;
}

float CalcuArea(float a, float b)
{
	float Area = a * (sqrt(pow(b, 2) - pow(a, 2)));
	return Area;
}

void PrintResult(float Area)
{
	cout << "The Area is = " << Area << endl;
}*/


//********************************** Problem 17 ****************************

/*void ReadNumbers(float& c, float& h)
{
	cout << "Please Enter One Side Of Triangle ? " << endl;
	cin >> c;
	cout << "Please Enter Height of Triangle ? " << endl;
	cin >> h;
}

float CalcuArea2(float c, float h)
{
	float Area = (c / 2) * h;
	return Area;
}

void PrintReasult(float Area)
{
	cout << "The Area is = " << Area << endl;
*/


//********************************** Problem 18 ****************************

/*float ReadNumbers()
{
	float r;
	cout << "Please Enter Rayan Of Cercle ?" << endl;
	cin >> r;
	return r;
}

float CalculCircleArea(float r)
{
	float const PI = 3.14;
	float Area = PI * pow(r, 2);
	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area is = " << Area << endl;
}*/


//********************************** Problem 19 & 20 ****************************


float ReadNumbers()
{
	float D;
	cout << "Please Enter Cercle Diameter ?" << endl;
	cin >> D;
	return D;
}

float CalcArea(float D)
{
	float const PI = 3.14;
	float Area = (PI * pow(D, 2)) / 4;
	return Area;
}

void PrintArea(float Area)
{
	cout << "The Area is = " << Area << endl;
}

int main()
{
	/*float a, b;
	ReadNumbers(a, b);
	PrintResult(CalcuArea(a, b));*/

	/*float c, h;
	ReadNumbers(c, h);
	PrintReasult(CalcuArea2(c, h));*/

	//PrintArea(CalculCircleArea(ReadNumbers()));

	PrintArea(CalcArea(ReadNumbers()));
}

