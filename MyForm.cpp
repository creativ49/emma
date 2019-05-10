#include "MyForm.h"

void GUIohneDesigner::MyForm::FensterDesign()
{
	this->Text = "Omafenster";
	this->ClientSize = System::Drawing::Size(500, 400);
	this->button = gcnew Button();
	this->button->Location = Point(80, 300);
	this->button->Size = System::Drawing::Size(75, 23);
	this->button->Text = "OK";
	this->Controls->Add(this->button);
	this->button->Click += gcnew EventHandler(this, &MyForm::button_Click);
}

void GUIohneDesigner::MyForm::button_Click(Object ^ sender, System::EventArgs ^ e)
{
	MessageBox::Show("Button klick...");
}
