#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::TrackBar^ tbR;
	private: System::Windows::Forms::TrackBar^ tbG;
	private: System::Windows::Forms::TrackBar^ tbB;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:



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
			this->tbR = (gcnew System::Windows::Forms::TrackBar());
			this->tbG = (gcnew System::Windows::Forms::TrackBar());
			this->tbB = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbR))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbB))->BeginInit();
			this->SuspendLayout();
			// 
			// tbR
			// 
			this->tbR->Location = System::Drawing::Point(121, 65);
			this->tbR->Maximum = 255;
			this->tbR->Name = L"tbR";
			this->tbR->Size = System::Drawing::Size(851, 56);
			this->tbR->TabIndex = 0;
			this->tbR->Scroll += gcnew System::EventHandler(this, &Form1::tbR_Scroll);
			// 
			// tbG
			// 
			this->tbG->Location = System::Drawing::Point(121, 127);
			this->tbG->Maximum = 255;
			this->tbG->Name = L"tbG";
			this->tbG->Size = System::Drawing::Size(851, 56);
			this->tbG->TabIndex = 1;
			this->tbG->Scroll += gcnew System::EventHandler(this, &Form1::tbG_Scroll);
			// 
			// tbB
			// 
			this->tbB->Location = System::Drawing::Point(121, 189);
			this->tbB->Maximum = 255;
			this->tbB->Name = L"tbB";
			this->tbB->Size = System::Drawing::Size(851, 56);
			this->tbB->TabIndex = 2;
			this->tbB->Scroll += gcnew System::EventHandler(this, &Form1::tbB_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"RED";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"GREEN";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"BLUE";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1003, 427);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbB);
			this->Controls->Add(this->tbG);
			this->Controls->Add(this->tbR);
			this->Name = L"Form1";
			this->Text = L"Changing Form Colour Application";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbR))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbB))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tbB_Scroll(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::FromArgb(tbR->Value, tbG->Value, tbB->Value);
	}
	private: System::Void tbR_Scroll(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::FromArgb(tbR->Value, tbG->Value, tbB->Value);
	}
	private: System::Void tbG_Scroll(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::FromArgb(tbR->Value, tbG->Value, tbB->Value);
	}
};
}
