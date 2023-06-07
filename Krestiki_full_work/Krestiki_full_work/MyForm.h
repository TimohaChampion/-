#pragma once
#include <Windows.h>
#include<iostream>
int k = 0;
namespace Krestikifullwork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ krestiki
	/// </summary>
	public ref class krestiki : public System::Windows::Forms::Form
	{
	public:
		krestiki(void)
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
		~krestiki()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label1;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(53, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 78);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &krestiki::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(142, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 78);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &krestiki::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(231, 35);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 78);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &krestiki::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(53, 119);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 78);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &krestiki::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(142, 119);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 78);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &krestiki::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(231, 119);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 78);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &krestiki::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(53, 203);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(83, 78);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &krestiki::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(142, 203);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(83, 78);
			this->button8->TabIndex = 7;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &krestiki::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(231, 203);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(83, 78);
			this->button9->TabIndex = 8;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &krestiki::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(142, 302);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(83, 45);
			this->button10->TabIndex = 9;
			this->button10->Text = L"«аново";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &krestiki::button10_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(231, 302);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"label1";
			// 
			// krestiki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(365, 359);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(391, 398);
			this->MinimumSize = System::Drawing::Size(381, 398);
			this->Name = L"krestiki";
			this->Text = L" рестики и нолики";
			this->Load += gcnew System::EventHandler(this, &krestiki::krestiki_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//MessageBox::Show("¬озможно, не все пол€ заполнены\n ѕроверьте введенные данные!");

	private: System::Void krestiki_Load(System::Object^ sender, System::EventArgs^ e) {
		//label1->Text = Convert::ToString(k);
		button1->Text = "";
		button2->Text = "";
		button3->Text = "";
		button4->Text = "";
		button5->Text = "";
		button6->Text = "";
		button7->Text = "";
		button8->Text = "";
		button9->Text = "";
		label1->Text = "";
		printFunction();


	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		value++;
		if (value % 2 == 0)k = 0;
		else k = 1;
		Qq = 0;


		button1->Text = "";
		button2->Text = "";
		button3->Text = "";
		button4->Text = "";
		button5->Text = "";
		button6->Text = "";
		button7->Text = "";
		button8->Text = "";
		button9->Text = "";
		function_color_all();
		if (value % 2 == 1 && k == 1) {
			srand(time(0));
			id = rand() % 4 + 1;
			if (id == 1)if (button1->Text == "")button1->Text = "+";
			if (id == 2)if (button3->Text == "")button3->Text = "+";
			if (id == 3)if (button7->Text == "")button7->Text = "+";
			if (id == 4)if (button9->Text == "")button9->Text = "+";

		}
		
		
	}
	public:

		static int id = 1;
		static int value = 0;// счетчик дл€ смены крестиков и ноликов(пользователь начинает с крестиков)
	
		// функци€ вывода информации игроку
		void printFunction() {
			if (value % 2 == 0) {
				if (k % 2 == 0) {
					label1->Text = "’од игрока!";
				}
				else {
					label1->Text = "’од компьютера!";
				}
			}
			else {
				if (k % 2 == 0) {
					label1->Text = "’од компьютера!";
				}
				else {
					label1->Text = "’од игрока!";
				}
			}
		}


		// функци€ окраски всего пол€
		void function_color_all() {
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			

		}
	
		static int Qq = 0; // счетчик дл€ ничьей

		// функци€ выделени€ цветом при выигрыше
		void WinColorFunction() {
			if (button1->Text == "+" && button2->Text == "+" && button3->Text == "+") {
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button4->Text == "+" && button5->Text == "+" && button6->Text == "+") {
				this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button7->Text == "+" && button8->Text == "+" && button9->Text == "+") {
				this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button1->Text == "+" && button4->Text == "+" && button7->Text == "+") {
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button2->Text == "+" && button5->Text == "+" && button8->Text == "+") {
				this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button3->Text == "+" && button6->Text == "+" && button9->Text == "+") {
				this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button1->Text == "+" && button5->Text == "+" && button9->Text == "+") {
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button3->Text == "+" && button5->Text == "+" && button7->Text == "+") {
				this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button1->Text == "o" && button2->Text == "o" && button3->Text == "o") {
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button4->Text == "o" && button5->Text == "o" && button6->Text == "o") {
				this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button7->Text == "o" && button8->Text == "o" && button9->Text == "o") {
				this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button1->Text == "o" && button4->Text == "o" && button7->Text == "o") {
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button2->Text == "o" && button5->Text == "o" && button8->Text == "o") {
				this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button3->Text == "o" && button6->Text == "o" && button9->Text == "o") {
				this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button1->Text == "o" && button5->Text == "o" && button9->Text == "o") {
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else if (button3->Text == "o" && button5->Text == "o" && button7->Text == "o") {
				this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			
		}
		

		// проверка на выигрыш 
		bool CheckWin() {
			if (button1->Text == "+" && button2->Text == "+" && button3->Text == "+" ||
				button4->Text == "+" && button5->Text == "+" && button6->Text == "+" ||
				button7->Text == "+" && button8->Text == "+" && button9->Text == "+" ||
				button1->Text == "+" && button4->Text == "+" && button7->Text == "+" ||
				button2->Text == "+" && button5->Text == "+" && button8->Text == "+" ||
				button3->Text == "+" && button6->Text == "+" && button9->Text == "+" ||
				button1->Text == "+" && button5->Text == "+" && button9->Text == "+" ||
				button3->Text == "+" && button5->Text == "+" && button7->Text == "+" ||
				button1->Text == "o" && button2->Text == "o" && button3->Text == "o" ||
				button4->Text == "o" && button5->Text == "o" && button6->Text == "o" ||
				button7->Text == "o" && button8->Text == "o" && button9->Text == "o" ||
				button1->Text == "o" && button4->Text == "o" && button7->Text == "o" ||
				button2->Text == "o" && button5->Text == "o" && button8->Text == "o" ||
				button3->Text == "o" && button6->Text == "o" && button9->Text == "o" ||
				button1->Text == "o" && button5->Text == "o" && button9->Text == "o" ||
				button3->Text == "o" && button5->Text == "o" && button7->Text == "o")
			{
				WinColorFunction();
				return true;
			}

			return false;
		}

		// проверка на ничью
		bool CheckPlaces() {
			if (button1->Text != "" &&
				button2->Text != "" &&
				button3->Text != "" &&
				button4->Text != "" &&
				button5->Text != "" &&
				button6->Text != "" &&
				button7->Text != "" &&
				button8->Text != "" &&
				button9->Text != ""
				) {
				if (Qq == 0)
					MessageBox::Show("Ќ»„№я!");
				Qq++;
				return false;
			}
			return true;
		}


		// проверка на предвыигрыш y o
		int CompCheckWinO() {
			if (button1->Text == "o" && button2->Text == "o" && button3->Text == "")return 3;
			if (button1->Text == "o" && button5->Text == "o" && button9->Text == "")return 9;
			if (button1->Text == "o" && button4->Text == "o" && button7->Text == "")return 7;
			if (button2->Text == "o" && button5->Text == "o" && button8->Text == "")return 8;
			if (button2->Text == "o" && button3->Text == "o" && button1->Text == "")return 1;
			if (button3->Text == "o" && button6->Text == "o" && button9->Text == "")return 9;
			if (button3->Text == "o" && button5->Text == "o" && button7->Text == "")return 7;
			if (button4->Text == "o" && button5->Text == "o" && button6->Text == "")return 6;
			if (button4->Text == "o" && button7->Text == "o" && button1->Text == "")return 1;
			if (button5->Text == "o" && button6->Text == "o" && button4->Text == "")return 4;
			if (button5->Text == "o" && button7->Text == "o" && button3->Text == "")return 3;
			if (button5->Text == "o" && button8->Text == "o" && button2->Text == "")return 2;
			if (button5->Text == "o" && button9->Text == "o" && button1->Text == "")return 1;
			if (button6->Text == "o" && button9->Text == "o" && button3->Text == "")return 3;
			if (button7->Text == "o" && button8->Text == "o" && button9->Text == "")return 9;
			if (button8->Text == "o" && button9->Text == "o" && button7->Text == "")return 7;
			//
			if (button1->Text == "o" && button3->Text == "o" && button2->Text == "")return 2;
			if (button4->Text == "o" && button6->Text == "o" && button5->Text == "")return 5;
			if (button7->Text == "o" && button9->Text == "o" && button8->Text == "")return 8;
			if (button1->Text == "o" && button7->Text == "o" && button4->Text == "")return 4;
			if (button2->Text == "o" && button8->Text == "o" && button5->Text == "")return 5;
			if (button3->Text == "o" && button9->Text == "o" && button6->Text == "")return 6;
			if (button1->Text == "o" && button9->Text == "o" && button5->Text == "")return 5;
			if (button3->Text == "o" && button7->Text == "o" && button5->Text == "")return 5;
			return -1;

		}


		// проверка на предвыигрыш у +
		int CompCheck() { 
			if (button1->Text == "+" && button2->Text == "+" && button3->Text == "")return 3;
			if (button1->Text == "+" && button5->Text == "+" && button9->Text == "")return 9;
			if (button1->Text == "+" && button4->Text == "+" && button7->Text == "")return 7;
			if (button2->Text == "+" && button5->Text == "+" && button8->Text == "")return 8;
			if (button2->Text == "+" && button3->Text == "+" && button1->Text == "")return 1;
			if (button3->Text == "+" && button6->Text == "+" && button9->Text == "")return 9;
			if (button3->Text == "+" && button5->Text == "+" && button7->Text == "")return 7;
			if (button4->Text == "+" && button5->Text == "+" && button6->Text == "")return 6;
			if (button4->Text == "+" && button7->Text == "+" && button1->Text == "")return 1;
			if (button5->Text == "+" && button6->Text == "+" && button4->Text == "")return 4;
			if (button5->Text == "+" && button7->Text == "+" && button3->Text == "")return 3;
			if (button5->Text == "+" && button8->Text == "+" && button2->Text == "")return 2;
			if (button5->Text == "+" && button9->Text == "+" && button1->Text == "")return 1;
			if (button6->Text == "+" && button9->Text == "+" && button3->Text == "")return 3;
			if (button7->Text == "+" && button8->Text == "+" && button9->Text == "")return 9;
			if (button8->Text == "+" && button9->Text == "+" && button7->Text == "")return 7;
			//
			if (button1->Text == "+" && button3->Text == "+" && button2->Text == "")return 2;
			if (button4->Text == "+" && button6->Text == "+" && button5->Text == "")return 5;
			if (button7->Text == "+" && button9->Text == "+" && button8->Text == "")return 8;
			if (button1->Text == "+" && button7->Text == "+" && button4->Text == "")return 4;
			if (button2->Text == "+" && button8->Text == "+" && button5->Text == "")return 5;
			if (button3->Text == "+" && button9->Text == "+" && button6->Text == "")return 6;
			if (button1->Text == "+" && button9->Text == "+" && button5->Text == "")return 5;
			if (button3->Text == "+" && button7->Text == "+" && button5->Text == "")return 5;
			return -1;

		}
		
		
		int II_function() {


			srand(time(0));
			static int big_value = id;//rand() % 4 + 1;
			if (k == 0) {

				if (big_value == 1) {
					return 1;
				}
				if (big_value == 2) {
					return 3;
				}
				if (big_value == 3) {
					return 7;
				}
				if (big_value == 4) {
					return 9;
				}

			}

			if (k == 2) {
				if (big_value == 1 && button9->Text == "") {
					return 9;
				}
				else if (big_value == 2 && button7->Text == "") {
					return 7;
				}
				else if (big_value == 3 && button3->Text == "") {
					return 3;
				}
				else if (big_value == 4 && button1->Text == "") {
					return 1;
				}
				else {
					return 5;
				}
			}
			if (k == 4) {
				if (CompCheckWinO() != -1) {
					if (CompCheckWinO() == 1)return 1;
					if (CompCheckWinO() == 2)return 2;
					if (CompCheckWinO() == 3)return 3;
					if (CompCheckWinO() == 4)return 4;
					if (CompCheckWinO() == 5)return 5;
					if (CompCheckWinO() == 6)return 6;
					if (CompCheckWinO() == 7)return 7;
					if (CompCheckWinO() == 8)return 8;
					if (CompCheckWinO() == 9)return 9;
				}
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}

				else {
					if (button5->Text == "+") {
						if (big_value == 1 && button2->Text == "") {
							return 2;
						}
						else if (big_value == 1 && button4->Text == "") {
							return 4;
						}
						else if (big_value == 2 && button2->Text == "") {
							return 2;
						}
						else if (big_value == 2 && button6->Text == "") {
							return 6;
						}
						else if (big_value == 3 && button4->Text == "") {
							return 4;
						}
						else if (big_value == 3 && button8->Text == "") {
							return 8;
						}
						else if (big_value == 4 && button8->Text == "") {
							return 8;
						}
						else if (big_value == 4 && button6->Text == "") {
							return 6;
						}
					}

					else {
						if (big_value == 1 && button9->Text == "+") {
							if (button7->Text == "")return 7;
							if (button3->Text == "")return 3;
						}
						if (big_value == 2 && button7->Text == "+") {
							if (button1->Text == "")return 1;
							if (button9->Text == "")return 9;
						}
						if (big_value == 3 && button3->Text == "+") {
							if (button9->Text == "")return 9;
							if (button1->Text == "")return 1;
						}
						if (big_value == 4 && button1->Text == "+") {
							if (button3->Text == "")return 3;
							if (button7->Text == "")return 7;
						}
					}
				}

			}

			if (k == 6) {
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}
				if (CompCheckWinO() != -1) {
					if (CompCheckWinO() == 1)return 1;
					if (CompCheckWinO() == 2)return 2;
					if (CompCheckWinO() == 3)return 3;
					if (CompCheckWinO() == 4)return 4;
					if (CompCheckWinO() == 5)return 5;
					if (CompCheckWinO() == 6)return 6;
					if (CompCheckWinO() == 7)return 7;
					if (CompCheckWinO() == 8)return 8;
					if (CompCheckWinO() == 9)return 9;
				}
				else {
					if (button1->Text == "")return 1;
					if (button2->Text == "")return 2;
					if (button3->Text == "")return 3;
					if (button4->Text == "")return 4;
					if (button5->Text == "")return 5;
					if (button6->Text == "")return 6;
					if (button7->Text == "")return 7;
					if (button8->Text == "")return 8;
					if (button9->Text == "")return 9;

				}
			}
			if (k == 8) {
				if (CompCheckWinO() != -1) {
					if (CompCheckWinO() == 1)return 1;
					if (CompCheckWinO() == 2)return 2;
					if (CompCheckWinO() == 3)return 3;
					if (CompCheckWinO() == 4)return 4;
					if (CompCheckWinO() == 5)return 5;
					if (CompCheckWinO() == 6)return 6;
					if (CompCheckWinO() == 7)return 7;
					if (CompCheckWinO() == 8)return 8;
					if (CompCheckWinO() == 9)return 9;
				}
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}
				else {
					if (button1->Text == "")return 1;
					if (button2->Text == "")return 2;
					if (button3->Text == "")return 3;
					if (button4->Text == "")return 4;
					if (button5->Text == "")return 5;
					if (button6->Text == "")return 6;
					if (button7->Text == "")return 7;
					if (button8->Text == "")return 8;
					if (button9->Text == "")return 9;

				}
			}


		}


		int II_functionO() {

			if (k == 1) {
				if (button5->Text == "+") {
					return 1;
				}
				else {
					return 5;
				}
			}

			if (k == 3) {
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}
				if (button5->Text == "o") {
					if (button2->Text == "")return 2;
					if (button8->Text == "")return 8;
					if (button4->Text == "")return 4;
				}
				else {
					if (button4->Text == "") {
						return 4;
					}
					if (button2->Text == "") {
						return 2;
					}
				}
			}

			if (k == 5) {
				if (CompCheckWinO() != -1) {
					if (CompCheckWinO() == 1)return 1;
					if (CompCheckWinO() == 2)return 2;
					if (CompCheckWinO() == 3)return 3;
					if (CompCheckWinO() == 4)return 4;
					if (CompCheckWinO() == 5)return 5;
					if (CompCheckWinO() == 6)return 6;
					if (CompCheckWinO() == 7)return 7;
					if (CompCheckWinO() == 8)return 8;
					if (CompCheckWinO() == 9)return 9;
				}
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}
				else {
					if (button3->Text == "")return 3;
					if (button7->Text == "")return 7;
					if (button9->Text == "")return 9;
				}
			}

			if (k == 7) {
				if (CompCheckWinO() != -1) {
					if (CompCheckWinO() == 1)return 1;
					if (CompCheckWinO() == 2)return 2;
					if (CompCheckWinO() == 3)return 3;
					if (CompCheckWinO() == 4)return 4;
					if (CompCheckWinO() == 5)return 5;
					if (CompCheckWinO() == 6)return 6;
					if (CompCheckWinO() == 7)return 7;
					if (CompCheckWinO() == 8)return 8;
					if (CompCheckWinO() == 9)return 9;
				}
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}
				else {
					if (button1->Text == "")return 1;
					if (button2->Text == "")return 2;
					if (button3->Text == "")return 3;
					if (button4->Text == "")return 4;
					if (button5->Text == "")return 5;
					if (button6->Text == "")return 6;
					if (button7->Text == "")return 7;
					if (button8->Text == "")return 8;
					if (button9->Text == "")return 9;
				}
			}
			/*
			if (k == 1) {
				if (button1->Text == "+" ){
					//button2->Text = "o";
					return 2;
				}
				else if (button3->Text == "+") {
					//button2->Text = "o";
					return 2;
				}
				else if (button7->Text == "+") {
					//button8->Text = "o";
					return 8;
				}
				else if (button9->Text == "+") {
					//button8->Text = "o";
					return 8;
				}
				else {
					if (button2->Text == "")return 2;
					if (button8->Text == "")return 8;

				}
			}

			if (k == 3) {
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}
				else {
					if (button5->Text == "")return 5;

				}
			}

			if (k == 5) {
				if (CompCheckWin() != -1) {
					if (CompCheckWin() == 1)return 1;
					if (CompCheckWin() == 2)return 2;
					if (CompCheckWin() == 3)return 3;
					if (CompCheckWin() == 4)return 4;
					if (CompCheckWin() == 5)return 5;
					if (CompCheckWin() == 6)return 6;
					if (CompCheckWin() == 7)return 7;
					if (CompCheckWin() == 8)return 8;
					if (CompCheckWin() == 9)return 9;
				}
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}
				if()
			}

			*/
			/*
			if (k == 1) {
				if (button1->Text == "+") {
					mass[0] = 9;
					return 9;
				}
				if (button7->Text == "+") {
					mass[0] = 3;
					return 3;
				}
				if (button3->Text == "+") {
					mass[0] = 7;
					return 7;
				}
				if (button9->Text == "+") {
					mass[0] = 1;
					return 1;
				}
				if (CornerCell == 1) {
					if (button1->Text == "") {
						mass[0] = 1;
						return 1;
					}
					else {
						CornerCell = 2;
					}
				}
				if (CornerCell == 2) {
					if (button3->Text == "") {
						mass[0] = 3;
						return 3;
					}
					else {
						CornerCell = 3;
					}
				}
				if (CornerCell == 3) {
					if (button7->Text == "") {
						mass[0] = 7;
						return 7;
					}
					else {
						CornerCell = 4;
					}
				}
				if (CornerCell == 4) {
					if (button9->Text == "") {
						mass[0] = 9;
						return 9;
					}
					else MessageBox::Show("ERROR!");
				}
			}

			if (k == 3) {
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}
				else {
					if (button5->Text == "+") {
						if (button1->Text == "") {
							mass[1] = 1;
							return 1;
						}
						if (button3->Text == "") {
							mass[1] = 3;
							return 3;
						}
						if (button7->Text == "") {
							mass[1] = 7;
							return 7;
						}
						if (button5->Text == "") {
							mass[1] = 9;
							return 9;
						}
					}
					if (mass[0] == 1) {
						if (button9->Text == "") {
							mass[1] = 9;
							return 9;
						}
						else {
							if (button5->Text == "") {
								mass[1] = 5;
								return 5;
							}
							if (button3->Text == "") {
								mass[1] = 3;
								return 3;
							}
							if (button7->Text == "") {
								mass[1] = 7;
								return 7;
							}
							if (button2->Text == "") {
								mass[1] = 2;
								return 2;
							}
							if (button4->Text == "") {
								mass[1] = 4;
								return 4;
							}
							if (button8->Text == "") {
								mass[1] = 8;
								return 8;
							}
							if (button6->Text == "") {
								mass[1] = 6;
								return 6;
							}
						}
					}
					 if (mass[0] == 3) {
						if (button7->Text == "") {
							mass[1] = 7;
							return 7;
						}
						else {
							if (button5->Text == "") {
								mass[1] = 5;
								return 5;
							}
							if (button1->Text == "") {
								mass[1] = 1;
								return 1;
							}
							if (button9->Text == "") {
								mass[1] = 9;
								return 9;
							}
							if (button2->Text == "") {
								mass[1] = 2;
								return 2;
							}
							if (button4->Text == "") {
								mass[1] = 4;
								return 4;
							}
							if (button8->Text == "") {
								mass[1] = 8;
								return 8;
							}
							if (button6->Text == "") {
								mass[1] = 6;
								return 6;
							}
						}
					}
					 if (mass[0] == 7) {
						 if (button3->Text == "") {
							 mass[1] = 3;
							 return 3;
						 }
						 else {
							 if (button5->Text == "") {
								 mass[1] = 5;
								 return 5;
							 }
							 if (button1->Text == "") {
								 mass[1] = 1;
								 return 1;
							 }
							 if (button9->Text == "") {
								 mass[1] = 9;
								 return 9;
							 }
							 if (button2->Text == "") {
								 mass[1] = 2;
								 return 2;
							 }
							 if (button4->Text == "") {
								 mass[1] = 4;
								 return 4;
							 }
							 if (button8->Text == "") {
								 mass[1] = 8;
								 return 8;
							 }
							 if (button6->Text == "") {
								 mass[1] = 6;
								 return 6;
							 }
						 }
					 }
					 if (mass[0] == 9) {
						 if (button1->Text == "") {
							 mass[1] = 1;
							 return 1;
						 }
						 else {
							 if (button5->Text == "") {
								 mass[1] = 5;
								 return 5;
							 }
							 if (button3->Text == "") {
								 mass[1] = 3;
								 return 3;
							 }
							 if (button7->Text == "") {
								 mass[1] = 7;
								 return 7;
							 }
							 if (button2->Text == "") {
								 mass[1] = 2;
								 return 2;
							 }
							 if (button4->Text == "") {
								 mass[1] = 4;
								 return 4;
							 }
							 if (button8->Text == "") {
								 mass[1] = 8;
								 return 8;
							 }
							 if (button6->Text == "") {
								 mass[1] = 6;
								 return 6;
							 }
						 }
					 }
					 else {
						 if (button1->Text == "") {
							 mass[1] = 1;
							 return 1;
						 }
						 if (button3->Text == "") {
							 mass[1] = 3;
							 return 3;
						 }
						 if (button7->Text == "") {
							 mass[1] = 7;
							 return 7;
						 }
						 if (button9->Text == "") {
							 mass[1] = 9;
							 return 9;
						 }
						 if (button2->Text == "") {
							 mass[1] = 2;
							 return 2;
						 }
						 if (button4->Text == "") {
							 mass[1] = 4;
							 return 4;
						 }
						 if (button8->Text == "") {
							 mass[1] = 8;
							 return 8;
						 }
						 if (button6->Text == "") {
							 mass[1] = 6;
							 return 6;
						 }
					 }
				}

			}

			if (k == 5) {
				if (CompCheckWin() != -1) {
					if (CompCheckWin() == 1)return 1;
					if (CompCheckWin() == 2)return 2;
					if (CompCheckWin() == 3)return 3;
					if (CompCheckWin() == 4)return 4;
					if (CompCheckWin() == 5)return 5;
					if (CompCheckWin() == 6)return 6;
					if (CompCheckWin() == 7)return 7;
					if (CompCheckWin() == 8)return 8;
					if (CompCheckWin() == 9)return 9;
				}
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}
				else {
					if (mass[0] == 1 && mass[1] == 9) {
						if (button5->Text == "") {
							mass[1] = 5;
							return 5;
						}
						else {
							if (button3->Text == "") {
								mass[1] = 3;
								return 3;
							}
							else if (button7->Text == "") {
								mass[1] = 7;
								return 7;
							}
							else {
								if (button2->Text == "")return 2;
								if (button4->Text == "")return 4;
								if (button6->Text == "")return 6;
								if (button8->Text == "")return 8;
							}
						}
					}
					if (mass[0] == 3 && mass[1] == 7) {
						if (button5->Text == "") {
							mass[1] = 5;
							return 5;
						}
						else {
							if (button1->Text == "") {
								mass[1] = 1;
								return 1;
							}
							else if (button9->Text == "") {
								mass[1] = 9;
								return 9;
							}
							else {
								if (button2->Text == "")return 2;
								if (button4->Text == "")return 4;
								if (button6->Text == "")return 6;
								if (button8->Text == "")return 8;
							}
						}
					}
				}


			}

			if (k == 7) {
				if (CompCheckWin() != -1) {
					if (CompCheckWin() == 1)return 1;
					if (CompCheckWin() == 2)return 2;
					if (CompCheckWin() == 3)return 3;
					if (CompCheckWin() == 4)return 4;
					if (CompCheckWin() == 5)return 5;
					if (CompCheckWin() == 6)return 6;
					if (CompCheckWin() == 7)return 7;
					if (CompCheckWin() == 8)return 8;
					if (CompCheckWin() == 9)return 9;
				}
				if (CompCheck() != -1) {// проверка на предвыигрышную комбинацию пользовател€
					if (CompCheck() == 1)return 1;
					if (CompCheck() == 2)return 2;
					if (CompCheck() == 3)return 3;
					if (CompCheck() == 4)return 4;
					if (CompCheck() == 5)return 5;
					if (CompCheck() == 6)return 6;
					if (CompCheck() == 7)return 7;
					if (CompCheck() == 8)return 8;
					if (CompCheck() == 9)return 9;
				}
				else {
					if (button2->Text == "")return 2;
					if (button4->Text == "")return 4;
					if (button6->Text == "")return 6;
					if (button8->Text == "")return 8;
					if (button1->Text == "")return 1;
					if (button3->Text == "")return 3;
					if (button5->Text == "")return 5;
					if (button7->Text == "")return 7;
					if (button9->Text == "")return 9;

				}
			}

			*/
		}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckPlaces() && button1->Text == "" && k != -1) { //если есть свободные €чейки и кнопка не зан€та
			if (k % 2 == 0 && value % 2 == 0) {// если счетчик кратен 0(ход пользовател€)

				printFunction();
				button1->Text = "+";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}

				CheckPlaces();
				int id = II_functionO();
				if (id == 1)if (button1->Text == "")button1->Text = "o";
				if (id == 2)if (button2->Text == "")button2->Text = "o";
				if (id == 3)if (button3->Text == "")button3->Text = "o";
				if (id == 4)if (button4->Text == "")button4->Text = "o";
				if (id == 5)if (button5->Text == "")button5->Text = "o";
				if (id == 6)if (button6->Text == "")button6->Text = "o";
				if (id == 7)if (button7->Text == "")button7->Text = "o";
				if (id == 8)if (button8->Text == "")button8->Text = "o";
				if (id == 9)if (button9->Text == "")button9->Text = "o";

				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();

			}
			if (k % 2 == 1 && value % 2 == 1) {
				printFunction();
				button1->Text = "o";
				bool flag = true;
				k++;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					

					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
					flag = false;
				}

				CheckPlaces();


				int id = II_function();
				if (id == 1)if (button1->Text == "")button1->Text = "+";
				if (id == 2)if (button2->Text == "")button2->Text = "+";
				if (id == 3)if (button3->Text == "")button3->Text = "+";
				if (id == 4)if (button4->Text == "")button4->Text = "+";
				if (id == 5)if (button5->Text == "")button5->Text = "+";
				if (id == 6)if (button6->Text == "")button6->Text = "+";
				if (id == 7)if (button7->Text == "")button7->Text = "+";
				if (id == 8)if (button8->Text == "")button8->Text = "+";
				if (id == 9)if (button9->Text == "")button9->Text = "+";

				k++;

				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					

					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();

			}
		}
		else {
			MessageBox::Show("Ё“ј я„≈… ј «јЌя“ј\n¬џЅ≈–»“≈ ƒ–”√”ё!");
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckPlaces() && button2->Text == "" && k != -1) { //если есть свободные €чейки и кнопка не зан€та
			if (k % 2 == 0 && value % 2 == 0) {// если счетчик кратен 0(ход пользовател€)

				printFunction();

				button2->Text = "+";
				k++;

				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}
				CheckPlaces();
				int id = II_functionO();

				if (id == 1)if (button1->Text == "")button1->Text = "o";
				if (id == 2)if (button2->Text == "")button2->Text = "o";
				if (id == 3)if (button3->Text == "")button3->Text = "o";
				if (id == 4)if (button4->Text == "")button4->Text = "o";
				if (id == 5)if (button5->Text == "")button5->Text = "o";
				if (id == 6)if (button6->Text == "")button6->Text = "o";
				if (id == 7)if (button7->Text == "")button7->Text = "o";
				if (id == 8)if (button8->Text == "")button8->Text = "o";
				if (id == 9)if (button9->Text == "")button9->Text = "o";
				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();
			}
			if (k % 2 == 1 && value % 2 == 1) {
				printFunction();
				button2->Text = "o";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}

				CheckPlaces();
				int id = II_function();
				if (id == 1)if (button1->Text == "")button1->Text = "+";
				if (id == 2)if (button2->Text == "")button2->Text = "+";
				if (id == 3)if (button3->Text == "")button3->Text = "+";
				if (id == 4)if (button4->Text == "")button4->Text = "+";
				if (id == 5)if (button5->Text == "")button5->Text = "+";
				if (id == 6)if (button6->Text == "")button6->Text = "+";
				if (id == 7)if (button7->Text == "")button7->Text = "+";
				if (id == 8)if (button8->Text == "")button8->Text = "+";
				if (id == 9)if (button9->Text == "")button9->Text = "+";

				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();

			}
		}
		else {
			MessageBox::Show("Ё“ј я„≈… ј «јЌя“ј\n¬џЅ≈–»“≈ ƒ–”√”ё!");
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckPlaces() && button3->Text == "" && k != -1) { //если есть свободные €чейки и кнопка не зан€та
			if (k % 2 == 0 && value % 2 == 0) {// если счетчик кратен 0(ход пользовател€)
				printFunction();

				button3->Text = "+";
				k++;

				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}
				CheckPlaces();
				int id = II_functionO();

				if (id == 1)if (button1->Text == "")button1->Text = "o";
				if (id == 2)if (button2->Text == "")button2->Text = "o";
				if (id == 3)if (button3->Text == "")button3->Text = "o";
				if (id == 4)if (button4->Text == "")button4->Text = "o";
				if (id == 5)if (button5->Text == "")button5->Text = "o";
				if (id == 6)if (button6->Text == "")button6->Text = "o";
				if (id == 7)if (button7->Text == "")button7->Text = "o";
				if (id == 8)if (button8->Text == "")button8->Text = "o";
				if (id == 9)if (button9->Text == "")button9->Text = "o";
				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();
			}
			if (k % 2 == 1 && value % 2 == 1) {
				printFunction();
				button3->Text = "o";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}

				CheckPlaces();
				int id = II_function();
				if (id == 1)if (button1->Text == "")button1->Text = "+";
				if (id == 2)if (button2->Text == "")button2->Text = "+";
				if (id == 3)if (button3->Text == "")button3->Text = "+";
				if (id == 4)if (button4->Text == "")button4->Text = "+";
				if (id == 5)if (button5->Text == "")button5->Text = "+";
				if (id == 6)if (button6->Text == "")button6->Text = "+";
				if (id == 7)if (button7->Text == "")button7->Text = "+";
				if (id == 8)if (button8->Text == "")button8->Text = "+";
				if (id == 9)if (button9->Text == "")button9->Text = "+";

				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();

			}
		}
		else {
			MessageBox::Show("Ё“ј я„≈… ј «јЌя“ј\n¬џЅ≈–»“≈ ƒ–”√”ё!");
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckPlaces() && button4->Text == "" && k != -1) { //если есть свободные €чейки и кнопка не зан€та
			if (k % 2 == 0 && value % 2 == 0) {// если счетчик кратен 0(ход пользовател€)
				printFunction();

				button4->Text = "+";
				k++;

				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}
				CheckPlaces();
				int id = II_functionO();


				if (id == 1)if (button1->Text == "")button1->Text = "o";
				if (id == 2)if (button2->Text == "")button2->Text = "o";
				if (id == 3)if (button3->Text == "")button3->Text = "o";
				if (id == 4)if (button4->Text == "")button4->Text = "o";
				if (id == 5)if (button5->Text == "")button5->Text = "o";
				if (id == 6)if (button6->Text == "")button6->Text = "o";
				if (id == 7)if (button7->Text == "")button7->Text = "o";
				if (id == 8)if (button8->Text == "")button8->Text = "o";
				if (id == 9)if (button9->Text == "")button9->Text = "o";
				k++;

				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();
			}
			if (k % 2 == 1 && value % 2 == 1) {
				printFunction();
				button4->Text = "o";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}

				CheckPlaces();
				int id = II_function();
				if (id == 1)if (button1->Text == "")button1->Text = "+";
				if (id == 2)if (button2->Text == "")button2->Text = "+";
				if (id == 3)if (button3->Text == "")button3->Text = "+";
				if (id == 4)if (button4->Text == "")button4->Text = "+";
				if (id == 5)if (button5->Text == "")button5->Text = "+";
				if (id == 6)if (button6->Text == "")button6->Text = "+";
				if (id == 7)if (button7->Text == "")button7->Text = "+";
				if (id == 8)if (button8->Text == "")button8->Text = "+";
				if (id == 9)if (button9->Text == "")button9->Text = "+";

				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();

			}
		}
		else {
			MessageBox::Show("Ё“ј я„≈… ј «јЌя“ј\n¬џЅ≈–»“≈ ƒ–”√”ё!");
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckPlaces() && button5->Text == "" && k != -1) { //если есть свободные €чейки и кнопка не зан€та
			if (k % 2 == 0 && value % 2 == 0) {// если счетчик кратен 0(ход пользовател€)
				printFunction();


				button5->Text = "+";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}
				CheckPlaces();
				int id = II_functionO();
				if (id == 1)if (button1->Text == "")button1->Text = "o";
				if (id == 2)if (button2->Text == "")button2->Text = "o";
				if (id == 3)if (button3->Text == "")button3->Text = "o";
				if (id == 4)if (button4->Text == "")button4->Text = "o";
				if (id == 5)if (button5->Text == "")button5->Text = "o";
				if (id == 6)if (button6->Text == "")button6->Text = "o";
				if (id == 7)if (button7->Text == "")button7->Text = "o";
				if (id == 8)if (button8->Text == "")button8->Text = "o";
				if (id == 9)if (button9->Text == "")button9->Text = "o";
				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();
			}
			if (k % 2 == 1 && value % 2 == 1) {
				printFunction();
				button5->Text = "o";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}

				CheckPlaces();
				int id = II_function();
				if (id == 1)if (button1->Text == "")button1->Text = "+";
				if (id == 2)if (button2->Text == "")button2->Text = "+";
				if (id == 3)if (button3->Text == "")button3->Text = "+";
				if (id == 4)if (button4->Text == "")button4->Text = "+";
				if (id == 5)if (button5->Text == "")button5->Text = "+";
				if (id == 6)if (button6->Text == "")button6->Text = "+";
				if (id == 7)if (button7->Text == "")button7->Text = "+";
				if (id == 8)if (button8->Text == "")button8->Text = "+";
				if (id == 9)if (button9->Text == "")button9->Text = "+";

				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();

			}
		}
		else {
			MessageBox::Show("Ё“ј я„≈… ј «јЌя“ј\n¬џЅ≈–»“≈ ƒ–”√”ё!");
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckPlaces() && button6->Text == "" && k != -1) { //если есть свободные €чейки и кнопка не зан€та
			if (k % 2 == 0 && value % 2 == 0) {// если счетчик кратен 0(ход пользовател€)
				printFunction();


				button6->Text = "+";
				k++;

				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}
				CheckPlaces();
				int id = II_functionO();
				if (id == 1)if (button1->Text == "")button1->Text = "o";
				if (id == 2)if (button2->Text == "")button2->Text = "o";
				if (id == 3)if (button3->Text == "")button3->Text = "o";
				if (id == 4)if (button4->Text == "")button4->Text = "o";
				if (id == 5)if (button5->Text == "")button5->Text = "o";
				if (id == 6)if (button6->Text == "")button6->Text = "o";
				if (id == 7)if (button7->Text == "")button7->Text = "o";
				if (id == 8)if (button8->Text == "")button8->Text = "o";
				if (id == 9)if (button9->Text == "")button9->Text = "o";
				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();
			}
			if (k % 2 == 1 && value % 2 == 1) {
				printFunction();
				button6->Text = "o";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}

				CheckPlaces();
				int id = II_function();
				if (id == 1)if (button1->Text == "")button1->Text = "+";
				if (id == 2)if (button2->Text == "")button2->Text = "+";
				if (id == 3)if (button3->Text == "")button3->Text = "+";
				if (id == 4)if (button4->Text == "")button4->Text = "+";
				if (id == 5)if (button5->Text == "")button5->Text = "+";
				if (id == 6)if (button6->Text == "")button6->Text = "+";
				if (id == 7)if (button7->Text == "")button7->Text = "+";
				if (id == 8)if (button8->Text == "")button8->Text = "+";
				if (id == 9)if (button9->Text == "")button9->Text = "+";

				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();

			}
		}
		else {
			MessageBox::Show("Ё“ј я„≈… ј «јЌя“ј\n¬џЅ≈–»“≈ ƒ–”√”ё!");
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckPlaces() && button7->Text == "" && k != -1) { //если есть свободные €чейки и кнопка не зан€та
			if (k % 2 == 0 && value % 2 == 0) {// если счетчик кратен 0(ход пользовател€)
				printFunction();


				button7->Text = "+";
				k++;

				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}
				CheckPlaces();
				int id = II_functionO();
				if (id == 1)if (button1->Text == "")button1->Text = "o";
				if (id == 2)if (button2->Text == "")button2->Text = "o";
				if (id == 3)if (button3->Text == "")button3->Text = "o";
				if (id == 4)if (button4->Text == "")button4->Text = "o";
				if (id == 5)if (button5->Text == "")button5->Text = "o";
				if (id == 6)if (button6->Text == "")button6->Text = "o";
				if (id == 7)if (button7->Text == "")button7->Text = "o";
				if (id == 8)if (button8->Text == "")button8->Text = "o";
				if (id == 9)if (button9->Text == "")button9->Text = "o";
				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();
			}
			if (k % 2 == 1 && value % 2 == 1) {
				printFunction();
				button7->Text = "o";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}

				CheckPlaces();
				int id = II_function();
				if (id == 1)if (button1->Text == "")button1->Text = "+";
				if (id == 2)if (button2->Text == "")button2->Text = "+";
				if (id == 3)if (button3->Text == "")button3->Text = "+";
				if (id == 4)if (button4->Text == "")button4->Text = "+";
				if (id == 5)if (button5->Text == "")button5->Text = "+";
				if (id == 6)if (button6->Text == "")button6->Text = "+";
				if (id == 7)if (button7->Text == "")button7->Text = "+";
				if (id == 8)if (button8->Text == "")button8->Text = "+";
				if (id == 9)if (button9->Text == "")button9->Text = "+";

				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();

			}
		}
		else {
			MessageBox::Show("Ё“ј я„≈… ј «јЌя“ј\n¬џЅ≈–»“≈ ƒ–”√”ё!");
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckPlaces() && button8->Text == "" && k != -1) { //если есть свободные €чейки и кнопка не зан€та
			if (k % 2 == 0 && value % 2 == 0) {// если счетчик кратен 0(ход пользовател€)
				printFunction();


				button8->Text = "+";
				k++;

				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}
				CheckPlaces();
				int id = II_functionO();
				if (id == 1)if (button1->Text == "")button1->Text = "o";
				if (id == 2)if (button2->Text == "")button2->Text = "o";
				if (id == 3)if (button3->Text == "")button3->Text = "o";
				if (id == 4)if (button4->Text == "")button4->Text = "o";
				if (id == 5)if (button5->Text == "")button5->Text = "o";
				if (id == 6)if (button6->Text == "")button6->Text = "o";
				if (id == 7)if (button7->Text == "")button7->Text = "o";
				if (id == 8)if (button8->Text == "")button8->Text = "o";
				if (id == 9)if (button9->Text == "")button9->Text = "o";
				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();
			}
			if (k % 2 == 1 && value % 2 == 1) {
				printFunction();
				button8->Text = "o";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}

				CheckPlaces();
				int id = II_function();
				if (id == 1)if (button1->Text == "")button1->Text = "+";
				if (id == 2)if (button2->Text == "")button2->Text = "+";
				if (id == 3)if (button3->Text == "")button3->Text = "+";
				if (id == 4)if (button4->Text == "")button4->Text = "+";
				if (id == 5)if (button5->Text == "")button5->Text = "+";
				if (id == 6)if (button6->Text == "")button6->Text = "+";
				if (id == 7)if (button7->Text == "")button7->Text = "+";
				if (id == 8)if (button8->Text == "")button8->Text = "+";
				if (id == 9)if (button9->Text == "")button9->Text = "+";

				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();

			}
		}
		else {
			MessageBox::Show("Ё“ј я„≈… ј «јЌя“ј\n¬џЅ≈–»“≈ ƒ–”√”ё!");
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckPlaces() && button9->Text == "" && k != -1) { //если есть свободные €чейки и кнопка не зан€та
			if (k % 2 == 0 && value % 2 == 0) {// если счетчик кратен 0(ход пользовател€)
				printFunction();


				button9->Text = "+";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}
				CheckPlaces();
				int id = II_functionO();
				if (id == 1)if (button1->Text == "")button1->Text = "o";
				if (id == 2)if (button2->Text == "")button2->Text = "o";
				if (id == 3)if (button3->Text == "")button3->Text = "o";
				if (id == 4)if (button4->Text == "")button4->Text = "o";
				if (id == 5)if (button5->Text == "")button5->Text = "o";
				if (id == 6)if (button6->Text == "")button6->Text = "o";
				if (id == 7)if (button7->Text == "")button7->Text = "o";
				if (id == 8)if (button8->Text == "")button8->Text = "o";
				if (id == 9)if (button9->Text == "")button9->Text = "o";
				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();
			}
			if (k % 2 == 1 && value % 2 == 1) {
				printFunction();
				button9->Text = "o";
				k++;
				bool flag = true;
				if (CheckWin()) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј ѕќЋ№«ќ¬ј“≈Ћя!");
					flag = false;
				}

				CheckPlaces();
				int id = II_function();
				if (id == 1)if (button1->Text == "")button1->Text = "+";
				if (id == 2)if (button2->Text == "")button2->Text = "+";
				if (id == 3)if (button3->Text == "")button3->Text = "+";
				if (id == 4)if (button4->Text == "")button4->Text = "+";
				if (id == 5)if (button5->Text == "")button5->Text = "+";
				if (id == 6)if (button6->Text == "")button6->Text = "+";
				if (id == 7)if (button7->Text == "")button7->Text = "+";
				if (id == 8)if (button8->Text == "")button8->Text = "+";
				if (id == 9)if (button9->Text == "")button9->Text = "+";

				k++;
				if (CheckWin() && flag == true) { // проверка на выигрышную комбинацию
					k = -1;
					MessageBox::Show("ѕќЅ≈ƒј  ќћѕј!");
				}
				CheckPlaces();

			}
		}
		else {
			MessageBox::Show("Ё“ј я„≈… ј «јЌя“ј\n¬џЅ≈–»“≈ ƒ–”√”ё!");
		}
	}

	};
}

