#include "MyForm.h"

using namespace System; 
using namespace System::Windows::Forms;

[STAThreadAttribute]

	int main(array<System::String ^> ^args)
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		KiK::MyForm^ forma = gcnew KiK::MyForm();
		Application::Run(forma);
		return 0;
	}

