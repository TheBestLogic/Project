#include "MainForm.h"
#include "FileCodeForm.h"
#include "TextCodeForm.h"
#include "ImageCodeForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Project; 


void MainForm::InitializeComponent(void)
{
	this->FileCode_button = (gcnew System::Windows::Forms::Button());
	this->TextCode_button = (gcnew System::Windows::Forms::Button());
	this->ImageCode_button = (gcnew System::Windows::Forms::Button());
	this->exit_button = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// FileCode_button
	// 
	this->FileCode_button->Location = System::Drawing::Point(13, 52);
	this->FileCode_button->Name = L"FileCode_button";
	this->FileCode_button->Size = System::Drawing::Size(75, 23);
	this->FileCode_button->TabIndex = 0;
	this->FileCode_button->Text = L"file_button";
	this->FileCode_button->UseVisualStyleBackColor = true;
	this->FileCode_button->Click += gcnew System::EventHandler(this, &MainForm::FileCode_button_Click);
	// 
	// TextCode_button
	// 
	this->TextCode_button->Location = System::Drawing::Point(13, 82);
	this->TextCode_button->Name = L"TextCode_button";
	this->TextCode_button->Size = System::Drawing::Size(75, 23);
	this->TextCode_button->TabIndex = 1;
	this->TextCode_button->Text = L"Text_button";
	this->TextCode_button->UseVisualStyleBackColor = true;
	this->TextCode_button->Click += gcnew System::EventHandler(this, &MainForm::TextCode_button_Click);
	// 
	// ImageCode_button
	// 
	this->ImageCode_button->Location = System::Drawing::Point(13, 112);
	this->ImageCode_button->Name = L"ImageCode_button";
	this->ImageCode_button->Size = System::Drawing::Size(75, 23);
	this->ImageCode_button->TabIndex = 2;
	this->ImageCode_button->Text = L"Img_button";
	this->ImageCode_button->UseVisualStyleBackColor = true;
	this->ImageCode_button->Click += gcnew System::EventHandler(this, &MainForm::ImageCode_button_Click);
	// 
	// exit_button
	// 
	this->exit_button->Location = System::Drawing::Point(13, 142);
	this->exit_button->Name = L"exit_button";
	this->exit_button->Size = System::Drawing::Size(75, 23);
	this->exit_button->TabIndex = 3;
	this->exit_button->Text = L"exit_button";
	this->exit_button->UseVisualStyleBackColor = true;
	this->exit_button->Click += gcnew System::EventHandler(this, &MainForm::exit_button_Click);
	// 
	// MainForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(602, 261);
	this->Controls->Add(this->exit_button);
	this->Controls->Add(this->ImageCode_button);
	this->Controls->Add(this->TextCode_button);
	this->Controls->Add(this->FileCode_button);
	this->Name = L"MainForm";
	this->Text = L"MainForm";
	this->ResumeLayout(false);

}

System::Void MainForm::FileCode_button_Click(System::Object^  sender, System::EventArgs^  e)
{
	FileCodeForm form;
	form.ShowDialog();
}

System::Void MainForm::TextCode_button_Click(System::Object^  sender, System::EventArgs^  e)
{
	TextCodeForm form;
	form.ShowDialog();
}

System::Void MainForm::ImageCode_button_Click(System::Object^  sender, System::EventArgs^  e)
{
	ImageCodeForm form;
	form.ShowDialog();
}

System::Void MainForm::exit_button_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}

MainForm::~MainForm()
{
	if (components)
	{
		delete components;
	}
}

MainForm::MainForm()
{
	InitializeComponent();
	//
	//TODO: добавьте код конструктора
	//
}