#pragma once
#include <string>
#include "MyForm.h"


namespace Labels {

	using namespace System;
	using namespace System::Windows;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::IO;

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
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form1::printDocument1_PrintPage);
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
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  time1;
	private: System::Windows::Forms::TextBox^  time2;



	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txt4;






	private: System::Windows::Forms::TextBox^  txt3;
	private: System::Windows::Forms::TextBox^  time4;






	private: System::Windows::Forms::TextBox^  time3;



	private: System::Windows::Forms::TextBox^  txt8;

	private: System::Windows::Forms::TextBox^  txt7;
	private: System::Windows::Forms::TextBox^  time8;
	private: System::Windows::Forms::TextBox^  time7;








	private: System::Windows::Forms::TextBox^  txt6;

	private: System::Windows::Forms::TextBox^  txt5;
	private: System::Windows::Forms::TextBox^  time6;



	private: System::Windows::Forms::TextBox^  time5;


	private: System::Windows::Forms::TextBox^  txt11;
	private: System::Windows::Forms::TextBox^  time11;






	private: System::Windows::Forms::TextBox^  txt10;

	private: System::Windows::Forms::TextBox^  txt9;
	private: System::Windows::Forms::TextBox^  time10;



	private: System::Windows::Forms::TextBox^  time9;


	private: System::Windows::Forms::TextBox^  txt16;



	private: System::Windows::Forms::TextBox^  txt15;
	private: System::Windows::Forms::TextBox^  time16;






private: System::Windows::Forms::TextBox^  time15;




	private: System::Windows::Forms::TextBox^  txt14;


	private: System::Windows::Forms::TextBox^  txt13;
private: System::Windows::Forms::TextBox^  time14;




private: System::Windows::Forms::TextBox^  time13;


	private: System::Windows::Forms::TextBox^  txt12;
private: System::Windows::Forms::TextBox^  time12;



private: System::Windows::Forms::TextBox^  txt21;

private: System::Windows::Forms::TextBox^  txt20;
private: System::Windows::Forms::TextBox^  time21;



private: System::Windows::Forms::TextBox^  time20;


private: System::Windows::Forms::TextBox^  txt19;

private: System::Windows::Forms::TextBox^  txt18;
private: System::Windows::Forms::TextBox^  time19;



private: System::Windows::Forms::TextBox^  time18;


private: System::Windows::Forms::TextBox^  txt17;
private: System::Windows::Forms::TextBox^  time17;















private: System::Windows::Forms::TextBox^  txt22;




private: System::Windows::Forms::TextBox^  time22;












private: System::Windows::Forms::Button^  btnNextPage;

private: System::Windows::Forms::Button^  btnPreviousPage;
private: System::Windows::Forms::NumericUpDown^  num1;
private: System::Windows::Forms::NumericUpDown^  num2;
private: System::Windows::Forms::NumericUpDown^  num3;
private: System::Windows::Forms::NumericUpDown^  num6;




private: System::Windows::Forms::NumericUpDown^  num5;

private: System::Windows::Forms::NumericUpDown^  num4;
private: System::Windows::Forms::NumericUpDown^  num12;


private: System::Windows::Forms::NumericUpDown^  num11;

private: System::Windows::Forms::NumericUpDown^  num10;

private: System::Windows::Forms::NumericUpDown^  num9;

private: System::Windows::Forms::NumericUpDown^  num8;

private: System::Windows::Forms::NumericUpDown^  num7;
private: System::Windows::Forms::NumericUpDown^  num18;


private: System::Windows::Forms::NumericUpDown^  num17;

private: System::Windows::Forms::NumericUpDown^  num16;

private: System::Windows::Forms::NumericUpDown^  num15;

private: System::Windows::Forms::NumericUpDown^  num14;

private: System::Windows::Forms::NumericUpDown^  num13;









private: System::Windows::Forms::NumericUpDown^  num22;

private: System::Windows::Forms::NumericUpDown^  num21;

private: System::Windows::Forms::NumericUpDown^  num20;

private: System::Windows::Forms::NumericUpDown^  num19;



private: System::Windows::Forms::CheckBox^  check1;
private: System::Windows::Forms::CheckBox^  check2;
private: System::Windows::Forms::CheckBox^  check3;
private: System::Windows::Forms::CheckBox^  check6;




private: System::Windows::Forms::CheckBox^  check5;

private: System::Windows::Forms::CheckBox^  check4;
private: System::Windows::Forms::CheckBox^  check12;


private: System::Windows::Forms::CheckBox^  check11;

private: System::Windows::Forms::CheckBox^  check10;

private: System::Windows::Forms::CheckBox^  check9;

private: System::Windows::Forms::CheckBox^  check8;

private: System::Windows::Forms::CheckBox^  check7;
private: System::Windows::Forms::CheckBox^  check18;


private: System::Windows::Forms::CheckBox^  check17;

private: System::Windows::Forms::CheckBox^  check16;

private: System::Windows::Forms::CheckBox^  check15;

private: System::Windows::Forms::CheckBox^  check14;

private: System::Windows::Forms::CheckBox^  check13;





private: System::Windows::Forms::CheckBox^  check22;

private: System::Windows::Forms::CheckBox^  check21;

private: System::Windows::Forms::CheckBox^  check20;

private: System::Windows::Forms::CheckBox^  check19;






