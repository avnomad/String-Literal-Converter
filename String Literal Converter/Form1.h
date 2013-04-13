//	Copyright (C) 2008, 2012 Vaptistis Anogeianakis <nomad@cornercase.gr>
/*
 *	This file is part of String Literal Converter.
 *
 *	String Literal Converter is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	String Literal Converter is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with String Literal Converter.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once


namespace StringLiteralConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  originalLabel;
	protected: 
	private: System::Windows::Forms::Label^  convertedLabel;
	private: System::Windows::Forms::TextBox^  originalText;
	private: System::Windows::Forms::TextBox^  convertedText;
	private: System::Windows::Forms::CheckBox^  dollarCheckBox;

	private: System::Windows::Forms::CheckBox^  printfCheckBox;
	private: System::Windows::Forms::CheckBox^  atCheckBox;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->originalLabel = (gcnew System::Windows::Forms::Label());
			this->convertedLabel = (gcnew System::Windows::Forms::Label());
			this->originalText = (gcnew System::Windows::Forms::TextBox());
			this->convertedText = (gcnew System::Windows::Forms::TextBox());
			this->dollarCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->printfCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->atCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// originalLabel
			// 
			this->originalLabel->AutoSize = true;
			this->originalLabel->Location = System::Drawing::Point(12, 3);
			this->originalLabel->Name = L"originalLabel";
			this->originalLabel->Size = System::Drawing::Size(71, 13);
			this->originalLabel->TabIndex = 0;
			this->originalLabel->Text = L"original string:";
			this->originalLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// convertedLabel
			// 
			this->convertedLabel->AutoSize = true;
			this->convertedLabel->Location = System::Drawing::Point(12, 42);
			this->convertedLabel->Name = L"convertedLabel";
			this->convertedLabel->Size = System::Drawing::Size(86, 13);
			this->convertedLabel->TabIndex = 1;
			this->convertedLabel->Text = L"converted string:";
			this->convertedLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// originalText
			// 
			this->originalText->AcceptsReturn = true;
			this->originalText->AcceptsTab = true;
			this->originalText->Location = System::Drawing::Point(12, 19);
			this->originalText->Multiline = true;
			this->originalText->Name = L"originalText";
			this->originalText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->originalText->Size = System::Drawing::Size(384, 20);
			this->originalText->TabIndex = 2;
			this->originalText->TextChanged += gcnew System::EventHandler(this, &Form1::originalText_TextChanged);
			// 
			// convertedText
			// 
			this->convertedText->AcceptsReturn = true;
			this->convertedText->AcceptsTab = true;
			this->convertedText->Location = System::Drawing::Point(12, 58);
			this->convertedText->Multiline = true;
			this->convertedText->Name = L"convertedText";
			this->convertedText->ReadOnly = true;
			this->convertedText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->convertedText->Size = System::Drawing::Size(384, 20);
			this->convertedText->TabIndex = 3;
			// 
			// dollarCheckBox
			// 
			this->dollarCheckBox->AutoSize = true;
			this->dollarCheckBox->Checked = true;
			this->dollarCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->dollarCheckBox->Location = System::Drawing::Point(145, 84);
			this->dollarCheckBox->Name = L"dollarCheckBox";
			this->dollarCheckBox->Size = System::Drawing::Size(111, 17);
			this->dollarCheckBox->TabIndex = 4;
			this->dollarCheckBox->Text = L"replace \'$\' by \'%s\'.";
			this->dollarCheckBox->UseVisualStyleBackColor = true;
			this->dollarCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox_CheckedChanged);
			// 
			// printfCheckBox
			// 
			this->printfCheckBox->AutoSize = true;
			this->printfCheckBox->Checked = true;
			this->printfCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->printfCheckBox->Location = System::Drawing::Point(12, 84);
			this->printfCheckBox->Name = L"printfCheckBox";
			this->printfCheckBox->Size = System::Drawing::Size(127, 17);
			this->printfCheckBox->TabIndex = 5;
			this->printfCheckBox->Text = L"for printf format string.";
			this->printfCheckBox->UseVisualStyleBackColor = true;
			this->printfCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Form1::printfCheckBox_CheckedChanged);
			// 
			// atCheckBox
			// 
			this->atCheckBox->AutoSize = true;
			this->atCheckBox->Checked = true;
			this->atCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->atCheckBox->Location = System::Drawing::Point(262, 84);
			this->atCheckBox->Name = L"atCheckBox";
			this->atCheckBox->Size = System::Drawing::Size(148, 17);
			this->atCheckBox->TabIndex = 6;
			this->atCheckBox->Text = L"replace \'@\' with \"\\\",\\n\\\"\"";
			this->atCheckBox->UseVisualStyleBackColor = true;
			this->atCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(408, 102);
			this->Controls->Add(this->atCheckBox);
			this->Controls->Add(this->printfCheckBox);
			this->Controls->Add(this->dollarCheckBox);
			this->Controls->Add(this->convertedText);
			this->Controls->Add(this->originalText);
			this->Controls->Add(this->convertedLabel);
			this->Controls->Add(this->originalLabel);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(60000000, 140);
			this->MinimumSize = System::Drawing::Size(416, 140);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"String Literal Converter";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_SizeChanged);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void convertProcedure(void)
		{
			const char *originalString;
			const char *convertedString;

			/*Form1::Text = "";
			Form1::Text += originalText->Text->Length;
			Form1::Text += " characters in the original string.";*/

			originalString = (const char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(originalText->Text)).ToPointer();
			convertedString = convertToStringLiteral(originalString,dollarCheckBox->Checked?'$':'\0',atCheckBox->Checked?'@':'\0',printfCheckBox->Checked);
			Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)originalString));
			System::String ^s = gcnew System::String(convertedString);
			free((void*)convertedString);
			convertedText->Text = s;		
		} // end function convertProcedure

	private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar == '\033')
					 exit(0);
			 }
	private: System::Void checkBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 convertProcedure();
			 }
private: System::Void Form1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
			 originalText->Width = Form1::Width - 32;
			 convertedText->Width = Form1::Width - 32;
		 }
private: System::Void originalText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 convertProcedure();
		 }
private: System::Void printfCheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 convertProcedure();
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 convertProcedure();
		 }
};
}

