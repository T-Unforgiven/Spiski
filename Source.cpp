#include "MyForm.h"

using namespace Project3;
[STAThreadAttribute]
void main(cli::array<System::String^>^ args)
{
	Application::Run(gcnew MyForm());
	
}