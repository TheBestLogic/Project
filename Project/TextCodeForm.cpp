#include "TextCodeForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Project;

TextCodeForm::TextCodeForm(void)
{
	InitializeComponent();
}

TextCodeForm::~TextCodeForm()
{
	if (components)
	{
		delete components;
	}
}

void TextCodeForm::InitializeComponent(void)
{
	this->IN_textBox = (gcnew System::Windows::Forms::TextBox());
	this->OUT_textBox = (gcnew System::Windows::Forms::TextBox());
	this->GetKey_textBox = (gcnew System::Windows::Forms::TextBox());
	this->GetKey_button = (gcnew System::Windows::Forms::Button());
	this->ClearKey_button = (gcnew System::Windows::Forms::Button());
	this->ClearText_button = (gcnew System::Windows::Forms::Button());
	this->CopyText_button = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// IN_textBox
	// 
	this->IN_textBox->Location = System::Drawing::Point(12, 48);
	this->IN_textBox->Multiline = true;
	this->IN_textBox->Name = L"IN_textBox";
	this->IN_textBox->Size = System::Drawing::Size(253, 201);
	this->IN_textBox->TabIndex = 0;
	// 
	// OUT_textBox
	// 
	this->OUT_textBox->Location = System::Drawing::Point(282, 48);
	this->OUT_textBox->Multiline = true;
	this->OUT_textBox->Name = L"OUT_textBox";
	this->OUT_textBox->Size = System::Drawing::Size(289, 201);
	this->OUT_textBox->TabIndex = 1;
	// 
	// GetKey_textBox
	// 
	this->GetKey_textBox->Location = System::Drawing::Point(12, 22);
	this->GetKey_textBox->Name = L"GetKey_textBox";
	this->GetKey_textBox->Size = System::Drawing::Size(162, 20);
	this->GetKey_textBox->TabIndex = 2;
	// 
	// GetKey_button
	// 
	this->GetKey_button->Location = System::Drawing::Point(180, 19);
	this->GetKey_button->Name = L"GetKey_button";
	this->GetKey_button->Size = System::Drawing::Size(75, 23);
	this->GetKey_button->TabIndex = 3;
	this->GetKey_button->Text = L"button1";
	this->GetKey_button->UseVisualStyleBackColor = true;
	this->GetKey_button->Click += gcnew System::EventHandler(this, &TextCodeForm::GetKey_button_Click);
	// 
	// ClearKey_button
	// 
	this->ClearKey_button->Location = System::Drawing::Point(261, 20);
	this->ClearKey_button->Name = L"ClearKey_button";
	this->ClearKey_button->Size = System::Drawing::Size(75, 23);
	this->ClearKey_button->TabIndex = 4;
	this->ClearKey_button->Text = L"button1";
	this->ClearKey_button->UseVisualStyleBackColor = true;
	this->ClearKey_button->Click += gcnew System::EventHandler(this, &TextCodeForm::ClearKey_button_Click);
	// 
	// ClearText_button
	// 
	this->ClearText_button->Location = System::Drawing::Point(416, 20);
	this->ClearText_button->Name = L"ClearText_button";
	this->ClearText_button->Size = System::Drawing::Size(75, 23);
	this->ClearText_button->TabIndex = 5;
	this->ClearText_button->Text = L"button1";
	this->ClearText_button->UseVisualStyleBackColor = true;
	this->ClearText_button->Click += gcnew System::EventHandler(this, &TextCodeForm::ClearText_button_Click);
	// 
	// CopyText_button
	// 
	this->CopyText_button->Location = System::Drawing::Point(498, 22);
	this->CopyText_button->Name = L"CopyText_button";
	this->CopyText_button->Size = System::Drawing::Size(75, 23);
	this->CopyText_button->TabIndex = 6;
	this->CopyText_button->Text = L"button1";
	this->CopyText_button->UseVisualStyleBackColor = true;
	this->CopyText_button->Click += gcnew System::EventHandler(this, &TextCodeForm::CopyText_button_Click);
	// 
	// TextCodeForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(602, 261);
	this->Controls->Add(this->CopyText_button);
	this->Controls->Add(this->ClearText_button);
	this->Controls->Add(this->ClearKey_button);
	this->Controls->Add(this->GetKey_button);
	this->Controls->Add(this->GetKey_textBox);
	this->Controls->Add(this->OUT_textBox);
	this->Controls->Add(this->IN_textBox);
	this->Name = L"TextCodeForm";
	this->Text = L"MainForm";
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void TextCodeForm::GetKey_button_Click(System::Object^  sender, System::EventArgs^  e)
{

}

System::Void TextCodeForm::ClearKey_button_Click(System::Object^  sender, System::EventArgs^  e)
{

}

System::Void TextCodeForm::ClearText_button_Click(System::Object^  sender, System::EventArgs^  e)
{

}

System::Void TextCodeForm::CopyText_button_Click(System::Object^  sender, System::EventArgs^  e)
{

}