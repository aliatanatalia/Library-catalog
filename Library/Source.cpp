#include <Windows.h>
#include "Informations.h"
#include "Borrow.h"
#include "Search.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Library::Search form;
		Application::Run(%form);
}


