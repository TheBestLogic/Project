#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ TextCodeForm
	/// </summary>
	public ref class TextCodeForm : public System::Windows::Forms::Form
	{
		System::Windows::Forms::TextBox^  IN_textBox;
		System::Windows::Forms::TextBox^  OUT_textBox;
		System::Windows::Forms::TextBox^  GetKey_textBox;
		System::Windows::Forms::Button^  GetKey_button;
		System::Windows::Forms::Button^  ClearKey_button;
		System::Windows::Forms::Button^  ClearText_button;
		System::Windows::Forms::Button^  CopyText_button;
		System::ComponentModel::Container ^components;
		

	public:
		TextCodeForm(void);

	protected:
		~TextCodeForm();

	
	private:
#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion
		System::Void GetKey_button_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void ClearKey_button_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void ClearText_button_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void CopyText_button_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
