#include<cmath>
#include <iostream>
#include<string>
using namespace std;

//******************************* Problem 31 **************************************

/*int ReadNumber()
{
	int N;
	cout << "Please Enter a Number ?" << endl;
	cin >> N;
	return N;
}

void PowerOf2_3_4(int N)
{
	int a, b, c;
	a = N * N;
	b = N * N * N;
	c = N * N * N * N;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}*/

//******************************* Problem 32 **************************************

/*void ReadNumbers(int& N, int& M)
{
	cout << "Please Enter a Number ?" << endl;
	cin >> N;
	cout << "Please Enter The Power Number ?" << endl;
	cin >> M;

}

int PowerOfM(int N, int M)
{
	if (M == 0)
	{
		return 1;
	}

	int P = 1;
	for (int i = 1; i <= M;i++)
	{
		P = P * N;
	}
	return P;
}

void PrintResult(int R)
{
	cout << "The Result is = " << R << endl;
}*/

//******************************* Problem 33 **************************************

/*int ReadNumberInRange(int From, int To)
{
	int Grade;
	do
	{
		cout << "Please Enter Grade Between 0 and 100" << endl;
		cin >> Grade;

	} while (Grade<From || Grade>To);

	return Grade;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}*/


//******************************* Problem 34 **************************************

/*int ReadTotalSales()
{
	int TotalSales;
	cout << "Please Enter Your Total Sales ?" << endl;
	cin >> TotalSales;
	return TotalSales;
}

float GetComissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float CalculateTotalComission(float TotalSales)
{
	return GetComissionPercentage(TotalSales) * TotalSales;
}*/


//******************************* Problem 36 **************************************


struct stPiggyBankContent
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent PiggyBankContent;

	cout << "Please Enter Your Total Pennies ?" << endl;
	cin >> PiggyBankContent.Pennies;
	cout << "Please Enter Your Total Nickels ?" << endl;
	cin >> PiggyBankContent.Nickels;
	cout << "Please Enter Your Total Diems ?" << endl;
	cin >> PiggyBankContent.Dimes;
	cout << "Please Enter Your Total Quarters ?" << endl;
	cin >> PiggyBankContent.Quarters;
	cout << "Please Enter Your Total Dollars ?" << endl;
	cin >> PiggyBankContent.Dollars;

	return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggBankContent)
{
	int TotalPennies = 0;

	TotalPennies = PiggBankContent.Pennies * 1 + PiggBankContent.Nickels * 5 + PiggBankContent.Dimes * 10 + PiggBankContent.Quarters * 25
		+ PiggBankContent.Dollars * 100;
	return TotalPennies;
}



int main()
{
	//PowerOf2_3_4(ReadNumber());

	/*int N, M;
	ReadNumbers(N, M);
	PrintResult(PowerOfM(N, M));*/

	//cout<<GetGradeLetter(ReadNumberInRange(0, 100));

	/*float TotalSales = ReadTotalSales();
	cout << "Comission Percentage is = " << GetComissionPercentage(TotalSales) << endl;
	cout << "Total Comission is = " << CalculateTotalComission(TotalSales)<<endl;*/

	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
	cout << "Your Total Pennies is = " << TotalPennies << endl;
	cout << "Your Total Dollars is = " << (float)TotalPennies / 100 << endl;

}

