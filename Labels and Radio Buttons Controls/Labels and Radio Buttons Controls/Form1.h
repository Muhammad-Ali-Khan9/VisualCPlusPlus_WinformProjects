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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rB3;
	private: System::Windows::Forms::RadioButton^ rB2;
	private: System::Windows::Forms::RadioButton^ rB1;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rB1 = (gcnew System::Windows::Forms::RadioButton());
			this->rB2 = (gcnew System::Windows::Forms::RadioButton());
			this->rB3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(69, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Update Data";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rB3);
			this->groupBox1->Controls->Add(this->rB2);
			this->groupBox1->Controls->Add(this->rB1);
			this->groupBox1->Location = System::Drawing::Point(320, 143);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 116);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Days";
			// 
			// rB1
			// 
			this->rB1->AutoSize = true;
			this->rB1->Location = System::Drawing::Point(3, 18);
			this->rB1->Name = L"rB1";
			this->rB1->Size = System::Drawing::Size(77, 20);
			this->rB1->TabIndex = 0;
			this->rB1->TabStop = true;
			this->rB1->Text = L"Monday";
			this->rB1->UseVisualStyleBackColor = true;
			// 
			// rB2
			// 
			this->rB2->AutoSize = true;
			this->rB2->Location = System::Drawing::Point(3, 44);
			this->rB2->Name = L"rB2";
			this->rB2->Size = System::Drawing::Size(82, 20);
			this->rB2->TabIndex = 1;
			this->rB2->TabStop = true;
			this->rB2->Text = L"Tuesday";
			this->rB2->UseVisualStyleBackColor = true;
			// 
			// rB3
			// 
			this->rB3->AutoSize = true;
			this->rB3->Location = System::Drawing::Point(3, 70);
			this->rB3->Name = L"rB3";
			this->rB3->Size = System::Drawing::Size(102, 20);
			this->rB3->TabIndex = 2;
			this->rB3->TabStop = true;
			this->rB3->Text = L"Wednesday";
			this->rB3->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 402);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ S;

		S = label1->Text;

		if (rB1->Checked)
		{
			S = S->Concat(S, ",");
			S = S->Concat(S, rB1->Text);
		}
		if (rB2->Checked)
		{
			S = S->Concat(S, ",");
			S = S->Concat(S, rB2->Text);
		}
		if (rB3->Checked)
		{
			S = S->Concat(S, ",");
			S = S->Concat(S, rB3->Text);
		}

		label1->Text = S;
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "";
	}
	};
}
