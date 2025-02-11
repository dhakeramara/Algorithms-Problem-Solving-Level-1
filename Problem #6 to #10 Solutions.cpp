#include<cmath>
#include <iostream>
#include<string>
using namespace std;

//*********************************** Problem 6 ************************************************

struct stInfo
{
	string FirstName;
	string LastName;

};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please Enter Your First Name ?" << endl;
	cin >> Info.FirstName;

	cout << "Please Enter Your Last Name ?" << endl;
	cin >> Info.LastName;

	return Info;
}

string GetFullName(stInfo Info , bool Reversed)
{
	string FullName = "";

	if(Reversed)

		FullName = Info.LastName + " " + Info.FirstName;

	else

	    FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
}

void PrintFullName(string FullName)
{
	cout << "Your Full Name is " << FullName << endl;
}

//*********************************** Problem 7 ************************************************

int ReadNumber()
{
	int Num;
	cout << "Please Enter a Number ?" << endl;
	cin >> Num;
	return Num;
}

float CalculationHalfNumber(int Num)
{
	return (float)Num / 2;
}

void PrintResult(int Num)
{
	string Result = "Half Number " + to_string(Num) + " is " + to_string(CalculationHalfNumber(Num));
	cout << Result << endl;
	//cout << "The Half Number That You Entred is = " << CalculationHalfNumber(Num) << endl;
}

//*********************************** Problem 8 ************************************************

enum enPassFail{Pass=1 , Fail=2};

int ReadMark()
{
	int Mark;
	cout << "Please Enter Your Mark ?" << endl;
	cin >> Mark;
	return Mark;
}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "You Passed" << endl;
	else
		cout << "You Faild" << endl;
}

//*********************************** Problem 9 & 10 ************************************************

void ReadNumbers(int& N1, int &N2, int &N3)
{
	cout << "Please Enter Number 1 ?" << endl;
	cin >> N1;

	cout << "Please Enter Number 2 ?" << endl;
	cin >> N2;

	cout << "Please Enter Number 3 ?" << endl;
	cin >> N3;
}

int SumOf3numbers(int N1, int N2, int N3)
{
	return N1 + N2 + N3;
}

float CalculateAvrg(int N1, int N2, int N3)
{
	return (float)SumOf3numbers(N1, N2, N3) / 3;
}

void PrintTotal(int Total)
{
	cout << "The Total Of 3 Numbers is = " << Total << endl;
	
}

void PrintAvrage(int Avrage)
{
	cout << "The Avrage Of 3 Numbers is = " << Avrage << endl;
}


int main()
{
	//PrintFullName(GetFullName(ReadInfo(), true));

	//PrintResult(ReadNumber());

	//PrintResults(ReadMark());

	int  N1, N2, N3;
	ReadNumbers(N1, N2, N3);
	PrintTotal(SumOf3numbers(N1, N2, N3));
	PrintAvrage(CalculateAvrg(N1, N2, N3));


}

