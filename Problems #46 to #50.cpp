#include<cmath>
#include <iostream>
#include<string>
using namespace std;

//************************************* Problem 46 ********************************

/*void PrintLetterFromAToZ()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}*/

//************************************* Problem 47 ********************************

/*float ReadAPostiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	
	return Number;
}

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return   (float) LoanAmount / MonthlyInstallment;
}*/

//************************************* Problem 48 ********************************

/*float ReadPostiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	
	return Number;
}

float TotalMonthlyInstallment(float LoanAmount, float MonthToPay)
{
	return (float)LoanAmount / MonthToPay;
}*/

//************************************* Problem 49 & 50 ********************************


string ReadPinCode()
{
	string PinCode;
	cout <<endl<< "Please Enter Pin Code ?" << endl;
	cin >> PinCode;
	return PinCode;
}

bool Login()
{
	string PinCode;
	int Counter = 3;
	do
	{
		string PinCode = ReadPinCode();
		Counter--;

		if (PinCode == "1234")
		{
			return 1;
		}
		else
		{
			system("color 4F");
			cout <<"Wrong Pin , You Have "<<Counter <<" More Tries.";
		}
	} while (Counter>= 1 && PinCode != "1234");

	return 0;
	
}

int main()
{
	//PrintLetterFromAToZ();

	/*float LoanAmount = ReadAPostiveNumber("Please Enter Loan Amount ?");
	float MonthlyInstallment = ReadAPostiveNumber("Please Enter Monthly Installment ?");
	cout << endl;
	cout << "Total Month To pay is = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;*/
	
	/*float LoanAmount = ReadPostiveNumber("Please Enter Loan Amount ?");
	float MonthToPay = ReadPostiveNumber("How Many Month Do you Want To Pay The Loan Amount ?");
	cout << endl;
	cout << "The Total monthly installment is = " << TotalMonthlyInstallment(LoanAmount, MonthToPay) << endl*/

	if (Login())
	{
		system("Color 2F");//Turn Screen To Green;
		cout << "Your Balnce is = " << 7500 << endl;
	}
	else
	{
		cout << "Your Card Is Blocked Call The Bank For Help !" << endl;
	}

}

