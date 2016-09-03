#include "stdafx.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]//leave this as is
int main4(array<String^>^ args) {
   Application::EnableVisualStyles();
   Application::SetCompatibleTextRenderingDefault(false);
   ConsoleCLR::MyForm form;
   Application::Run(%form);

   return 0;
}