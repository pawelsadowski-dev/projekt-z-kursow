#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^> ^args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Kalkulator::MyForm^ forma = gcnew Kalkulator::MyForm();
	Application::Run(forma);
	return 0;
}