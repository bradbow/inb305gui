// BankingSystem.cpp : main project file.

#include "stdafx.h"
#include "LoginForm1.h"

using namespace BankingSystem;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew LoginForm());
	return 0;
}