private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem;
private: System::Windows::Forms::CheckBox^  checkAll;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::ToolStripMenuItem^  printDialogToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  printPreviewToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem1;
private: System::Windows::Forms::PrintDialog^  printDialog1;
private: System::Drawing::Printing::PrintDocument^  printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  refreshToolStripMenuItem;












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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->time1 = (gcnew System::Windows::Forms::TextBox());
			this->time2 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->time4 = (gcnew System::Windows::Forms::TextBox());
			this->time3 = (gcnew System::Windows::Forms::TextBox());
			this->txt8 = (gcnew System::Windows::Forms::TextBox());
			this->txt7 = (gcnew System::Windows::Forms::TextBox());
			this->time8 = (gcnew System::Windows::Forms::TextBox());
			this->time7 = (gcnew System::Windows::Forms::TextBox());
			this->txt6 = (gcnew System::Windows::Forms::TextBox());
			this->txt5 = (gcnew System::Windows::Forms::TextBox());
			this->time6 = (gcnew System::Windows::Forms::TextBox());
			this->time5 = (gcnew System::Windows::Forms::TextBox());
			this->txt11 = (gcnew System::Windows::Forms::TextBox());
			this->time11 = (gcnew System::Windows::Forms::TextBox());
			this->txt10 = (gcnew System::Windows::Forms::TextBox());
			this->txt9 = (gcnew System::Windows::Forms::TextBox());
			this->time10 = (gcnew System::Windows::Forms::TextBox());
			this->time9 = (gcnew System::Windows::Forms::TextBox());
			this->txt16 = (gcnew System::Windows::Forms::TextBox());
			this->txt15 = (gcnew System::Windows::Forms::TextBox());
			this->time16 = (gcnew System::Windows::Forms::TextBox());
			this->time15 = (gcnew System::Windows::Forms::TextBox());
			this->txt14 = (gcnew System::Windows::Forms::TextBox());
			this->txt13 = (gcnew System::Windows::Forms::TextBox());
			this->time14 = (gcnew System::Windows::Forms::TextBox());
			this->time13 = (gcnew System::Windows::Forms::TextBox());
			this->txt12 = (gcnew System::Windows::Forms::TextBox());
			this->time12 = (gcnew System::Windows::Forms::TextBox());
			this->txt21 = (gcnew System::Windows::Forms::TextBox());
			this->txt20 = (gcnew System::Windows::Forms::TextBox());
			this->time21 = (gcnew System::Windows::Forms::TextBox());
			this->time20 = (gcnew System::Windows::Forms::TextBox());
			this->txt19 = (gcnew System::Windows::Forms::TextBox());
			this->txt18 = (gcnew System::Windows::Forms::TextBox());
			this->time19 = (gcnew System::Windows::Forms::TextBox());
			this->time18 = (gcnew System::Windows::Forms::TextBox());
			this->txt17 = (gcnew System::Windows::Forms::TextBox());
			this->time17 = (gcnew System::Windows::Forms::TextBox());
			this->txt22 = (gcnew System::Windows::Forms::TextBox());
			this->time22 = (gcnew System::Windows::Forms::TextBox());
			this->btnNextPage = (gcnew System::Windows::Forms::Button());
			this->btnPreviousPage = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num22 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num21 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->num19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->check1 = (gcnew System::Windows::Forms::CheckBox());
			this->check2 = (gcnew System::Windows::Forms::CheckBox());
			this->check3 = (gcnew System::Windows::Forms::CheckBox());
			this->check6 = (gcnew System::Windows::Forms::CheckBox());
			this->check5 = (gcnew System::Windows::Forms::CheckBox());
			this->check4 = (gcnew System::Windows::Forms::CheckBox());
			this->check12 = (gcnew System::Windows::Forms::CheckBox());
			this->check11 = (gcnew System::Windows::Forms::CheckBox());
			this->check10 = (gcnew System::Windows::Forms::CheckBox());
			this->check9 = (gcnew System::Windows::Forms::CheckBox());
			this->check8 = (gcnew System::Windows::Forms::CheckBox());
			this->check7 = (gcnew System::Windows::Forms::CheckBox());
			this->check18 = (gcnew System::Windows::Forms::CheckBox());
			this->check17 = (gcnew System::Windows::Forms::CheckBox());
			this->check16 = (gcnew System::Windows::Forms::CheckBox());
			this->check15 = (gcnew System::Windows::Forms::CheckBox());
			this->check14 = (gcnew System::Windows::Forms::CheckBox());
			this->check13 = (gcnew System::Windows::Forms::CheckBox());
			this->check22 = (gcnew System::Windows::Forms::CheckBox());
			this->check21 = (gcnew System::Windows::Forms::CheckBox());
			this->check20 = (gcnew System::Windows::Forms::CheckBox());
			this->check19 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->refreshToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printDialogToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printPreviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkAll = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num19))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"MM/dd/yyyy - dddd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(12, 57);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(161, 20);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Date";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(129, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Amount";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Time";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(242, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 15);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Product";
			// 
			// time1
			// 
			this->time1->BackColor = System::Drawing::SystemColors::Info;
			this->time1->Location = System::Drawing::Point(40, 127);
			this->time1->Name = L"time1";
			this->time1->ReadOnly = true;
			this->time1->Size = System::Drawing::Size(35, 20);
			this->time1->TabIndex = 5;
			this->time1->TabStop = false;
			this->time1->Text = L"2";
			this->time1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time2
			// 
			this->time2->BackColor = System::Drawing::SystemColors::Info;
			this->time2->Location = System::Drawing::Point(40, 153);
			this->time2->Name = L"time2";
			this->time2->ReadOnly = true;
			this->time2->Size = System::Drawing::Size(35, 20);
			this->time2->TabIndex = 8;
			this->time2->TabStop = false;
			this->time2->Text = L"7";
			this->time2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt1
			// 
			this->txt1->BackColor = System::Drawing::SystemColors::Info;
			this->txt1->Location = System::Drawing::Point(215, 127);
			this->txt1->Name = L"txt1";
			this->txt1->ReadOnly = true;
			this->txt1->Size = System::Drawing::Size(116, 20);
			this->txt1->TabIndex = 10;
			this->txt1->Text = L"Alfredo Pasta Sauce";
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt2
			// 
			this->txt2->BackColor = System::Drawing::SystemColors::Info;
			this->txt2->Location = System::Drawing::Point(215, 153);
			this->txt2->Name = L"txt2";
			this->txt2->ReadOnly = true;
			this->txt2->Size = System::Drawing::Size(116, 20);
			this->txt2->TabIndex = 11;
			this->txt2->Text = L"Bacon";
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt4
			// 
			this->txt4->BackColor = System::Drawing::SystemColors::Info;
			this->txt4->Location = System::Drawing::Point(215, 205);
			this->txt4->Name = L"txt4";
			this->txt4->ReadOnly = true;
			this->txt4->Size = System::Drawing::Size(116, 20);
			this->txt4->TabIndex = 17;
			this->txt4->Text = L"American Cheese";
			this->txt4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt3
			// 
			this->txt3->BackColor = System::Drawing::SystemColors::Info;
			this->txt3->Location = System::Drawing::Point(215, 179);
			this->txt3->Name = L"txt3";
			this->txt3->ReadOnly = true;
			this->txt3->Size = System::Drawing::Size(116, 20);
			this->txt3->TabIndex = 16;
			this->txt3->Text = L"Beef";
			this->txt3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time4
			// 
			this->time4->BackColor = System::Drawing::SystemColors::Info;
			this->time4->Location = System::Drawing::Point(40, 205);
			this->time4->Name = L"time4";
			this->time4->ReadOnly = true;
			this->time4->Size = System::Drawing::Size(35, 20);
			this->time4->TabIndex = 14;
			this->time4->TabStop = false;
			this->time4->Text = L"10";
			this->time4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time3
			// 
			this->time3->BackColor = System::Drawing::SystemColors::Info;
			this->time3->Location = System::Drawing::Point(40, 179);
			this->time3->Name = L"time3";
			this->time3->ReadOnly = true;
			this->time3->Size = System::Drawing::Size(35, 20);
			this->time3->TabIndex = 12;
			this->time3->TabStop = false;
			this->time3->Text = L"7";
			this->time3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt8
			// 
			this->txt8->BackColor = System::Drawing::SystemColors::Info;
			this->txt8->Location = System::Drawing::Point(215, 309);
			this->txt8->Name = L"txt8";
			this->txt8->ReadOnly = true;
			this->txt8->Size = System::Drawing::Size(116, 20);
			this->txt8->TabIndex = 29;
			this->txt8->Text = L"Parmesan Shaker";
			this->txt8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt7
			// 
			this->txt7->BackColor = System::Drawing::SystemColors::Info;
			this->txt7->Location = System::Drawing::Point(215, 283);
			this->txt7->Name = L"txt7";
			this->txt7->ReadOnly = true;
			this->txt7->Size = System::Drawing::Size(116, 20);
			this->txt7->TabIndex = 28;
			this->txt7->Text = L"Parmesan Asiago";
			this->txt7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time8
			// 
			this->time8->BackColor = System::Drawing::SystemColors::Info;
			this->time8->Location = System::Drawing::Point(40, 309);
			this->time8->Name = L"time8";
			this->time8->ReadOnly = true;
			this->time8->Size = System::Drawing::Size(35, 20);
			this->time8->TabIndex = 26;
			this->time8->TabStop = false;
			this->time8->Text = L"2";
			this->time8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time7
			// 
			this->time7->BackColor = System::Drawing::SystemColors::Info;
			this->time7->Location = System::Drawing::Point(40, 283);
			this->time7->Name = L"time7";
			this->time7->ReadOnly = true;
			this->time7->Size = System::Drawing::Size(35, 20);
			this->time7->TabIndex = 24;
			this->time7->TabStop = false;
			this->time7->Text = L"10";
			this->time7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt6
			// 
			this->txt6->BackColor = System::Drawing::SystemColors::Info;
			this->txt6->Location = System::Drawing::Point(215, 257);
			this->txt6->Name = L"txt6";
			this->txt6->ReadOnly = true;
			this->txt6->Size = System::Drawing::Size(116, 20);
			this->txt6->TabIndex = 23;
			this->txt6->Text = L"Feta Cheese";
			this->txt6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt5
			// 
			this->txt5->BackColor = System::Drawing::SystemColors::Info;
			this->txt5->Location = System::Drawing::Point(215, 231);
			this->txt5->Name = L"txt5";
			this->txt5->ReadOnly = true;
			this->txt5->Size = System::Drawing::Size(116, 20);
			this->txt5->TabIndex = 22;
			this->txt5->Text = L"Cheddar Cheese";
			this->txt5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time6
			// 
			this->time6->BackColor = System::Drawing::SystemColors::Info;
			this->time6->Location = System::Drawing::Point(40, 257);
			this->time6->Name = L"time6";
			this->time6->ReadOnly = true;
			this->time6->Size = System::Drawing::Size(35, 20);
			this->time6->TabIndex = 20;
			this->time6->TabStop = false;
			this->time6->Text = L"10";
			this->time6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time5
			// 
			this->time5->BackColor = System::Drawing::SystemColors::Info;
			this->time5->Location = System::Drawing::Point(40, 231);
			this->time5->Name = L"time5";
			this->time5->ReadOnly = true;
			this->time5->Size = System::Drawing::Size(35, 20);
			this->time5->TabIndex = 18;
			this->time5->TabStop = false;
			this->time5->Text = L"10";
			this->time5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt11
			// 
			this->txt11->BackColor = System::Drawing::SystemColors::Info;
			this->txt11->Location = System::Drawing::Point(215, 387);
			this->txt11->Name = L"txt11";
			this->txt11->ReadOnly = true;
			this->txt11->Size = System::Drawing::Size(116, 20);
			this->txt11->TabIndex = 40;
			this->txt11->Text = L"50/50 Mixed Cheese";
			this->txt11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time11
			// 
			this->time11->BackColor = System::Drawing::SystemColors::Info;
			this->time11->Location = System::Drawing::Point(40, 387);
			this->time11->Name = L"time11";
			this->time11->ReadOnly = true;
			this->time11->Size = System::Drawing::Size(35, 20);
			this->time11->TabIndex = 36;
			this->time11->TabStop = false;
			this->time11->Text = L"2";
			this->time11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt10
			// 
			this->txt10->BackColor = System::Drawing::SystemColors::Info;
			this->txt10->Location = System::Drawing::Point(215, 361);
			this->txt10->Name = L"txt10";
			this->txt10->ReadOnly = true;
			this->txt10->Size = System::Drawing::Size(116, 20);
			this->txt10->TabIndex = 35;
			this->txt10->Text = L"Sliced Provolone";
			this->txt10->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt9
			// 
			this->txt9->BackColor = System::Drawing::SystemColors::Info;
			this->txt9->Location = System::Drawing::Point(215, 335);
			this->txt9->Name = L"txt9";
			this->txt9->ReadOnly = true;
			this->txt9->Size = System::Drawing::Size(116, 20);
			this->txt9->TabIndex = 34;
			this->txt9->Text = L"Shredded Provolone";
			this->txt9->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time10
			// 
			this->time10->BackColor = System::Drawing::SystemColors::Info;
			this->time10->Location = System::Drawing::Point(40, 361);
			this->time10->Name = L"time10";
			this->time10->ReadOnly = true;
			this->time10->Size = System::Drawing::Size(35, 20);
			this->time10->TabIndex = 32;
			this->time10->TabStop = false;
			this->time10->Text = L"10";
			this->time10->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time9
			// 
			this->time9->BackColor = System::Drawing::SystemColors::Info;
			this->time9->Location = System::Drawing::Point(40, 335);
			this->time9->Name = L"time9";
			this->time9->ReadOnly = true;
			this->time9->Size = System::Drawing::Size(35, 20);
			this->time9->TabIndex = 30;
			this->time9->TabStop = false;
			this->time9->Text = L"6";
			this->time9->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt16
			// 
			this->txt16->BackColor = System::Drawing::SystemColors::Info;
			this->txt16->Location = System::Drawing::Point(215, 517);
			this->txt16->Name = L"txt16";
			this->txt16->ReadOnly = true;
			this->txt16->Size = System::Drawing::Size(116, 20);
			this->txt16->TabIndex = 58;
			this->txt16->Text = L"Marbled Cookie Br.";
			this->txt16->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt15
			// 
			this->txt15->BackColor = System::Drawing::SystemColors::Info;
			this->txt15->Location = System::Drawing::Point(215, 491);
			this->txt15->Name = L"txt15";
			this->txt15->ReadOnly = true;
			this->txt15->Size = System::Drawing::Size(116, 20);
			this->txt15->TabIndex = 57;
			this->txt15->Text = L"Ham";
			this->txt15->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time16
			// 
			this->time16->BackColor = System::Drawing::SystemColors::Info;
			this->time16->Location = System::Drawing::Point(40, 517);
			this->time16->Name = L"time16";
			this->time16->ReadOnly = true;
			this->time16->Size = System::Drawing::Size(35, 20);
			this->time16->TabIndex = 55;
			this->time16->TabStop = false;
			this->time16->Text = L"2";
			this->time16->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time15
			// 
			this->time15->BackColor = System::Drawing::SystemColors::Info;
			this->time15->Location = System::Drawing::Point(40, 491);
			this->time15->Name = L"time15";
			this->time15->ReadOnly = true;
			this->time15->Size = System::Drawing::Size(35, 20);
			this->time15->TabIndex = 53;
			this->time15->TabStop = false;
			this->time15->Text = L"4";
			this->time15->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt14
			// 
			this->txt14->BackColor = System::Drawing::SystemColors::Info;
			this->txt14->Location = System::Drawing::Point(215, 465);
			this->txt14->Name = L"txt14";
			this->txt14->ReadOnly = true;
			this->txt14->Size = System::Drawing::Size(116, 20);
			this->txt14->TabIndex = 52;
			this->txt14->Text = L"Chocolate Lava Cakes";
			this->txt14->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt13
			// 
			this->txt13->BackColor = System::Drawing::SystemColors::Info;
			this->txt13->Location = System::Drawing::Point(215, 439);
			this->txt13->Name = L"txt13";
			this->txt13->ReadOnly = true;
			this->txt13->Size = System::Drawing::Size(116, 20);
			this->txt13->TabIndex = 51;
			this->txt13->Text = L"Grilled Chicken";
			this->txt13->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time14
			// 
			this->time14->BackColor = System::Drawing::SystemColors::Info;
			this->time14->Location = System::Drawing::Point(40, 465);
			this->time14->Name = L"time14";
			this->time14->ReadOnly = true;
			this->time14->Size = System::Drawing::Size(35, 20);
			this->time14->TabIndex = 49;
			this->time14->TabStop = false;
			this->time14->Text = L"2";
			this->time14->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time13
			// 
			this->time13->BackColor = System::Drawing::SystemColors::Info;
			this->time13->Location = System::Drawing::Point(40, 439);
			this->time13->Name = L"time13";
			this->time13->ReadOnly = true;
			this->time13->Size = System::Drawing::Size(35, 20);
			this->time13->TabIndex = 47;
			this->time13->TabStop = false;
			this->time13->Text = L"4";
			this->time13->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt12
			// 
			this->txt12->BackColor = System::Drawing::SystemColors::Info;
			this->txt12->Location = System::Drawing::Point(215, 413);
			this->txt12->Name = L"txt12";
			this->txt12->ReadOnly = true;
			this->txt12->Size = System::Drawing::Size(116, 20);
			this->txt12->TabIndex = 46;
			this->txt12->Text = L"Wings (Both Types)";
			this->txt12->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time12
			// 
			this->time12->BackColor = System::Drawing::SystemColors::Info;
			this->time12->Location = System::Drawing::Point(40, 413);
			this->time12->Name = L"time12";
			this->time12->ReadOnly = true;
			this->time12->Size = System::Drawing::Size(35, 20);
			this->time12->TabIndex = 44;
			this->time12->TabStop = false;
			this->time12->Text = L"2";
			this->time12->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt21
			// 
			this->txt21->BackColor = System::Drawing::SystemColors::Info;
			this->txt21->Location = System::Drawing::Point(215, 621);
			this->txt21->Name = L"txt21";
			this->txt21->ReadOnly = true;
			this->txt21->Size = System::Drawing::Size(116, 20);
			this->txt21->TabIndex = 73;
			this->txt21->Text = L"Italian Sausage";
			this->txt21->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt20
			// 
			this->txt20->BackColor = System::Drawing::SystemColors::Info;
			this->txt20->Location = System::Drawing::Point(215, 595);
			this->txt20->Name = L"txt20";
			this->txt20->ReadOnly = true;
			this->txt20->Size = System::Drawing::Size(116, 20);
			this->txt20->TabIndex = 72;
			this->txt20->Text = L"Salami";
			this->txt20->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time21
			// 
			this->time21->BackColor = System::Drawing::SystemColors::Info;
			this->time21->Location = System::Drawing::Point(40, 621);
			this->time21->Name = L"time21";
			this->time21->Size = System::Drawing::Size(35, 20);
			this->time21->TabIndex = 70;
			this->time21->TabStop = false;
			this->time21->Text = L"7";
			this->time21->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time20
			// 
			this->time20->BackColor = System::Drawing::SystemColors::Info;
			this->time20->Location = System::Drawing::Point(40, 595);
			this->time20->Name = L"time20";
			this->time20->Size = System::Drawing::Size(35, 20);
			this->time20->TabIndex = 68;
			this->time20->TabStop = false;
			this->time20->Text = L"7";
			this->time20->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt19
			// 
			this->txt19->BackColor = System::Drawing::SystemColors::Info;
			this->txt19->Location = System::Drawing::Point(215, 569);
			this->txt19->Name = L"txt19";
			this->txt19->ReadOnly = true;
			this->txt19->Size = System::Drawing::Size(116, 20);
			this->txt19->TabIndex = 67;
			this->txt19->Text = L"Philly Steak";
			this->txt19->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt18
			// 
			this->txt18->BackColor = System::Drawing::SystemColors::Info;
			this->txt18->Location = System::Drawing::Point(215, 569);
			this->txt18->Name = L"txt18";
			this->txt18->ReadOnly = true;
			this->txt18->Size = System::Drawing::Size(116, 20);
			this->txt18->TabIndex = 66;
			this->txt18->Text = L"Pepperoni";
			this->txt18->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time19
			// 
			this->time19->BackColor = System::Drawing::SystemColors::Info;
			this->time19->Location = System::Drawing::Point(40, 569);
			this->time19->Name = L"time19";
			this->time19->Size = System::Drawing::Size(35, 20);
			this->time19->TabIndex = 64;
			this->time19->TabStop = false;
			this->time19->Text = L"2";
			this->time19->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time18
			// 
			this->time18->BackColor = System::Drawing::SystemColors::Info;
			this->time18->Location = System::Drawing::Point(40, 569);
			this->time18->Name = L"time18";
			this->time18->Size = System::Drawing::Size(35, 20);
			this->time18->TabIndex = 62;
			this->time18->TabStop = false;
			this->time18->Text = L"7";
			this->time18->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt17
			// 
			this->txt17->BackColor = System::Drawing::SystemColors::Info;
			this->txt17->Location = System::Drawing::Point(215, 543);
			this->txt17->Name = L"txt17";
			this->txt17->ReadOnly = true;
			this->txt17->Size = System::Drawing::Size(116, 20);
			this->txt17->TabIndex = 61;
			this->txt17->Text = L"Pasta";
			this->txt17->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time17
			// 
			this->time17->BackColor = System::Drawing::SystemColors::Info;
			this->time17->Location = System::Drawing::Point(40, 543);
			this->time17->Name = L"time17";
			this->time17->Size = System::Drawing::Size(35, 20);
			this->time17->TabIndex = 59;
			this->time17->TabStop = false;
			this->time17->Text = L"4";
			this->time17->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt22
			// 
			this->txt22->BackColor = System::Drawing::SystemColors::Info;
			this->txt22->Location = System::Drawing::Point(215, 647);
			this->txt22->Name = L"txt22";
			this->txt22->ReadOnly = true;
			this->txt22->Size = System::Drawing::Size(116, 20);
			this->txt22->TabIndex = 78;
			this->txt22->Text = L"Sliced Sausage";
			this->txt22->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// time22
			// 
			this->time22->BackColor = System::Drawing::SystemColors::Info;
			this->time22->Location = System::Drawing::Point(40, 647);
			this->time22->Name = L"time22";
			this->time22->Size = System::Drawing::Size(35, 20);
			this->time22->TabIndex = 74;
			this->time22->TabStop = false;
			this->time22->Text = L"4";
			this->time22->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnNextPage
			// 
			this->btnNextPage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNextPage->Location = System::Drawing::Point(291, 57);
			this->btnNextPage->Name = L"btnNextPage";
			this->btnNextPage->Size = System::Drawing::Size(71, 20);
			this->btnNextPage->TabIndex = 92;
			this->btnNextPage->TabStop = false;
			this->btnNextPage->Text = L"Next Page >";
			this->btnNextPage->UseVisualStyleBackColor = true;
			this->btnNextPage->Click += gcnew System::EventHandler(this, &Form1::btnNextPage_Click);
			// 
			// btnPreviousPage
			// 
			this->btnPreviousPage->Enabled = false;
			this->btnPreviousPage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPreviousPage->Location = System::Drawing::Point(201, 57);
			this->btnPreviousPage->Name = L"btnPreviousPage";
			this->btnPreviousPage->Size = System::Drawing::Size(71, 20);
			this->btnPreviousPage->TabIndex = 93;
			this->btnPreviousPage->TabStop = false;
			this->btnPreviousPage->Text = L"< Prev Page";
			this->btnPreviousPage->UseVisualStyleBackColor = true;
			this->btnPreviousPage->Click += gcnew System::EventHandler(this, &Form1::btnPreviousPage_Click);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(132, 127);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(41, 20);
			this->num1->TabIndex = 94;
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(132, 153);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(41, 20);
			this->num2->TabIndex = 95;
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(132, 179);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(41, 20);
			this->num3->TabIndex = 96;
			// 
			// num6
			// 
			this->num6->Location = System::Drawing::Point(132, 257);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(41, 20);
			this->num6->TabIndex = 99;
			// 
			// num5
			// 
			this->num5->Location = System::Drawing::Point(132, 231);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(41, 20);
			this->num5->TabIndex = 98;
			// 
			// num4
			// 
			this->num4->Location = System::Drawing::Point(132, 205);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(41, 20);
			this->num4->TabIndex = 97;
			// 
			// num12
			// 
			this->num12->Location = System::Drawing::Point(132, 413);
			this->num12->Name = L"num12";
			this->num12->Size = System::Drawing::Size(41, 20);
			this->num12->TabIndex = 105;
			// 
			// num11
			// 
			this->num11->Location = System::Drawing::Point(132, 387);
			this->num11->Name = L"num11";
			this->num11->Size = System::Drawing::Size(41, 20);
			this->num11->TabIndex = 104;
			// 
			// num10
			// 
			this->num10->Location = System::Drawing::Point(132, 361);
			this->num10->Name = L"num10";
			this->num10->Size = System::Drawing::Size(41, 20);
			this->num10->TabIndex = 103;
			// 
			// num9
			// 
			this->num9->Location = System::Drawing::Point(132, 335);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(41, 20);
			this->num9->TabIndex = 102;
			// 
			// num8
			// 
			this->num8->Location = System::Drawing::Point(132, 309);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(41, 20);
			this->num8->TabIndex = 101;
			// 
			// num7
			// 
			this->num7->Location = System::Drawing::Point(132, 283);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(41, 20);
			this->num7->TabIndex = 100;
			// 
			// num18
			// 
			this->num18->Location = System::Drawing::Point(132, 569);
			this->num18->Name = L"num18";
			this->num18->Size = System::Drawing::Size(41, 20);
			this->num18->TabIndex = 111;
			// 
			// num17
			// 
			this->num17->Location = System::Drawing::Point(132, 543);
			this->num17->Name = L"num17";
			this->num17->Size = System::Drawing::Size(41, 20);
			this->num17->TabIndex = 110;
			// 
			// num16
			// 
			this->num16->Location = System::Drawing::Point(132, 517);
			this->num16->Name = L"num16";
			this->num16->Size = System::Drawing::Size(41, 20);
			this->num16->TabIndex = 109;
			// 
			// num15
			// 
			this->num15->Location = System::Drawing::Point(132, 491);
			this->num15->Name = L"num15";
			this->num15->Size = System::Drawing::Size(41, 20);
			this->num15->TabIndex = 108;
			// 
			// num14
			// 
			this->num14->Location = System::Drawing::Point(132, 465);
			this->num14->Name = L"num14";
			this->num14->Size = System::Drawing::Size(41, 20);
			this->num14->TabIndex = 107;
			// 
			// num13
			// 
			this->num13->Location = System::Drawing::Point(132, 439);
			this->num13->Name = L"num13";
			this->num13->Size = System::Drawing::Size(41, 20);
			this->num13->TabIndex = 106;
			// 
			// num22
			// 
			this->num22->Location = System::Drawing::Point(132, 647);
			this->num22->Name = L"num22";
			this->num22->Size = System::Drawing::Size(41, 20);
			this->num22->TabIndex = 115;
			// 
			// num21
			// 
			this->num21->Location = System::Drawing::Point(132, 621);
			this->num21->Name = L"num21";
			this->num21->Size = System::Drawing::Size(41, 20);
			this->num21->TabIndex = 114;
			// 
			// num20
			// 
			this->num20->Location = System::Drawing::Point(132, 595);
			this->num20->Name = L"num20";
			this->num20->Size = System::Drawing::Size(41, 20);
			this->num20->TabIndex = 113;
			// 
			// num19
			// 
			this->num19->Location = System::Drawing::Point(132, 569);
			this->num19->Name = L"num19";
			this->num19->Size = System::Drawing::Size(41, 20);
			this->num19->TabIndex = 112;
			// 
			// check1
			// 
			this->check1->AutoSize = true;
			this->check1->Location = System::Drawing::Point(347, 129);
			this->check1->Name = L"check1";
			this->check1->Size = System::Drawing::Size(15, 14);
			this->check1->TabIndex = 121;
			this->check1->UseVisualStyleBackColor = true;
			this->check1->CheckedChanged += gcnew System::EventHandler(this, &Form1::check1_CheckedChanged);
			// 
			// check2
			// 
			this->check2->AutoSize = true;
			this->check2->Location = System::Drawing::Point(347, 156);
			this->check2->Name = L"check2";
			this->check2->Size = System::Drawing::Size(15, 14);
			this->check2->TabIndex = 122;
			this->check2->UseVisualStyleBackColor = true;
			this->check2->CheckedChanged += gcnew System::EventHandler(this, &Form1::check2_CheckedChanged);
			// 
			// check3
			// 
			this->check3->AutoSize = true;
			this->check3->Location = System::Drawing::Point(347, 182);
			this->check3->Name = L"check3";
			this->check3->Size = System::Drawing::Size(15, 14);
			this->check3->TabIndex = 123;
			this->check3->UseVisualStyleBackColor = true;
			this->check3->CheckedChanged += gcnew System::EventHandler(this, &Form1::check3_CheckedChanged);
			// 
			// check6
			// 
			this->check6->AutoSize = true;
			this->check6->Location = System::Drawing::Point(347, 259);
			this->check6->Name = L"check6";
			this->check6->Size = System::Drawing::Size(15, 14);
			this->check6->TabIndex = 126;
			this->check6->UseVisualStyleBackColor = true;
			this->check6->CheckedChanged += gcnew System::EventHandler(this, &Form1::check6_CheckedChanged);
			// 
			// check5
			// 
			this->check5->AutoSize = true;
			this->check5->Location = System::Drawing::Point(347, 234);
			this->check5->Name = L"check5";
			this->check5->Size = System::Drawing::Size(15, 14);
			this->check5->TabIndex = 125;
			this->check5->UseVisualStyleBackColor = true;
			this->check5->CheckedChanged += gcnew System::EventHandler(this, &Form1::check5_CheckedChanged);
			// 
			// check4
			// 
			this->check4->AutoSize = true;
			this->check4->Location = System::Drawing::Point(347, 208);
			this->check4->Name = L"check4";
			this->check4->Size = System::Drawing::Size(15, 14);
			this->check4->TabIndex = 124;
			this->check4->UseVisualStyleBackColor = true;
			this->check4->CheckedChanged += gcnew System::EventHandler(this, &Form1::check4_CheckedChanged);
			// 
			// check12
			// 
			this->check12->AutoSize = true;
			this->check12->Location = System::Drawing::Point(347, 415);
			this->check12->Name = L"check12";
			this->check12->Size = System::Drawing::Size(15, 14);
			this->check12->TabIndex = 132;
			this->check12->UseVisualStyleBackColor = true;
			this->check12->CheckedChanged += gcnew System::EventHandler(this, &Form1::check12_CheckedChanged);
			// 
			// check11
			// 
			this->check11->AutoSize = true;
			this->check11->Location = System::Drawing::Point(347, 390);
			this->check11->Name = L"check11";
			this->check11->Size = System::Drawing::Size(15, 14);
			this->check11->TabIndex = 131;
			this->check11->UseVisualStyleBackColor = true;
			this->check11->CheckedChanged += gcnew System::EventHandler(this, &Form1::check11_CheckedChanged);
			// 
			// check10
			// 
			this->check10->AutoSize = true;
			this->check10->Location = System::Drawing::Point(347, 364);
			this->check10->Name = L"check10";
			this->check10->Size = System::Drawing::Size(15, 14);
			this->check10->TabIndex = 130;
			this->check10->UseVisualStyleBackColor = true;
			this->check10->CheckedChanged += gcnew System::EventHandler(this, &Form1::check10_CheckedChanged);
			// 
			// check9
			// 
			this->check9->AutoSize = true;
			this->check9->Location = System::Drawing::Point(347, 338);
			this->check9->Name = L"check9";
			this->check9->Size = System::Drawing::Size(15, 14);
			this->check9->TabIndex = 129;
			this->check9->UseVisualStyleBackColor = true;
			this->check9->CheckedChanged += gcnew System::EventHandler(this, &Form1::check9_CheckedChanged);
			// 
			// check8
			// 
			this->check8->AutoSize = true;
			this->check8->Location = System::Drawing::Point(347, 312);
			this->check8->Name = L"check8";
			this->check8->Size = System::Drawing::Size(15, 14);
			this->check8->TabIndex = 128;
			this->check8->UseVisualStyleBackColor = true;
			this->check8->CheckedChanged += gcnew System::EventHandler(this, &Form1::check8_CheckedChanged);
			// 
			// check7
			// 
			this->check7->AutoSize = true;
			this->check7->Location = System::Drawing::Point(347, 285);
			this->check7->Name = L"check7";
			this->check7->Size = System::Drawing::Size(15, 14);
			this->check7->TabIndex = 127;
			this->check7->UseVisualStyleBackColor = true;
			this->check7->CheckedChanged += gcnew System::EventHandler(this, &Form1::check7_CheckedChanged);
			// 
			// check18
			// 
			this->check18->AutoSize = true;
			this->check18->Location = System::Drawing::Point(347, 571);
			this->check18->Name = L"check18";
			this->check18->Size = System::Drawing::Size(15, 14);
			this->check18->TabIndex = 138;
			this->check18->UseVisualStyleBackColor = true;
			this->check18->CheckedChanged += gcnew System::EventHandler(this, &Form1::check18_CheckedChanged);
			// 
			// check17
			// 
			this->check17->AutoSize = true;
			this->check17->Location = System::Drawing::Point(347, 546);
			this->check17->Name = L"check17";
			this->check17->Size = System::Drawing::Size(15, 14);
			this->check17->TabIndex = 137;
			this->check17->UseVisualStyleBackColor = true;
			this->check17->CheckedChanged += gcnew System::EventHandler(this, &Form1::check17_CheckedChanged);
			// 
			// check16
			// 
			this->check16->AutoSize = true;
			this->check16->Location = System::Drawing::Point(347, 520);
			this->check16->Name = L"check16";
			this->check16->Size = System::Drawing::Size(15, 14);
			this->check16->TabIndex = 136;
			this->check16->UseVisualStyleBackColor = true;
			this->check16->CheckedChanged += gcnew System::EventHandler(this, &Form1::check16_CheckedChanged);
			// 
			// check15
			// 
			this->check15->AutoSize = true;
			this->check15->Location = System::Drawing::Point(347, 494);
			this->check15->Name = L"check15";
			this->check15->Size = System::Drawing::Size(15, 14);
			this->check15->TabIndex = 135;
			this->check15->UseVisualStyleBackColor = true;
			this->check15->CheckedChanged += gcnew System::EventHandler(this, &Form1::check15_CheckedChanged);
			// 
			// check14
			// 
			this->check14->AutoSize = true;
			this->check14->Location = System::Drawing::Point(347, 468);
			this->check14->Name = L"check14";
			this->check14->Size = System::Drawing::Size(15, 14);
			this->check14->TabIndex = 134;
			this->check14->UseVisualStyleBackColor = true;
			this->check14->CheckedChanged += gcnew System::EventHandler(this, &Form1::check14_CheckedChanged);
			// 
			// check13
			// 
			this->check13->AutoSize = true;
			this->check13->Location = System::Drawing::Point(347, 441);
			this->check13->Name = L"check13";
			this->check13->Size = System::Drawing::Size(15, 14);
			this->check13->TabIndex = 133;
			this->check13->UseVisualStyleBackColor = true;
			this->check13->CheckedChanged += gcnew System::EventHandler(this, &Form1::check13_CheckedChanged);
			// 
			// check22
			// 
			this->check22->AutoSize = true;
			this->check22->Location = System::Drawing::Point(347, 650);
			this->check22->Name = L"check22";
			this->check22->Size = System::Drawing::Size(15, 14);
			this->check22->TabIndex = 142;
			this->check22->UseVisualStyleBackColor = true;
			this->check22->CheckedChanged += gcnew System::EventHandler(this, &Form1::check22_CheckedChanged);
			// 
			// check21
			// 
			this->check21->AutoSize = true;
			this->check21->Location = System::Drawing::Point(347, 624);
			this->check21->Name = L"check21";
			this->check21->Size = System::Drawing::Size(15, 14);
			this->check21->TabIndex = 141;
			this->check21->UseVisualStyleBackColor = true;
			this->check21->CheckedChanged += gcnew System::EventHandler(this, &Form1::check21_CheckedChanged);
			// 
			// check20
			// 
			this->check20->AutoSize = true;
			this->check20->Location = System::Drawing::Point(347, 598);
			this->check20->Name = L"check20";
			this->check20->Size = System::Drawing::Size(15, 14);
			this->check20->TabIndex = 140;
			this->check20->UseVisualStyleBackColor = true;
			this->check20->CheckedChanged += gcnew System::EventHandler(this, &Form1::check20_CheckedChanged);
			// 
			// check19
			// 
			this->check19->AutoSize = true;
			this->check19->Location = System::Drawing::Point(347, 571);
			this->check19->Name = L"check19";
			this->check19->Size = System::Drawing::Size(15, 14);
			this->check19->TabIndex = 139;
			this->check19->UseVisualStyleBackColor = true;
			this->check19->CheckedChanged += gcnew System::EventHandler(this, &Form1::check19_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(296, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 148;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(129, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 15);
			this->label6->TabIndex = 149;
			this->label6->Text = L"Label Printer";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->Size = System::Drawing::Size(397, 24);
			this->menuStrip1->TabIndex = 150;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->refreshToolStripMenuItem,
					this->printToolStripMenuItem, this->toolStripSeparator1, this->settingsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// refreshToolStripMenuItem
			// 
			this->refreshToolStripMenuItem->Name = L"refreshToolStripMenuItem";
			this->refreshToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->refreshToolStripMenuItem->Text = L"Refresh";
			this->refreshToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::refreshToolStripMenuItem_Click);
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->printDialogToolStripMenuItem,
					this->printPreviewToolStripMenuItem, this->printToolStripMenuItem1
			});
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->printToolStripMenuItem->Text = L"Print";
			// 
			// printDialogToolStripMenuItem
			// 
			this->printDialogToolStripMenuItem->Name = L"printDialogToolStripMenuItem";
			this->printDialogToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->printDialogToolStripMenuItem->Text = L"Print Dialog";
			this->printDialogToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::printDialogToolStripMenuItem_Click);
			// 
			// printPreviewToolStripMenuItem
			// 
			this->printPreviewToolStripMenuItem->Name = L"printPreviewToolStripMenuItem";
			this->printPreviewToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->printPreviewToolStripMenuItem->Text = L"Print Preview";
			this->printPreviewToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::printPreviewToolStripMenuItem_Click);
			// 
			// printToolStripMenuItem1
			// 
			this->printToolStripMenuItem1->Name = L"printToolStripMenuItem1";
			this->printToolStripMenuItem1->Size = System::Drawing::Size(143, 22);
			this->printToolStripMenuItem1->Text = L"Print";
			this->printToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::printToolStripMenuItem1_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(113, 6);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->settingsToolStripMenuItem->Text = L"Settings";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::settingsToolStripMenuItem_Click);
			// 
			// checkAll
			// 
			this->checkAll->AutoSize = true;
			this->checkAll->Location = System::Drawing::Point(347, 97);
			this->checkAll->Name = L"checkAll";
			this->checkAll->Size = System::Drawing::Size(15, 14);
			this->checkAll->TabIndex = 151;
			this->checkAll->UseVisualStyleBackColor = true;
			this->checkAll->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 514);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(325, 26);
			this->label7->TabIndex = 152;
			this->label7->Text = L"._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.\r\n\r\n";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(37, 569);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 15);
			this->label8->TabIndex = 153;
			this->label8->Text = L"Time";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(129, 540);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 15);
			this->label9->TabIndex = 154;
			this->label9->Text = L"Custom Dates";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(242, 569);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 15);
			this->label10->TabIndex = 155;
			this->label10->Text = L"Product";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(129, 566);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 15);
			this->label11->TabIndex = 156;
			this->label11->Text = L"Amount";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(36, 667);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(325, 26);
			this->label12->TabIndex = 157;
			this->label12->Text = L"._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.\r\n\r\n";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 546);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(96, 17);
			this->checkBox1->TabIndex = 158;
			this->checkBox1->Text = L"MM/dd Format";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form1::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(414, 688);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->checkAll);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->check22);
			this->Controls->Add(this->check21);
			this->Controls->Add(this->check20);
			this->Controls->Add(this->check19);
			this->Controls->Add(this->check18);
			this->Controls->Add(this->check17);
			this->Controls->Add(this->check16);
			this->Controls->Add(this->check15);
			this->Controls->Add(this->check14);
			this->Controls->Add(this->check13);
			this->Controls->Add(this->check12);
			this->Controls->Add(this->check11);
			this->Controls->Add(this->check10);
			this->Controls->Add(this->check9);
			this->Controls->Add(this->check8);
			this->Controls->Add(this->check7);
			this->Controls->Add(this->check6);
			this->Controls->Add(this->check5);
			this->Controls->Add(this->check4);
			this->Controls->Add(this->check3);
			this->Controls->Add(this->check2);
			this->Controls->Add(this->check1);
			this->Controls->Add(this->num22);
			this->Controls->Add(this->num21);
			this->Controls->Add(this->num20);
			this->Controls->Add(this->num19);
			this->Controls->Add(this->num18);
			this->Controls->Add(this->num17);
			this->Controls->Add(this->num16);
			this->Controls->Add(this->num15);
			this->Controls->Add(this->num14);
			this->Controls->Add(this->num13);
			this->Controls->Add(this->num12);
			this->Controls->Add(this->num11);
			this->Controls->Add(this->num10);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->btnPreviousPage);
			this->Controls->Add(this->btnNextPage);
			this->Controls->Add(this->txt22);
			this->Controls->Add(this->time22);
			this->Controls->Add(this->txt21);
			this->Controls->Add(this->txt20);
			this->Controls->Add(this->time21);
			this->Controls->Add(this->time20);
			this->Controls->Add(this->txt19);
			this->Controls->Add(this->txt18);
			this->Controls->Add(this->time19);
			this->Controls->Add(this->time18);
			this->Controls->Add(this->txt17);
			this->Controls->Add(this->time17);
			this->Controls->Add(this->txt16);
			this->Controls->Add(this->txt15);
			this->Controls->Add(this->time16);
			this->Controls->Add(this->time15);
			this->Controls->Add(this->txt14);
			this->Controls->Add(this->txt13);
			this->Controls->Add(this->time14);
			this->Controls->Add(this->time13);
			this->Controls->Add(this->txt12);
			this->Controls->Add(this->time12);
			this->Controls->Add(this->txt11);
			this->Controls->Add(this->time11);
			this->Controls->Add(this->txt10);
			this->Controls->Add(this->txt9);
			this->Controls->Add(this->time10);
			this->Controls->Add(this->time9);
			this->Controls->Add(this->txt8);
			this->Controls->Add(this->txt7);
			this->Controls->Add(this->time8);
			this->Controls->Add(this->time7);
			this->Controls->Add(this->txt6);
			this->Controls->Add(this->txt5);
			this->Controls->Add(this->time6);
			this->Controls->Add(this->time5);
			this->Controls->Add(this->txt4);
			this->Controls->Add(this->txt3);
			this->Controls->Add(this->time4);
			this->Controls->Add(this->time3);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->time2);
			this->Controls->Add(this->time1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label7);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Label Maker";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num19))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


		int page, pageMax, pageMin;
		bool dateType;
		String ^ timeCust1 = ""; String ^ fileName; String ^ timeCust2 = ""; String ^ timeCust3 = ""; String ^ prodCust1 = ""; String ^ prodCust2 = ""; String ^ prodCust3 = ""; String ^ product1; String ^ product2; String ^ product3;
		DateTime dateCust1, dateCust2, dateCust3, today, dayVal;
		array<bool>^ a = gcnew array<bool>(50);
		array<bool>^ b = gcnew array<bool>(50);
		array<int>^ numbA = gcnew array<int>(50);
		array<int>^ numbB = gcnew array<int>(50);
		array<int>^ numbVal2A = gcnew array<int>(50);
		array<int>^ numbVal2B = gcnew array<int>(50);
		array<CheckBox^>^ check = gcnew array<CheckBox^>(50);
		array<TextBox^>^ time = gcnew array<TextBox^>(50);
		array<NumericUpDown^>^ num = gcnew array<NumericUpDown^>(50);
		array<TextBox^>^ txt = gcnew array<TextBox^>(50);
		array<String^>^ productA = gcnew array<String^>(50);
		array<String^>^ productB = gcnew array<String^>(50);
		array<int>^ dayValA = gcnew array<int>(50);
		array<int>^ dayValB = gcnew array<int>(50);
		array<String^>^ expirationDateA = gcnew array<String^>(50);
		array<String^>^ expirationDateB = gcnew array<String^>(50);

		void read() {
			// ******************************* READS PRODUCT NAMES FROM PRODUCTS.TXT *********************************\\

			fileName = "data/products.txt";

			try	{
				StreamReader^ din = File::OpenText(fileName);

				String^ str;
				int count = 0;
				while ((str = din->ReadLine()) != nullptr) {
					if (count <= 21) {
						count++;
						productA[count] = str;
					} else if (count <= 36) {
						count++;
						productB[count - 22] = str;
					}
				}
				din->Close();
			}
			catch (Exception^ e) {
			}
			// ******************************* READS PRODUCT EXP DATES FROM TIME.TXT *********************************\\

			fileName = "data/time.txt";

			try {
				StreamReader^ din = File::OpenText(fileName);

				String^ str;
				int count = 0;
				while ((str = din->ReadLine()) != nullptr) {
					if (count <= 21) {
						count++;
						Int32::TryParse(str, dayValA[count]);
					}
					else if (count <= 36) {
						count++;
						Int32::TryParse(str, dayValB[count - 22]);
					}
				}
				din->Close();
			}
			catch (Exception^ e) {
			}
			// ******************************* READS AMOUNT FROM AMOUNT.TXT *********************************\\

			fileName = "data/amount.txt";

			try {
				StreamReader^ din = File::OpenText(fileName);

				String^ str;
				int count = 0;
				while ((str = din->ReadLine()) != nullptr) {
					if (count <= 21) {
						count++;
						numbA[count] = Convert::ToInt32(str);
					}
					else if (count <= 36) {
						count++;
						numbB[count - 22] = Convert::ToInt32(str);
					}
				}
				din->Close();
			}
			catch (Exception^ e) {
			}
			//*******************************************************************************************************
			fileName = "data/amount1.txt";

			try {
				StreamReader^ din = File::OpenText(fileName);

				String^ str;
				int count = 0;
				while ((str = din->ReadLine()) != nullptr) {
					if (count <= 21) {
						count++;
						numbVal2A[count] = Convert::ToInt32(str);
					}
					else if (count <= 36) {
						count++;
						numbVal2B[count - 22] = Convert::ToInt32(str);
					}
				}
				din->Close();
			}
			catch (Exception^ e) {
			}

			return;
		}

		void checkUpdate(){
			if (page == 1){
				for (int i = 1; i <= 22; i++) {
					num[i]->Enabled = a[i];
					txt[i]->Enabled = a[i];
					time[i]->Enabled = a[i];
				}
			} else if (page == 2){
				for (int i = 1; i <= 22; i++) {
					num[i]->Enabled = b[i];
					txt[i]->Enabled = b[i];
					time[i]->Enabled = b[i];
				}
			}

		}

		void calc() {
			for (int i = 1; i <= 22; i++) {
				today = dateTimePicker1->Value;
				today = today.AddDays(dayValA[i]);
				expirationDateA[i] = (today.DayOfWeek.ToString() + " - " + today.Month.ToString() + "/" + today.Day.ToString());
				if (today == dateTimePicker1->Value) {
					expirationDateA[i] = ("Close");
				}
			}
			for (int i = 1; i <= 15; i++) {
				today = dateTimePicker1->Value;
				today = today.AddDays(dayValB[i]);
				expirationDateB[i] = (today.DayOfWeek.ToString() + " - " + today.Month.ToString() + "/" + today.Day.ToString());
				if (today == dateTimePicker1->Value) {
					expirationDateB[i] = ("Close");
				}
			}
		}

		void pageLoad(){
			//***************************************PAGE 1***********************************************************
			if (page == 1) {
				txt20->ReadOnly = true; txt21->ReadOnly = true; txt22->ReadOnly = true;
				//*******Changes Textboxes to the product and day value saved in local textfiles
				for (int i = 1; i <= 22; i++) {
					if ((dayVal.DayOfWeek).ToString() == "Friday" || ((dayVal.DayOfWeek).ToString() == "Saturday") || ((dayVal.DayOfWeek).ToString() == "Sunday")) {
						num[i]->Value = numbVal2A[i];
					}
					else {
						num[i]->Value = numbA[i];
					}
					txt[i]->Text = productA[i];
					if (dayValA[i] == 0) {
						time[i]->Text = "CL";
					}
					else {
						time[i]->Text = dayValA[i].ToString();
					}
				}
				checkBox1->Visible = false;
				label7->Visible = false; label8->Visible = false; label10->Visible = false; label11->Visible = false; label9->Visible = false;
				//*******Sets objects that aren't visible on page B to visible
				for (int i = 16; i <= 19; i++) {
					txt[i]->Visible = true;
					num[i]->Visible = true;
					time[i]->Visible = true;
					check[i]->Visible = true;
				}
				//*******Parses the time text into an integer value, also enables checks if needed
				for (int i = 1; i <= 22; i++) {
					Int32::TryParse(time[i]->Text, dayValA[i]);
					check[i]->Checked = !a[i];
					num[i]->Enabled = a[i];
				}
				checkUpdate();
				//*******************************************END PAGE 1*********************************************************
				//********************************************PAGE 2************************************************************
			} else if (page == 2) {
				txt20->ReadOnly = false; txt21->ReadOnly = false; txt22->ReadOnly = false;
				//*******Changes Textboxes to the product and day value saved in local textfiles
				for (int i = 1; i <= 15; i++) {
					if ((dayVal.DayOfWeek).ToString() == "Friday" || ((dayVal.DayOfWeek).ToString() == "Saturday") || ((dayVal.DayOfWeek).ToString() == "Sunday")) {
						num[i]->Value = numbVal2B[i];
					}
					else {
						num[i]->Value = numbB[i];
					}
					txt[i]->Text = productB[i];
					if (dayValB[i] == 0) {
						time[i]->Text = "CL";
					} else {
						time[i]->Text = dayValB[i].ToString();
					}
				}
				//*******Sets textboxes to previously entered custom settings
				txt[20]->Text = prodCust1;
				txt[21]->Text = prodCust2;
				txt[22]->Text = prodCust3;
				time[20]->Text = timeCust1;
				time[21]->Text = timeCust2;
				time[22]->Text = timeCust3;
				checkBox1->Visible = true;
				label7->Visible = true; label8->Visible = true; label10->Visible = true; label11->Visible = true; label9->Visible = true;
				//*******Sets objects that aren't visible on page B to not visible
				for (int i = 16; i <= 19; i++) {
					txt[i]->Visible = false;
					num[i]->Visible = false;
					time[i]->Visible = false;
					check[i]->Visible = false;
				}
				//*******Parses the time text into an integer value, also enables checks if needed
				for (int i = 1; i <= 22; i++) {
					check[i]->Checked = !b[i];
					num[i]->Enabled = b[i];
					Int32::TryParse(time[i]->Text, dayValB[i]);
				}
				checkUpdate();
				//*******parses the MM/dd Date Type
				if (dateType == 1) {
					if (time20->Text != "") {
						dateCust1 = Convert::ToDateTime(time20->Text);
					}
					else if (time21->Text != "") {
						dateCust2 = Convert::ToDateTime(time21->Text);
					}
					else if (time22->Text != "") {
						dateCust3 = Convert::ToDateTime(time22->Text);
					}
				}
			}
			//*******************************************END PAGE 2*********************************************************
			label5->Text = "Page " + page.ToString() + "/" + pageMax.ToString(); //Displays page in top right
			calc();// calculates time into datetime values
			//*************************************************************END PAGE LOAD*****************************************
		}

		//*******************************************Next Page Button*********************************************************
