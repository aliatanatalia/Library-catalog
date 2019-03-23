#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Borrow.h"
#include <msclr\marshal_cppstd.h>
namespace Library {
 
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for Informations
	/// </summary>
	public ref class Informations : public System::Windows::Forms::Form
	{
	public: static int NrOfBook;
	public:
		Informations(void)
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
		~Informations()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Informations::typeid));
				Catalog Book;
				vector <string> Details;
				Details = Book.ReadBook(1);
				string title = Book.Title[NrOfBook];
				String^ TitleS = gcnew String(title.c_str());
				Console::WriteLine(TitleS);
				string author = Book.Author[NrOfBook];
				String^ AuthorS = gcnew String(author.c_str());
				Console::WriteLine(AuthorS);
				string date = Book.Date[NrOfBook];
				String^ DateS = gcnew String(date.c_str());
				Console::WriteLine(DateS);
				string type = Book.Type[NrOfBook];
				String^ TypeS = gcnew String(type.c_str());
				Console::WriteLine(TypeS);
				string copy = Book.Copy[NrOfBook];
				String^ CopyS = gcnew String(copy.c_str());
				Console::WriteLine(CopyS);
				string addition = Book.Addition[NrOfBook];
				String^ AdditionS = gcnew String(addition.c_str());
				Console::WriteLine(AdditionS);
				string content = Book.Content[NrOfBook];
				String^ ContentS = gcnew String(content.c_str());
				Console::WriteLine(ContentS);
			
		
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(153, 427);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Wypo¿ycz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Informations::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 427);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Poprzednia pozycja";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Informations::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(276, 427);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Nastêpna pozycja";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Informations::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Tytu³";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Autor";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Data wydania";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Gatunek";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 250);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Iloœæ egzemplarzy";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(153, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = TitleS;
			this->label6->Click += gcnew System::EventHandler(this, &Informations::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(153, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = AuthorS;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(153, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = DateS;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(153, 200);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = TypeS;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(153, 250);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = CopyS;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(28, 300);
			this->label11->Name = L"label10";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = AdditionS;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(153, 300);
			this->label12->Name = L"label10";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = ContentS;
			// 
			// Informations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject("BooksLib")));
			this->ClientSize = System::Drawing::Size(385, 476);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Informations";
			this->Text = L"Informations";
			this->Load += gcnew System::EventHandler(this, &Informations::Informations_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void Informations_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				Catalog BookD;
				vector <string> BookDetails;
				BookDetails = BookD.ReadBook(1);
				fstream File2;
				File2.open ("BooksBorrowed.txt", ios::in);
				int Checker = 0;
				std::string StringSet = marshal_as<std::string>(label6->Text);
				Catalog::ThisIsIt = StringSet;
				string Line;
				while (getline(File2, Line))
				{
					if (Line == BookD.Title[NrOfBook])
					{
						Checker ++;
					}
				}
				int CopyNr = Convert::ToInt32(label10->Text);
				if (Checker >= CopyNr)
				{
					MessageBox::Show("Wszystkie egzemplarze zosta³y wypo¿yczone!");
				}
				else
				{
					Borrow^ NewForm = gcnew Borrow;
					NewForm->ShowDialog();
				}
				Checker = 0;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (NrOfBook == 1)
				 {
					 NrOfBook = 27;
				 }
				 else
				 {
					 NrOfBook = NrOfBook - 1;
				 }
				 Catalog Book;
				 vector <string> Details;
				 Details = Book.ReadBook(1);
				 string title = Book.Title[NrOfBook];
				 String^ TitleS = gcnew String(title.c_str());
				 Console::WriteLine(TitleS);
				 string author = Book.Author[NrOfBook];
				 String^ AuthorS = gcnew String(author.c_str());
				 Console::WriteLine(AuthorS);
				 string date = Book.Date[NrOfBook];
				 String^ DateS = gcnew String(date.c_str());
				 Console::WriteLine(DateS);
				 string type = Book.Type[NrOfBook];
				 String^ TypeS = gcnew String(type.c_str());
				 Console::WriteLine(TypeS);
				 string copy = Book.Copy[NrOfBook];
				 String^ CopyS = gcnew String(copy.c_str());
				 Console::WriteLine(CopyS);
				 string addition = Book.Addition[NrOfBook];
				 String^ AdditionS = gcnew String(addition.c_str());
				 Console::WriteLine(AdditionS);
				 string content = Book.Content[NrOfBook];
				 String^ ContentS = gcnew String(content.c_str());
				 Console::WriteLine(ContentS);
				 label6->Text = TitleS;
				 label7->Text = AuthorS;
				 label8->Text = DateS;
				 label9->Text = TypeS;
				 label10->Text = CopyS;
				 label11->Text = AdditionS;
				 label12->Text = ContentS;
	}

	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (NrOfBook == 27)
				 {
					 NrOfBook = 1;
				 }
				 else
				 {
					 NrOfBook = NrOfBook + 1;
				 }
				 Catalog Book;
				 vector <string> Details;
				 Details = Book.ReadBook(1);
				 string title = Book.Title[NrOfBook];
				 String^ TitleS = gcnew String(title.c_str());
				 Console::WriteLine(TitleS);
				 string author = Book.Author[NrOfBook];
				 String^ AuthorS = gcnew String(author.c_str());
				 Console::WriteLine(AuthorS);
				 string date = Book.Date[NrOfBook];
				 String^ DateS = gcnew String(date.c_str());
				 Console::WriteLine(DateS);
				 string type = Book.Type[NrOfBook];
				 String^ TypeS = gcnew String(type.c_str());
				 Console::WriteLine(TypeS);
				 string copy = Book.Copy[NrOfBook];
				 String^ CopyS = gcnew String(copy.c_str());
				 Console::WriteLine(CopyS);
				 string addition = Book.Addition[NrOfBook];
				 String^ AdditionS = gcnew String(addition.c_str());
				 Console::WriteLine(AdditionS);
				 string content = Book.Content[NrOfBook];
				 String^ ContentS = gcnew String(content.c_str());
				 Console::WriteLine(ContentS);
				 label6->Text = TitleS;
				 label7->Text = AuthorS;
				 label8->Text = DateS;
				 label9->Text = TypeS;
				 label10->Text = CopyS;
				 label11->Text = AdditionS;
				 label12->Text = ContentS;
	}
};
}
