#include "MyForm.h"
using namespace CLIRechner;

[STAThreadAttribute]
int main()
{
	MyForm ^ fm = gcnew MyForm();
	fm->ShowDialog();
	return 0;
}