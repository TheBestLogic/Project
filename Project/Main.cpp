#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Project;


[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MainForm form;
	Application::Run(%form);
}