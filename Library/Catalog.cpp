#include "Catalog.h"
#include <fstream>
#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>


using namespace std;
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

string Catalog::ThisIsIt = "Nothing";

vector <string> Catalog::ReadBook(int NrOfBook)
{
	vector <string> TheBook;

	LineNr = NrOfBook;
	FileN.open("List.txt", ios::in);
	while (getline(FileN, Line))
	{
		switch (LineNr)
		{
		case 1: Title[NrOfBook] = Line; break;
		case 2: Author[NrOfBook] = Line; break;
		case 3: Date[NrOfBook] = Line; break;
		case 4: Type[NrOfBook] = Line; break;
		case 5: Copy[NrOfBook] = Line; break;
		case 6: Addition[NrOfBook] = Line; break;
		case 7: Content[NrOfBook] = Line; break;
		}
		TheBook.push_back(Line);
		if (LineNr == 7)
		{
			LineNr = 1;
			NrOfBook++;
		}	
		else
		{
			LineNr++;
		}
	}
		FileN.close();
		return TheBook;

}

String^ Catalog::SetDay()
{
	SYSTEMTIME TheDay;
	GetLocalTime(&TheDay);
	int Day = TheDay.wDay;
	int Month = TheDay.wMonth;
	int Year = TheDay.wYear;
	Month++;
	string sDay = std::to_string(Day);
	string sMonth = to_string(Month);
	string sYear = to_string(Year);
	String^ DayS = gcnew String(sDay.c_str());
	Console::WriteLine(DayS);
	String^ MonthS = gcnew String(sMonth.c_str());
	Console::WriteLine(MonthS);
	String^ YearS = gcnew String(sYear.c_str());
	Console::WriteLine(YearS);
	return DayS;
}

String^ Catalog::SetMonth()
{
	SYSTEMTIME TheDay;
	GetLocalTime(&TheDay);
	int Day = TheDay.wDay;
	int Month = TheDay.wMonth;
	int Year = TheDay.wYear;
	Month++;
	string sDay = std::to_string(Day);
	string sMonth = to_string(Month);
	string sYear = to_string(Year);
	String^ DayS = gcnew String(sDay.c_str());
	Console::WriteLine(DayS);
	String^ MonthS = gcnew String(sMonth.c_str());
	Console::WriteLine(MonthS);
	String^ YearS = gcnew String(sYear.c_str());
	Console::WriteLine(YearS);
	return MonthS;
}

String^ Catalog::SetYear()
{
	SYSTEMTIME TheDay;
	GetLocalTime(&TheDay);
	int Day = TheDay.wDay;
	int Month = TheDay.wMonth;
	int Year = TheDay.wYear;
	Month++;
	string sDay = std::to_string(Day);
	string sMonth = to_string(Month);
	string sYear = to_string(Year);
	String^ DayS = gcnew String(sDay.c_str());
	Console::WriteLine(DayS);
	String^ MonthS = gcnew String(sMonth.c_str());
	Console::WriteLine(MonthS);
	String^ YearS = gcnew String(sYear.c_str());
	Console::WriteLine(YearS);
	return YearS;
}
