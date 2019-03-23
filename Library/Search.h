#pragma once
#include "Informations.h"
#include <msclr\marshal_cppstd.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	static vector <int> Numbers;
	static int ListBoxItems = 0;
	/// <summary>
	/// Summary for Search
	/// </summary>
	public ref class Search : public System::Windows::Forms::Form
	{
	public:
		Search(void)
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
		~Search()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ListBox^  listBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Search::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(194, 261);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Wyszukaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Search::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Szukaj tytu³u:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(134, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Search::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(134, 120);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Search::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Szukaj autora:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(42, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Szukaj gatunku:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Krymina³", L"Thriller", L"Literatura obyczajowa",
					L"Literatura kobieca", L"Science-fiction", L"Biografia", L"Epos"
			});
			this->comboBox1->Location = System::Drawing::Point(134, 190);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->Text = L"Wybierz";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Search::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(45, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 41);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Przegl¹daj katalog";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Search::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(50, 406);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(250, 95);
			this->listBox1->TabIndex = 13;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Search::listBox1_SelectedIndexChanged);
			// 
			// Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(338, 565);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Search";
			this->Text = L"Search";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Numbers.clear();
			 listBox1->Items->Clear();
			 Catalog BookS;
			 vector <string> BookVec;
			 BookVec = BookS.ReadBook(1);
			 std::string SearchTitle = marshal_as<std::string>(textBox1->Text);
			 std::string SearchAuthor = marshal_as<std::string>(textBox2->Text);
			 std::string SearchType = marshal_as<std::string>(comboBox1->Text);

			 for (int i = 1; i <= 27; i++)
			 {
				 if (BookS.Title[i] == SearchTitle)
				 {
					 String^ Conversion = gcnew String(BookS.Title[i].c_str());
					 Console::WriteLine(Conversion);
					 String^ ConversionA = gcnew String(BookS.Author[i].c_str());
					 Console::WriteLine(ConversionA);
					 listBox1->Items->Add (Conversion + " - " + ConversionA);
					 Numbers.push_back(i);
				 }
				 else if (textBox1->TextLength == 0)
				 {
				 }
				
			 }
			 for (int i = 1; i <= 27; i++)
			 {
				 if (BookS.Author[i] == SearchAuthor)
				 {
					 String^ Conversion = gcnew String(BookS.Title[i].c_str());
					 Console::WriteLine(Conversion);
					 String^ ConversionA = gcnew String(BookS.Author[i].c_str());
					 Console::WriteLine(ConversionA);
					 listBox1->Items->Add(Conversion + " - " + ConversionA);
					 Numbers.push_back(i);

				 }
				 else if (textBox2->TextLength == 0)
				 {
				 }
			 }
			 for (int i = 1; i <= 27; i++)
			 {
				 if (BookS.Type[i] == SearchType)
				 {
					 String^ Conversion = gcnew String(BookS.Title[i].c_str());
					 Console::WriteLine(Conversion);
					 String^ ConversionA = gcnew String(BookS.Author[i].c_str());
					 Console::WriteLine(ConversionA);
					 listBox1->Items->Add(Conversion + " - " + ConversionA);
					 Numbers.push_back(i);
				 }
				 else if (comboBox1->Text == "Wybierz")
				 {
				 }
			 }
			 textBox1->Text = "";
			 textBox2->Text = "";
			 comboBox1->Text = "Wybierz";
			 ListBoxItems = listBox1->Items->Count;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Informations::NrOfBook = 1; 
			 Informations^ NewForm = gcnew Informations;
			 NewForm->ShowDialog();
}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
}
private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
}
private: System::Void linkLabel4_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 int ThatBook = Numbers.at(listBox1->SelectedIndex);
			Informations::NrOfBook = ThatBook;
			 Informations^ NewForm = gcnew Informations;
			 NewForm->ShowDialog();
}

};
}
