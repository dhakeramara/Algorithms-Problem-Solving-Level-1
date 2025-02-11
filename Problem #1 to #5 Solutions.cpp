#include<cmath>
#include <iostream>
#include<string>
using namespace std;

//********************************************** Problem 1,2 *****************************

string ReadName()
{
    string Name;
    cout << "Please Enter Your Name " << endl;
    getline(cin, Name);
    return Name;
}

void PrintName(string Name)
{
    cout << "Your Name is " << Name<< endl;
}


//***************************************** Problem 3 ************************************

enum enNumberType{Odd=1,Even=2};

int ReadNumber()
{
    int Num;
    cout << "Please Enter a Number " << endl;
    cin >> Num;
    return Num;
}

enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }
}


void PrintNumberType(enNumberType NumberType)
{
    if (NumberType== enNumberType::Even)
    {
        cout << "Your Number is Even";
    }
    else
    {
        cout << "Your Number is Odd";
    }
}



//***************************************** Problem 4,5 ************************************

struct stInfo {
    int Age;
    bool HasDriverLicense;
    bool HaveRecommandation;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please Enter your Age ? " << endl;
    cin >> Info.Age;

    cout << "Do You Have License Drive ?" << endl;
    cin >> Info.HasDriverLicense;

    cout << "Do You Have Recommandation ?" << endl;
    cin >> Info.HaveRecommandation;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDriverLicense || Info.HaveRecommandation);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "Hired" << endl;
    else
        cout << "Rejected !" << endl;
}



int main()
{
   //PintName(ReadName());

   // PrintNumberType(CheckNumberType(ReadNumber()));

    PrintResult(ReadInfo());
}

