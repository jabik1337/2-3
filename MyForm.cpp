#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Назва проекту має збігатися з вашою (Project3)
    Project3::MyForm^ mainForm = gcnew Project3::MyForm();
    Application::Run(mainForm);

    return 0;
}