private: System::Void btnNextPage_Click(System::Object^  sender, System::EventArgs^  e) {
			 page++;
			 for (int i = 1; i <= 22; i++) {
				 numbA[i] = Convert::ToInt32(num[i]->Value);
				 num[i]->Value = numbB[i];
			 }
			 if (page == pageMax) {
				 btnNextPage->Enabled = false;
			 }
			 btnPreviousPage->Enabled = true;
			 read();
			 pageLoad();
		 }

		 //*******************************************Previous Page Button*********************************************************
private: System::Void btnPreviousPage_Click(System::Object^  sender, System::EventArgs^  e) {
			 page--;
			 for (int i = 1; i <= 22; i++) {
				 numbB[i] = Convert::ToInt32(num[i]->Value);
				 num[i]->Value = numbA[i];
			 }
			 if (page == pageMin){
				 btnPreviousPage->Enabled = false;
			 }
			 read();
			 prodCust1 = txt20->Text; prodCust2 = txt21->Text; prodCust3 = txt22->Text;
			 timeCust1 = time20->Text; timeCust2 = time21->Text; timeCust3 = time22->Text;
			 btnNextPage->Enabled = true;
			 pageLoad();
		 }
		 //*******************************************Things That Happen On Load*********************************************************
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 txt[1] = this->txt1; txt[2] = this->txt2; txt[3] = this->txt3; txt[4] = this->txt4; txt[5] = this->txt5; txt[6] = this->txt6; txt[7] = this->txt7; txt[8] = this->txt8; txt[9] = this->txt9; txt[10] = this->txt10; txt[11] = this->txt11; txt[12] = this->txt12; txt[13] = this->txt13; txt[14] = this->txt14; txt[15] = this->txt15; txt[16] = this->txt16; txt[17] = this->txt17; txt[18] = this->txt18; txt[19] = this->txt19; txt[20] = this->txt20; txt[21] = this->txt21; txt[22] = this->txt22;
			 num[1] = this->num1; num[2] = this->num2; num[3] = this->num3; num[4] = this->num4; num[5] = this->num5; num[6] = this->num6; num[7] = this->num7; num[8] = this->num8; num[9] = this->num9; num[10] = this->num10; num[11] = this->num11; num[12] = this->num12; num[13] = this->num13; num[14] = this->num14; num[15] = this->num15; num[16] = this->num16; num[17] = this->num17; num[18] = this->num18; num[19] = this->num19; num[20] = this->num20; num[21] = this->num21; num[22] = this->num22;
			 time[1] = this->time1; time[2] = this->time2; time[3] = this->time3; time[4] = this->time4; time[5] = this->time5; time[6] = this->time6; time[7] = this->time7; time[8] = this->time8; time[9] = this->time9; time[10] = this->time10; time[11] = this->time11; time[12] = this->time12; time[13] = this->time13; time[14] = this->time14; time[15] = this->time15; time[16] = this->time16; time[17] = this->time17; time[18] = this->time18; time[19] = this->time19; time[20] = this->time20; time[21] = this->time21; time[22] = this->time22;
			 check[1] = this->check1; check[2] = this->check2; check[3] = this->check3; check[4] = this->check4; check[5] = this->check5; check[6] = this->check6; check[7] = this->check7; check[8] = this->check8; check[9] = this->check9; check[10] = this->check10; check[11] = this->check11; check[12] = this->check12; check[13] = this->check13; check[14] = this->check14; check[15] = this->check15; check[16] = this->check16; check[17] = this->check17; check[18] = this->check18; check[19] = this->check19; check[20] = this->check20; check[21] = this->check21; check[22] = this->check22;
			 page = 1;
			 pageMin = 1;
			 pageMax = 2;
			 for (int i = 1; i < 23; i++) {
				 a[i] = 1;
				 b[i] = 1;
			 }
			 calc();
			 b[20] = 0;
			 b[21] = 0;
			 b[22] = 0;
			 dayVal = dateTimePicker1->Value;
			 label5->Text = "Page " + page.ToString() + "/" + pageMax.ToString();
			 dateTimePicker1->Format = DateTimePickerFormat::Custom;
			 today = DateTime::Today;
			 read();
			 pageLoad();
		 }

		 //****************************************Checkboxes!***********************************************\\


		private: System::Void check1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check1->Checked) {
						if (page == 1) {
							a[1] = 0;
						} else if (page == 2) {
							b[1] = 0;
						}
					 } else {
						 if (page == 1){
							 a[1] = 1;
						 } else if (page == 2){
							 b[1] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check2->Checked) {
						if (page == 1) {
							a[2] = 0;
						} else if (page == 2) {
							b[2] = 0;
						}
					 } else {
						 if (page == 1){
							 a[2] = 1;
						 } else if (page == 2){
							 b[2] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check3->Checked) {
						if (page == 1) {
							a[3] = 0;
						} else if (page == 2) {
							b[3] = 0;
						}
					 } else {
						 if (page == 1){
							 a[3] = 1;
						 } else if (page == 2){
							 b[3] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check4->Checked) {
						if (page == 1) {
							a[4] = 0;
						} else if (page == 2) {
							b[4] = 0;
						}
					 } else {
						 if (page == 1){
							 a[4] = 1;
						 } else if (page == 2){
							 b[4] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check5->Checked) {
						if (page == 1) {
							a[5] = 0;
						} else if (page == 2) {
							b[5] = 0;
						}
					 } else {
						 if (page == 1){
							 a[5] = 1;
						 } else if (page == 2){
							 b[5] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check6->Checked) {
						if (page == 1) {
							a[6] = 0;
						} else if (page == 2) {
							b[6] = 0;
						}
					 } else {
						 if (page == 1){
							 a[6] = 1;
						 } else if (page == 2){
							 b[6] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check7->Checked) {
						if (page == 1) {
							a[7] = 0;
						} else if (page == 2) {
							b[7] = 0;
						}
					 } else {
						 if (page == 1){
							 a[7] = 1;
						 } else if (page == 2){
							 b[7] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check8->Checked) {
						if (page == 1) {
							a[8] = 0;
						} else if (page == 2) {
							b[8] = 0;
						}
					 } else {
						 if (page == 1){
							 a[8] = 1;
						 } else if (page == 2){
							 b[8] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check9->Checked) {
						if (page == 1) {
							a[9] = 0;
						} else if (page == 2) {
							b[9] = 0;
						}
					 } else {
						 if (page == 1){
							 a[9] = 1;
						 } else if (page == 2){
							 b[9] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check10->Checked) {
						if (page == 1) {
							a[10] = 0;
						} else if (page == 2) {
							b[10] = 0;
						}
					 } else {
						 if (page == 1){
							 a[10] = 1;
						 } else if (page == 2){
							 b[10] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check11->Checked) {
						if (page == 1) {
							a[11] = 0;
						} else if (page == 2) {
							b[11] = 0;
						}
					 } else {
						 if (page == 1){
							 a[11] = 1;
						 } else if (page == 2){
							 b[11] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check12->Checked) {
						if (page == 1) {
							a[12] = 0;
						} else if (page == 2) {
							b[12] = 0;
						}
					 } else {
						 if (page == 1){
							 a[12] = 1;
						 } else if (page == 2){
							 b[12] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check13_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check13->Checked) {
						if (page == 1) {
							a[13] = 0;
						} else if (page == 2) {
							b[13] = 0;
						}
					 } else {
						 if (page == 1){
							 a[13] = 1;
						 } else if (page == 2){
							 b[13] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check14->Checked) {
						if (page == 1) {
							a[14] = 0;
						} else if (page == 2) {
							b[14] = 0;
						}
					 } else {
						 if (page == 1){
							 a[14] = 1;
						 } else if (page == 2){
							 b[14] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check15->Checked) {
						if (page == 1) {
							a[15] = 0;
						} else if (page == 2) {
							b[15] = 0;
						}
					 } else {
						 if (page == 1){
							 a[15] = 1;
						 } else if (page == 2){
							 b[15] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check16->Checked) {
						if (page == 1) {
							a[16] = 0;
						} else if (page == 2) {
							b[16] = 0;
						}
					 } else {
						 if (page == 1){
							 a[16] = 1;
						 } else if (page == 2){
							 b[16] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check17->Checked) {
						if (page == 1) {
							a[17] = 0;
						} else if (page == 2) {
							b[17] = 0;
						}
					 } else {
						 if (page == 1){
							 a[17] = 1;
						 } else if (page == 2){
							 b[17] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check18_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check18->Checked) {
						if (page == 1) {
							a[18] = 0;
						} else if (page == 2) {
							b[18] = 0;
						}
					 } else {
						 if (page == 1){
							 a[18] = 1;
						 } else if (page == 2){
							 b[18] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check19_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check19->Checked) {
						if (page == 1) {
							a[19] = 0;
						} else if (page == 2) {
							b[19] = 0;
						}
					 } else {
						 if (page == 1){
							 a[19] = 1;
						 } else if (page == 2){
							 b[19] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check20_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check20->Checked) {
						if (page == 1) {
							a[20] = 0;
						} else if (page == 2) {
							b[20] = 0;
						}
					 } else {
						 if (page == 1){
							 a[20] = 1;
						 } else if (page == 2){
							 b[20] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check21_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check21->Checked) {
						if (page == 1) {
							a[21] = 0;
						} else if (page == 2) {
							b[21] = 0;
						}
					 } else {
						 if (page == 1){
							 a[21] = 1;
						 } else if (page == 2){
							 b[21] = 1;
						 }
					 }
					 checkUpdate();
				 }
		private: System::Void check22_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					 if (check22->Checked) {
						if (page == 1) {
							a[22] = 0;
						} else if (page == 2) {
							b[22] = 0;
						}
					 } else {
						 if (page == 1){
							 a[22] = 1;
						 } else if (page == 2){
							 b[22] = 1;
						 }
					 }
					 checkUpdate();
				 }

		//*****************************************************************************************************\\

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked) {
		dateType = 1;
	} else {
		dateType = 0;
	}
}

	//***********************************************************PRINTING***************************************************************\\

	private: System::Void printDialogToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		PrintDialog ^ printDialog1 = gcnew PrintDialog();
		printDialog1->Document = printDocument1;
		System::Windows::Forms::DialogResult result = printDialog1->ShowDialog();
	}
	private: System::Void printPreviewToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		printPreviewDialog1->Document = printDocument1;
		printPreviewDialog1->ShowDialog();
	}
	private: System::Void printToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		printDocument1->Print();
	}
	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
		e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 60, 90, 700, 90);
		e->Graphics->DrawLine(gcnew Pen(Color::Black, 1), 60, 93, 700, 93);
	}
	//***********************************************************************************************************************************\\

	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		today = dateTimePicker1->Value;
		dayVal = dateTimePicker1->Value;
		pageLoad();
	}

	private: System::Void settingsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm ^ form = gcnew MyForm;
		form->Show();
	}

	private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();
	}
private: System::Void refreshToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	read();
	pageLoad();
}
};
}

