#include "FileCodeForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Project;

FileCodeForm::FileCodeForm(void)
{
	InitializeComponent();
}

FileCodeForm::~FileCodeForm()
{
	if (components)
	{
		delete components;
	}
}

void FileCodeForm::InitializeComponent(void)
{
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(602, 261);
	this->ResumeLayout(false);
	this->PerformLayout();
	this->components = gcnew System::ComponentModel::Container();
	this->Size = System::Drawing::Size(300, 300);
	this->Text = L"FileCodeForm";
	this->Padding = System::Windows::Forms::Padding(0);
}