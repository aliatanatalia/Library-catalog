#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <comdef.h>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace msclr::interop;

class Catalog
{
public:
	static string ThisIsIt;
	string Title [100];
	string Author [100];
	string Date [100];
	string Type [100];
	string Copy [100];
	string Addition[100];
	string Content[100];
	string Line;
	int BookNr;
	int LineNr;
	fstream FileN;
	vector <string> ReadBook(int);
	String^ SetDay();
	String^ SetMonth();
	String^ SetYear();
	
}; 
