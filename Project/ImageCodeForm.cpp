#include "ImageCodeForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace Project;

ImageCodeForm::ImageCodeForm(void)
{
	InitializeComponent();
}

ImageCodeForm::~ImageCodeForm()
{
	if (components)
	{
		delete components;
	}
}

void ImageCodeForm::InitializeComponent(void)
{
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(284, 261);
	this->Name = L"ImageCodeForm";
	this->Text = L"ImageCodeForm";
	this->ResumeLayout(false);
}