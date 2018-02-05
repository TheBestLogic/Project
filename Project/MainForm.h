#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private: 
		System::Windows::Forms::Button^  FileCode_button;
		System::Windows::Forms::Button^  TextCode_button;
		System::Windows::Forms::Button^  ImageCode_button;
	    System::Windows::Forms::Button^  exit_button;
		System::ComponentModel::Container ^components;
	public:
		MainForm(void);

	protected:
		~MainForm();

	private:
		System::Void FileCode_button_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void TextCode_button_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void ImageCode_button_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void exit_button_Click(System::Object^  sender, System::EventArgs^  e);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void);
		
#pragma endregion

	};
}
