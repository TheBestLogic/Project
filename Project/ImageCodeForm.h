#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� ImageCodeForm
	/// </summary>
	public ref class ImageCodeForm : public System::Windows::Forms::Form
	{
	public:
		ImageCodeForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~ImageCodeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	

	protected:


	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			
			// 
			// ImageCodeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->ImageCode_button);
			this->Controls->Add(this->TextCode_button);
			this->Controls->Add(this->FileCode_button);
			this->Name = L"ImageCodeForm";
			this->Text = L"ImageCodeForm";
			this->ResumeLayout(false);

		}
#pragma endregion

};
}
