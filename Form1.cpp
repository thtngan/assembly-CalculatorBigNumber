#include "pch.h"
#include "Form1.h"

//using namespace CppCLRWinformsProjekt;

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(cli::array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CppCLRWinformsProjekt::Form1 form;
	Application::Run(% form);
}

