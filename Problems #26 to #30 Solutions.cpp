#include<cmath>
#include <iostream>
#include<string>
using namespace std;

//********************************************** Problem 26  ++ ******************************************

/*int ReadNumber()
{
	int N;
	cout << "Please Enter a Number ?" << endl;
	cin >> N;
	return N;
}

void PrintRangeFrom1ToN_UsingWhileLoop(int N)
{
	int Counter = 0;

	cout << "Range Printed using While Loops " << endl;

	while (Counter < N)
	{
		Counter++;
		cout << Counter << endl;
	}
}

void PrintRangeFrom1ToN_UsingDoWhileLoop(int N)
{
	int Counter = 0;
	cout << "Range Printed using Do .. While Loops" << endl;
	do
	{
		Counter++;
		cout << Counter << endl;
	} while (Counter < N);
}

void PrintRangeFrom1ToN_UsingForLoop(int N)
{
	//int Counter = 0;
	cout << "Range Printed using For Loops " << endl;

	for (int Counter = 1;Counter <= N;Counter++)
	{
		cout << Counter << endl;
	}
}*/


//********************************************** Problem 27 -- ******************************************


/*int ReadNumber()
{
	int N;
	cout << "Please Enter a Number ?" << endl;
	cin >> N;
	return N;
}

void PrintRangeFrom1ToN_UsingWhileLoop(int N)
{
	int Counter = N +1;

	cout << "Range Printed using While Statement " << endl;

	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;
	}
}

void PrintRangeFrom1ToN_UsingDoWhileLoop(int N)
{
	int Counter = N +1;
	cout << "Range Printed using Do .. While Statement" << endl;
	do
	{
		Counter--;
		cout << Counter << endl;
	} while (Counter > 1);
}

void PrintRangeFrom1ToN_UsingForLoop(int N)
{
	//int Counter = 0;
	cout << "Range Printed using For Statement " << endl;

	for (int Counter =N;Counter >=1 ;Counter--)
	{
		cout << Counter << endl;
	}
}*/


//********************************************** Problem 28 Odd Numbers ******************************************

/*enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber()
{
	int N;
	cout << "Please Enter a Number ?" << endl;
	cin >> N;
	return N;
}

enOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else 
		return enOddOrEven::Even;
}

int SumOddNumberFrom1ToN_UsingForLoop(int N)
{
	int Sum = 0;
	cout << "Sum Odd Numbers using For Statement " << endl;

	for (int Counter = 1; Counter <= N;Counter++)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
		
	}
	return Sum;
}

int SumOddNumberFrom1ToN_UsingWhileLoop(int N)
{
	int Counter = 0;
	int Sum = 0;
	cout << "Sum Odd Numbers Using While Statement " << endl;

	while (Counter < N)
	{
		Counter++;
		if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}

	}
	return Sum;
}

int SumOddNumberFrom1ToN_UsingDoWhileLoop(int N)
{
	int Counter = 0;
	int Sum = 0;
	cout << "Sum Odd Numbers Using Do .. While Statement" << endl;
	do
	{
		Counter++;
		if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
	} while (Counter < N);
	return Sum;
}*/


//********************************************** Problem 29 Even Numbers ******************************************

/*enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber()
{
	int N;
	cout << "Please Enter a Number ?" << endl;
	cin >> N;
	return N;
}

enOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumEvenNumberFrom1ToN_UsingForLoop(int N)
{
	int Sum = 0;
	cout << "Sum Even Numbers using For Statement " << endl;

	for (int Counter = 1; Counter <= N;Counter++)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}

	}
	return Sum;
}

int SumEvenNumberFrom1ToN_UsingWhileLoop(int N)
{
	int Counter = 0;
	int Sum = 0;
	cout << "Sum Even Numbers Using While Statement " << endl;

	while (Counter < N)
	{
		Counter++;
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}

	}
	return Sum;
}

int SumEvenNumberFrom1ToN_UsingDoWhileLoop(int N)
{
	int Counter = 0;
	int Sum = 0;
	cout << "Sum Even Numbers Using Do .. While Statement" << endl;
	do
	{
		Counter++;
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}
	} while (Counter < N);
	return Sum;
}*/


//********************************************** Problem 30 Factorial Numbers ******************************************

int ReadAPostiveNumber(string Message)
{
	int N;

	do
	{
		cout << Message << endl;
		cin >> N;
	} while (N < 0);
	return N;
}

int Factorial(int N)
{
	int F = 1;

	for (int Counter = N; Counter >= 1;Counter--)
	{
		F = F * Counter;
	}
	return F;
}

int main()
{
	//int N = ReadNumber();
	//PrintRangeFrom1ToN_UsingWhileLoop(N);
	//PrintRangeFrom1ToN_UsingDoWhileLoop(N);
	//PrintRangFrom1ToN_UsingForLoop(N);


	/*int N = ReadNumber();
	cout << SumOddNumberFrom1ToN_UsingDoWhileLoop(N) << endl;
	cout << SumOddNumberFrom1ToN_UsingWhileLoop(N)<<endl;
	cout<<SumOddNumberFrom1ToN_UsingForLoop(N);*/

	/*int N = ReadNumber();
	cout << SumEvenNumberFrom1ToN_UsingDoWhileLoop(N) << endl;
	cout << SumEvenNumberFrom1ToN_UsingWhileLoop(N) << endl;
	cout << SumEvenNumberFrom1ToN_UsingForLoop(N);*/

	cout<<Factorial(ReadAPostiveNumber("Please Enter N ?"))<<endl;
}

