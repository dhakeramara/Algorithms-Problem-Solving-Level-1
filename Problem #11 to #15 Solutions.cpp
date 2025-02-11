#include<cmath>
#include <iostream>
#include<string>
using namespace std;

//****************************** Problem 11 *******************************

enum enPassFail{Pass=1 , Fail=2};

void ReadMarks(int &M1 , int&M2 , int&M3)
{
	cout << "Please Enter Your Mark 1 ? " << endl;
	cin >> M1;

	cout << "Please Enter Your Mark 2 ? " << endl;
	cin >> M2;

	cout << "Please Enter Your Mark 3 ? " << endl;
	cin >> M3;
}

int SumOf3Marks(int M1, int M2, int M3)
{
	return M1 + M2 + M3;
}

float CalculateAvrage(int M1, int M2, int M3)
{
	return (float)SumOf3Marks(M1 , M2 , M3) / 3;
}

enPassFail CheckMarks(float Avrage)
{
	if (Avrage >=50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(float Avrage)
{
	cout << "Your Avrage is = " << Avrage << endl;
	if (CheckMarks(Avrage) == enPassFail::Pass)
		cout << "You Passed " << endl;
	else
		cout << "You Faild" << endl;
}


//****************************** Problem 12 *********************************************

void ReadNumbers(int& N1, int& N2)
{
	cout << "Please Enter Number 1" << endl;
	cin >> N1;

	cout << "Please Enter Number 2" << endl;
	cin >> N2;
}

int MaxOf2Numbers(int N1, int N2)
{
	if (N1 > N2)
		return N1;
	else
		return N2;
}

void PrintMax(int Max)
{
	cout << "The Maximum Number is = " << Max << endl;
}


//****************************** Problem 13 *********************************************

void ReadNumber(int& A, int& B, int& C)
{
	cout << "Please Enter Number A ?" << endl;
	cin >> A;
	cout << "Please Enter Number B ?" << endl;
	cin >> B;
	cout << "Please Enter Number C ?" << endl;
	cin >> C;

}

int MaxOf3Numbers(int A, int B, int C)
{
	if (A > B)
		if (A > C)
			return A;
		else
			return C;
	else
		if (B > C)
			return B;
		else
			return C;

}

void Print(int Max)
{
	cout << "The Maximum Number is = " << Max << endl;
}


//****************************** Problem 14 *********************************************


void ReadN(int& X, int& Y)
{
	cout << "Please Enter Number 1 ?" << endl;
	cin >> X;

	cout << "Please Enter Number 2 ?" << endl;
	cin >> Y;

}

void SwapNumbers(int& X, int& Y)
{
	int Temp;

	Temp = X;
	X = Y;
	Y = Temp;
}

void printNumbers(int X, int Y)
{
	cout << "Number 1 = " << X << endl;
	cout << "Number 2 = " << Y << endl<<endl;
}


//****************************** Problem 15 *********************************************


void ReadNum(float& a, float& b)
{
	cout << "Please Enter Rectangle Width ?" << endl;
	cin >> a;

	cout << "Please Enter Rectangle length ?" << endl;
	cin >> b;

}

float CalculArea(float& a, float& b)
{
	return a * b;
}

void PrintArea(float Area)
{
	cout << "The Rectangle Area is  = " << Area << endl;
}

int main()
{

	/*int M1, M2, M3;
	ReadMarks(M1, M2, M3);
	PrintResults(CalculateAvrage(M1, M2, M3));*/

	/*int N1, N2;
	ReadNumbers(N1, N2);
	PrintMax(MaxOf2Numbers(N1, N2));*/

	/*int A, B, C;
	ReadNumber(A, B, C);
	Print(MaxOf3Numbers(A, B, C));*/


	/*int X, Y;
	ReadN(X, Y);
	printNumbers(X, Y);
	SwapNumbers(X, Y);
	printNumbers(X, Y);*/

	float a, b;
	ReadNum(a, b);
	PrintArea(CalculArea(a, b));
}

