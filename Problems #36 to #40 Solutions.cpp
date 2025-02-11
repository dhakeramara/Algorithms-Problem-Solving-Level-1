#include<cmath>
#include <iostream>
#include<string>
using namespace std;

//*********************************** Problem 36 ***********************************

/*enum enOprationType { Add = '+', Substract = '-', Multiply = '*', Divide = '/' };

float ReadNumbers(string Message)
{
	float Number = 0;
	cout << Message<<endl;
	cin >> Number;
	return Number;
}

enOprationType ReadOpType()
{
	char OT = '+';
	cout << "Please Choose a Opration Type (+ , - , * , /) ?" << endl;
	cin >> OT;
	return (enOprationType)OT;
}

float Calculate(float Number1, float Number2, enOprationType OpType)
{
	switch (OpType)
	{
	case enOprationType::Add:
		return Number1 + Number2;
	case enOprationType::Substract:
		return Number1 - Number2;
	case enOprationType::Multiply:
		return Number1 * Number2;
	case enOprationType::Divide:
		return Number1 / Number2;
	default:
			return Number1 + Number2;

	}
		
}*/


//*********************************** Problem 37 ***********************************

/*float ReadNumbers(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;

}

float SumNumbers()
{
	int Sum = 0, Number = 0, Counter = 1;

	do
	{
		Number = ReadNumbers("Please Enter Number " + to_string(Counter));
		if (Number == -99)
		{
			break;
		}
		Sum += Number;
		Counter++;
	} while (Number != -99);
	return Sum;

}*/


//*********************************** Problem 38 ***********************************

/*enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M;Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number)
{
	switch (CheckPrime(Number))
	{
	case enPrimeNotPrime::Prime:
		cout << "The Number is Prime" << endl;
		break;
	case enPrimeNotPrime::NotPrime:
		cout << "The Number is Not Prime " << endl;
		break;
	}
}*/


//*********************************** Problem 39 ***********************************

/*float ReadPositiveNumber(string Message)
{
	float Number;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

float CalculateRemainder(float TotalBill, float TotalCash)
{
	return TotalCash - TotalBill;
}*/


//*********************************** Problem 40 ***********************************

float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;
	return TotalBill;
}

int main()
{
	/*float Number1 = ReadNumbers("Please Enter The First Number ?");
	float Number2 = ReadNumbers("Please Enter The Second Number ?");

	enOprationType OpType = ReadOpType();

	cout <<"Result is = "<< Calculate(Number1, Number2, OpType) << endl;*/

	//cout << "Result is = " << SumNumbers() << endl;

	//PrintNumberType(ReadPositiveNumber("Please Enter a Positive Number ?"));

	/*float TotalBill = ReadPositiveNumber("Please Enter Total Bill ?");
	float TotalCash = ReadPositiveNumber("Please Enter Total Cash ?");
	cout << endl;
	cout << "Total Bill Value is = " << TotalBill << endl;
	cout << "Total Cash Paid is = " << TotalCash << endl;
	cout << "**********************************" << endl;
	cout << "The Remainder is = " << CalculateRemainder(TotalBill, TotalCash) << endl;*/


	float TotalBill = ReadNumber("Please Enter Total Bill ?");
	cout << endl;
	cout << "Total Bill is = " << TotalBill << endl;
	cout << "Total Bill After Service and Tax is = "<<TotalBillAfterServiceAndTax(TotalBill)<<endl;


}


