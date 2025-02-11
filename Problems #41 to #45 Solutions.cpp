#include<cmath>
#include <iostream>
#include<string>
using namespace std;

//************************************ Problem 41 ************************************

/*float ReadNumberOfHour(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

float HoursToDays(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}

float DaysToWeeks(float NumberOfDays)
{
	return (float)NumberOfDays / 7;
}

float HoursToWeeks(float NumberOfHours)
{
	return (float)NumberOfHours / 24 / 7;
}*/

//************************************ Problem 42 ************************************

/*int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;
	
	TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter number Of Days ?");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours ?");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter number Of Minutes ?");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds ?");

	return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds; 

	return DurationInSeconds;
}*/



//************************************ Problem 43 ************************************

/*int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	strTaskDuration TaskDuration;

	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;
	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;
}

void PrintTaskDuration(strTaskDuration TaskDuration)
{
	cout << endl;
	cout << TaskDuration.NumberOfDays << " : ";
	cout << TaskDuration.NumberOfHours << " : ";
	cout << TaskDuration.NumberOfMinutes << " : ";
	cout << TaskDuration.NumberOfSeconds << endl;
}*/


//************************************ Problem 44 ************************************

/*enum enDayOfWeek { Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7 };

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please Enter a Number Day Of Week : Mon = 1 , Tue = 2 , Wed = 3 , Thu = 4 , Fri = 5 , Sat = 6 , Sun = 7 ",1,7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Mon:
		return "Monday";
	case enDayOfWeek::Tue:
		return "Tuesday";
	case enDayOfWeek::Wed:
		return "Wednesday";
	case enDayOfWeek::Thu:
		return "Thursday";
	case enDayOfWeek::Fri:
		return "Friday";
	case enDayOfWeek::Sat:
		return "Saturday";
	case enDayOfWeek::Sun:
		return "Sunday";
	default:
		return "Not a Valid Day!!";
	}
}*/

//************************************ Problem 45 ************************************

enum enMonthOfYears{ January = 1, February = 2 , March = 3 , April = 4,
May = 5 , June = 6 , July = 7 , August = 8 , Septembre = 9 , October = 10 ,
November = 11 , December = 12 };

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enMonthOfYears ReadMonth()
{
	return (enMonthOfYears)ReadNumberInRange("Please Choose Month From 1 To 12 :", 1, 12);
}

string GetMonthOfYears(enMonthOfYears Months)
{
	switch (Months)
	{
	case enMonthOfYears::January:
		return "January";
	case enMonthOfYears::February:
		return "February";
	case enMonthOfYears::March:
		return "March";
	case enMonthOfYears::April:
		return "April";
	case enMonthOfYears::May:
		return "May";
	case enMonthOfYears::June:
		return "June";
	case enMonthOfYears::July:
			return "July";
	case enMonthOfYears::August:
		return "August";
	case enMonthOfYears::Septembre:
		return "Septembre";
	case enMonthOfYears::October:
		return "octobre";
	case enMonthOfYears::November:
		return "November";
	case enMonthOfYears::December:
		return "December";
	default:
		return "Not a Valid Month !";
	}
}


int main()
{
	/*float NumberOfHours = ReadNumberOfHour("Please Enter Number Of hours ?");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);
	cout << endl;
	cout << "Total Of Hours = " << NumberOfHours << endl;
	cout << "Total Of Days = " << NumberOfDays << endl;
	cout << "Total Of Weeks = " << HoursToWeeks(NumberOfHours) << endl;*/


	//cout<<"Task Duration in Seconds is = " <<TaskDurationInSeconds(ReadTaskDuration())<<endl;


	//int TotalSeconds = ReadPositiveNumber("Please Enter Number Of Seconds ?");
	//PrintTaskDuration(SecondsToTaskDuration(TotalSeconds));


	//cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

	cout << GetMonthOfYears(ReadMonth()) << endl;


}

