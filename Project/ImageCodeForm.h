#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ ImageCodeForm
	/// </summary>
	public ref class ImageCodeForm : public System::Windows::Forms::Form
	{
	public:
		ImageCodeForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
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
