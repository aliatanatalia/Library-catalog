#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include "Catalog.h"
#include <msclr\marshal_cppstd.h>



namespace Library {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Borrow
	/// </summary>
	public ref class Borrow : public System::Windows::Forms::Form
	{
	public: 
		Borrow(void)
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
		~Borrow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Borrow::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tytu³:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Imiê i nazwisko:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Data zwrotu:";
			// 
			// label4
			// 
			String^ TheTitle = gcnew String(Catalog::ThisIsIt.c_str());
			Console::WriteLine(TheTitle);
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(138, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = TheTitle;
			this->label4->Click += gcnew System::EventHandler(this, &Borrow::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(138, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(187, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"ZatwierdŸ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Borrow::button1_Click);
			// 
			// label5
			// 
			Catalog WhenTo;
			String^ MyDay = WhenTo.SetDay();
			String^ MyMonth = WhenTo.SetMonth();
			String^ MyYear = WhenTo.SetYear();

			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(138, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = MyDay + "-" + MyMonth + "-" + MyYear;
			this->label5->Click += gcnew System::EventHandler(this, &Borrow::label5_Click);
			// 
			// Borrow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject("BooksLib")));
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Borrow";
			this->Text = L"Borrow";
			this->Load += gcnew System::EventHandler(this, &Borrow::Borrow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Borrow_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
				 
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				label4->Text;
				textBox1->Text;
				label5->Text;
				if (textBox1->TextLength == 0)
				{
					MessageBox::Show("Wpisz swoje imiê i nazwisko!");
				}
				else
				{
					std::string BookTitle = marshal_as<std::string>(label4->Text);
					std::string YourName = marshal_as<std::string>(textBox1->Text);
					std::string BorrowDate = marshal_as<std::string>(label5->Text);
					fstream File;
					File.open("BooksBorrowed.txt", ios::app);
					File << BookTitle << endl;
					File << YourName << endl;
					File << BorrowDate << endl << endl;
					MessageBox::Show("Wypo¿yczy³eœ ksi¹¿kê");
					Borrow::Close();
				}

	}
};
}
