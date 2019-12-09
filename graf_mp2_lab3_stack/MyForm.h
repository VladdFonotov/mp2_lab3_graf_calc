#pragma once
#include"Calculator.h"
#include<msclr/marshal_cppstd.h>
#include <math.h>

namespace grafmp2lab3stack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Graphics ^gr;
		Pen^ AxisPen;
		Pen^ EraserAxisPen;
		Pen^ MainGrafPen;
		Pen^ GrafPen1;
		Pen^ GrafPen2;
		Pen^ GrafPen3;
		Pen^ GrafPen4;
		Pen^ GrafPen5;
		Pen^ EraserGrafPen;
		std::string* CacheGraf;
		double MainCacheSize=15;
		double CacheSize=15;
		
	private: System::Windows::Forms::Button^  button33;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button34;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			gr = CreateGraphics();
			AxisPen = gcnew Pen(Color::Black);
			AxisPen->Width = 1.5F;
			EraserAxisPen = gcnew Pen(Color::SlateBlue);
			EraserAxisPen->Width = 1.5F;
			MainGrafPen = gcnew Pen(Color::LightCoral);
			MainGrafPen->Width = 2.0F;
			GrafPen1 = gcnew Pen(Color::Red);
			GrafPen1->Width = 2.0F;
			GrafPen2 = gcnew Pen(Color::Blue);
			GrafPen2->Width = 2.0F;
			GrafPen3 = gcnew Pen(Color::Magenta);
			GrafPen3->Width = 2.0F;
			GrafPen4 = gcnew Pen(Color::White);
			GrafPen4->Width = 2.0F;
			GrafPen5 = gcnew Pen(Color::Yellow);
			GrafPen5->Width = 2.0F;
			EraserGrafPen = gcnew Pen(Color::SlateBlue);
			EraserGrafPen->Width = 2.0F;
			CacheGraf = new std::string[6];
			for (int i = 0; i < 6; i++)
			{
				CacheGraf[i] = "";
			}
			CacheSize = 7;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  с;



	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;


	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  graf;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->с = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->graf = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCoral;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(21, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(380, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(22, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(379, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Wheat;
			this->label1->Location = System::Drawing::Point(18, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 40);
			this->label1->TabIndex = 2;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumPurple;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(265, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 42);
			this->button2->TabIndex = 3;
			this->button2->Text = L"7";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumPurple;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(313, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(42, 42);
			this->button3->TabIndex = 4;
			this->button3->Text = L"8";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MediumPurple;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(265, 185);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(42, 42);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::MediumPurple;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(313, 185);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(42, 42);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::MediumPurple;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(359, 137);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(42, 42);
			this->button6->TabIndex = 7;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::MediumPurple;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(359, 185);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(42, 42);
			this->button7->TabIndex = 8;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::MediumPurple;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(265, 233);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(42, 42);
			this->button8->TabIndex = 9;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::MediumPurple;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(313, 233);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(42, 42);
			this->button9->TabIndex = 10;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::MediumPurple;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(359, 233);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(42, 42);
			this->button10->TabIndex = 11;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// с
			// 
			this->с->BackColor = System::Drawing::Color::LightCoral;
			this->с->Cursor = System::Windows::Forms::Cursors::Hand;
			this->с->FlatAppearance->BorderSize = 0;
			this->с->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->с->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->с->ForeColor = System::Drawing::Color::White;
			this->с->Location = System::Drawing::Point(22, 89);
			this->с->Name = L"с";
			this->с->Size = System::Drawing::Size(146, 42);
			this->с->TabIndex = 12;
			this->с->Text = L"C";
			this->с->UseVisualStyleBackColor = false;
			this->с->Click += gcnew System::EventHandler(this, &MyForm::с_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::MediumPurple;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(265, 281);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(136, 42);
			this->button14->TabIndex = 15;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::MediumPurple;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(21, 137);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(62, 42);
			this->button15->TabIndex = 16;
			this->button15->Text = L"sin";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::MediumPurple;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(217, 329);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(42, 42);
			this->button16->TabIndex = 17;
			this->button16->Text = L"x!";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::MediumPurple;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(21, 233);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(94, 42);
			this->button17->TabIndex = 18;
			this->button17->Text = L"arcsin";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::MediumPurple;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(149, 137);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(62, 42);
			this->button18->TabIndex = 19;
			this->button18->Text = L"tan";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::MediumPurple;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(85, 185);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(62, 42);
			this->button19->TabIndex = 20;
			this->button19->Text = L"exp";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::MediumPurple;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(21, 185);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(62, 42);
			this->button20->TabIndex = 21;
			this->button20->Text = L"log";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::MediumPurple;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(117, 233);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(94, 42);
			this->button21->TabIndex = 21;
			this->button21->Text = L"arccos";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::MediumPurple;
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(85, 137);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(62, 42);
			this->button22->TabIndex = 22;
			this->button22->Text = L"cos";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::MediumPurple;
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(21, 281);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(94, 42);
			this->button23->TabIndex = 23;
			this->button23->Text = L"arctan";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::MediumPurple;
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(117, 281);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(94, 42);
			this->button26->TabIndex = 26;
			this->button26->Text = L"sinh";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::MediumPurple;
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->ForeColor = System::Drawing::Color::White;
			this->button27->Location = System::Drawing::Point(21, 329);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(94, 42);
			this->button27->TabIndex = 27;
			this->button27->Text = L"cosh";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::MediumPurple;
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(117, 329);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(94, 42);
			this->button28->TabIndex = 28;
			this->button28->Text = L"tanh";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::MediumPurple;
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(149, 185);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(62, 42);
			this->button29->TabIndex = 29;
			this->button29->Text = L"abs";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// graf
			// 
			this->graf->BackColor = System::Drawing::Color::MediumPurple;
			this->graf->Cursor = System::Windows::Forms::Cursors::Hand;
			this->graf->FlatAppearance->BorderSize = 0;
			this->graf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->graf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->graf->ForeColor = System::Drawing::Color::White;
			this->graf->Location = System::Drawing::Point(174, 89);
			this->graf->Name = L"graf";
			this->graf->Size = System::Drawing::Size(227, 42);
			this->graf->TabIndex = 30;
			this->graf->Text = L"Построить график";
			this->graf->UseVisualStyleBackColor = false;
			this->graf->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::MediumPurple;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(217, 137);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(42, 42);
			this->button11->TabIndex = 31;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::MediumPurple;
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->ForeColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(217, 185);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(42, 42);
			this->button30->TabIndex = 32;
			this->button30->Text = L"-";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click_1);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::MediumPurple;
			this->button31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->ForeColor = System::Drawing::Color::White;
			this->button31->Location = System::Drawing::Point(217, 233);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(42, 42);
			this->button31->TabIndex = 33;
			this->button31->Text = L"*";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::MediumPurple;
			this->button32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->ForeColor = System::Drawing::Color::White;
			this->button32->Location = System::Drawing::Point(217, 281);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(42, 42);
			this->button32->TabIndex = 34;
			this->button32->Text = L"/";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::MediumPurple;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(356, 329);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(20, 42);
			this->button12->TabIndex = 13;
			this->button12->Text = L"(";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::MediumPurple;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(379, 329);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(20, 42);
			this->button13->TabIndex = 14;
			this->button13->Text = L")";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::MediumPurple;
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(265, 329);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(42, 42);
			this->button24->TabIndex = 24;
			this->button24->Text = L"Pi";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::MediumPurple;
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(312, 329);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(40, 42);
			this->button25->TabIndex = 25;
			this->button25->Text = L"e";
			this->button25->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::MediumPurple;
			this->button33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->ForeColor = System::Drawing::Color::White;
			this->button33->Location = System::Drawing::Point(21, 469);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(227, 29);
			this->button33->TabIndex = 35;
			this->button33->Text = L"Скрыть график\r\n";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Visible = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::MediumPurple;
			this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->ForeColor = System::Drawing::Color::White;
			this->button34->Location = System::Drawing::Point(662, 485);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(14, 13);
			this->button34->TabIndex = 36;
			this->button34->Text = L"Построить график";
			this->button34->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(662, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 13);
			this->label3->TabIndex = 38;
			this->label3->Text = L"15";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(662, 465);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 13);
			this->label4->TabIndex = 39;
			this->label4->Text = L"-15";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(470, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"-15";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(850, 275);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 13);
			this->label6->TabIndex = 41;
			this->label6->Text = L"-15";
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(671, 281);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"0";
			this->label2->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(19, 441);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(294, 20);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Введите размер системы координат:";
			this->label7->Visible = false;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(313, 441);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(88, 20);
			this->textBox2->TabIndex = 43;
			this->textBox2->Text = L"5";
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(454, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(85, 31);
			this->textBox3->TabIndex = 44;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(545, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(85, 31);
			this->textBox4->TabIndex = 45;
			this->textBox4->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(636, 12);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(85, 31);
			this->textBox5->TabIndex = 46;
			this->textBox5->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(727, 12);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(85, 31);
			this->textBox6->TabIndex = 47;
			this->textBox6->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(818, 12);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(85, 31);
			this->textBox7->TabIndex = 48;
			this->textBox7->Visible = false;
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::MediumPurple;
			this->button35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button35->ForeColor = System::Drawing::Color::White;
			this->button35->Location = System::Drawing::Point(454, 46);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(222, 33);
			this->button35->TabIndex = 49;
			this->button35->Text = L"Построить графики\r\n";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Visible = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::MediumPurple;
			this->button36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button36->ForeColor = System::Drawing::Color::White;
			this->button36->Location = System::Drawing::Point(682, 46);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(222, 33);
			this->button36->TabIndex = 50;
			this->button36->Text = L"Скрыть графики\r\n\r\n";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Visible = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::Red;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button37->Location = System::Drawing::Point(454, 0);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(85, 15);
			this->button37->TabIndex = 51;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Visible = false;
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::Blue;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button38->Location = System::Drawing::Point(545, 0);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(85, 15);
			this->button38->TabIndex = 52;
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Visible = false;
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::Magenta;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button39->Location = System::Drawing::Point(637, 0);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(85, 15);
			this->button39->TabIndex = 53;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Visible = false;
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::White;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button40->Location = System::Drawing::Point(727, 0);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(85, 15);
			this->button40->TabIndex = 54;
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Visible = false;
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::Yellow;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button41->Location = System::Drawing::Point(818, 0);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(85, 15);
			this->button41->TabIndex = 55;
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateBlue;
			this->ClientSize = System::Drawing::Size(915, 510);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->graf);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->с);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		void TDrawLineAxis()
		{
			gr->DrawLine(AxisPen, 470, 275, 850, 275);
			gr->DrawLine(AxisPen, 850, 275, 835, 280);
			gr->DrawLine(AxisPen, 850, 275, 835, 270);
			//
			gr->DrawLine(AxisPen, 663, 85, 663, 465);
			gr->DrawLine(AxisPen, 663, 85, 658, 100);
			gr->DrawLine(AxisPen, 663, 85, 668, 100);
		}
		void TEraserLineAxis()
		{
			gr->DrawLine(EraserAxisPen, 470, 275, 850, 275);
			gr->DrawLine(EraserAxisPen, 850, 275, 835, 280);
			gr->DrawLine(EraserAxisPen, 850, 275, 835, 270);
			//
			gr->DrawLine(EraserAxisPen, 663, 85, 663, 465);
			gr->DrawLine(EraserAxisPen, 663, 85, 658, 100);
			gr->DrawLine(EraserAxisPen, 663, 85, 668, 100);
		}
		void TDrawGraf(Pen^ Mypen,int x1,int y1,int x2,int y2)
		{
			gr->DrawLine(Mypen,x1+662, -y1+275,x2+662,-y2+275);
			
		}
		std::string ZamenaNaX(std::string _String_Graf,double x) {
			std::string String_Graf = _String_Graf;
			std::string StrX;
			std::string NewString = "";
			StrX = std::to_string(x);
			for (size_t i = 0; i < String_Graf.size(); i++)
			{
				if (!strncmp(&String_Graf[i], "x", 1))
				{
					if (strncmp(&String_Graf[i], "xp", 2))
					{
						NewString += "(";
						NewString += StrX;
						NewString += ")";
					}
					else
					{
						NewString += "x";
					}
				}
				else
				{
					NewString += String_Graf[i];
				}
			}
			return NewString;
		}
		void InicGraf(std::string _String_Graf,Pen^ Mypen,double _Size)
		{
			TCalculator calcul_for_graf;
			double LeftBorder = -(_Size);
			double RightBorder =_Size;
			double UpBorder = _Size;
			double DownBorder = -(_Size);
			//
			/*
			LeftBorder = -7;
			RightBorder = 7;
			UpBorder = 7;
			DownBorder = -7;
			if (textBox2->Text != "")
			{
				try
				{
					LeftBorder = -(abs(Convert::ToDouble(textBox2->Text)));
					RightBorder =abs( Convert::ToDouble(textBox2->Text));
					UpBorder = abs(Convert::ToDouble(textBox2->Text));
					DownBorder = -abs((Convert::ToDouble(textBox2->Text)));
				}
				catch (const std::exception&)
				{
					label1->Text = "Введите размер системы координат";
				}
			}
			*/
			label3->Text = gcnew System::String(std::to_string(LeftBorder).c_str());
			label4->Text = gcnew System::String(std::to_string(LeftBorder).c_str());
			label5->Text = gcnew System::String(std::to_string(LeftBorder).c_str());
			label6->Text = gcnew System::String(std::to_string(LeftBorder).c_str());
			try
			{
				std::string StringGraf = _String_Graf;
				for (double x = LeftBorder; x <= RightBorder; x = x + 0.001)
				{
					calcul_for_graf.SetExpr(ZamenaNaX(StringGraf,x));
					double y1 = calcul_for_graf.Calc();	
					calcul_for_graf.SetExpr(ZamenaNaX(StringGraf,x+0.001));
					double y2 = calcul_for_graf.Calc();
					if (!isnan(y1) && !isnan(y2))
						{
						if (y1 <= UpBorder && y1 >= DownBorder && y2 <= UpBorder && y2 >= DownBorder)
							{
								TDrawGraf(Mypen,380 / (2 * RightBorder) * x, 380 / (2 * RightBorder) * y1, 380 / (2 * RightBorder) * (x + 0.001), 380 / (2 * RightBorder) * y2);
							}
						}
				}
			}
			catch (char[])
			{
				label1->Text = "Еnter Graph";
			}
		}
		/*
		void TEraserGraf(int x1, int y1, int x2, int y2)
		{
			gr->DrawLine(EraserGrafPen, x1 + 662, -y1 + 275, x2 + 662, -y2 + 275);

		}
		*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
	    tmp= msclr::interop::marshal_as<std::string>(label1->Text);
		for (int i = 0; i < tmp.size(); i++)
		{
			if (tmp[i]==',')
			{
				tmp[i] = '.';
			}
		}
		textBox1->Text =gcnew System::String(tmp.c_str());
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			std::string Infix;
			Infix = msclr::interop::marshal_as<std::string>(textBox1->Text);
			TCalculator calcul;
			calcul.SetExpr(Infix);
			if (calcul.Check())
			{
				
				double rez = calcul.Calc();
				label1->Text = Convert::ToString(rez);
			}
		}
		catch (char *e)
		{
			std::string tmp;
			tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
			label1->Text = gcnew System::String(tmp.c_str());
		}
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
		tmp += ")";
		textBox1->Text = gcnew System::String(tmp.c_str());
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "arccos(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "e";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	InicGraf(CacheGraf[0], EraserGrafPen,MainCacheSize);
	CacheGraf[0] = msclr::interop::marshal_as<std::string>(textBox1->Text);
	if (textBox2->Text != "")
	{
		try
		{
			MainCacheSize = (abs(Convert::ToDouble(textBox2->Text)));
		}
		catch (const std::exception&)
		{
			label1->Text = "Введите размер системы координат";
		}
	}
	TDrawLineAxis();
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
	label6->Visible = true;
	label7->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = true;
	textBox5->Visible = true;
	textBox6->Visible = true;
	textBox7->Visible = true;
	button33->Visible = true;
	button35->Visible = true;
	button36->Visible = true;
	button37->Visible = true;
	button38->Visible = true;
	button39->Visible = true;	
	button40->Visible = true;
	button41->Visible = true;
	//
	std::string String_Graf;
	double Size;
	String_Graf = msclr::interop::marshal_as<std::string>(textBox1->Text);
	if (textBox2->Text != "")
	{
		try
		{
			Size = (abs(Convert::ToDouble(textBox2->Text)));
		}
		catch (const std::exception&)
		{
			label1->Text = "Введите размер системы координат";
		}
	}
	InicGraf(String_Graf,MainGrafPen,Size);
	/*
	//
	std::string BeforeX = "";
	std::string AfterX = "";
	TCalculator calcul_for_graf;
	bool flag = 0;
	double LeftBorder = -7;
	double RightBorder = 7;
	double UpBorder = 7;
	double DownBorder = -7;
	//
	std::string CacheGraf;
	CacheGraf = msclr::interop::marshal_as<std::string>(textBox1->Text);
	TDrawLineAxis();
	std::string String_Graf;
	BeforeX ="";
	AfterX = "";
	String_Graf = msclr::interop::marshal_as<std::string>(textBox1->Text);
	flag = 0;
	for (int i = 0; i < String_Graf.size(); i++)
	{
		if (String_Graf[i] == 'x')
		{
			if (!strncmp(&String_Graf[i], "xp", 2)) {
				BeforeX += String_Graf[i];
			}
			else
			{
				flag = 1;
			}
		}
		else
		{
			if (flag == 0)
			{
				BeforeX += String_Graf[i];
			}
			else
			{
				AfterX += String_Graf[i];
			}
		}
	}
	LeftBorder =-7;
	RightBorder = 7;
	UpBorder = 7;
	DownBorder = -7;
	if (textBox2->Text!="")
	{
		try
		{
		LeftBorder = -(Convert::ToDouble(textBox2->Text));
		RightBorder = Convert::ToDouble(textBox2->Text);
		UpBorder = Convert::ToDouble(textBox2->Text);
		DownBorder = -(Convert::ToDouble(textBox2->Text));
		}
		catch (const std::exception&)
		{
			label1->Text = "Введите размер системы координат";
		}
	}
	label3->Text = gcnew System::String(std::to_string(LeftBorder).c_str());
	label4->Text = gcnew System::String(std::to_string(LeftBorder).c_str());
	label5->Text = gcnew System::String(std::to_string(LeftBorder).c_str());
	label6->Text = gcnew System::String(std::to_string(LeftBorder).c_str());
	try
	{
		if (flag == 0) {
			calcul_for_graf.SetExpr(String_Graf);
			double y;
			y = calcul_for_graf.Calc();
			for (double x = LeftBorder; x <= RightBorder; x = x + 1)
			{
				if (y <= UpBorder && y >= DownBorder)
				{
					TDrawGraf(380 / (2 * RightBorder)* x, 380 / (2 * RightBorder) * y, 380 / (2 * RightBorder) * (x + 1), 380 / (2 * RightBorder) * y);
				}
			}
		}
		else
		{
			for (double x = LeftBorder; x <= RightBorder; x = x + 0.001)
			{
				
					std::string tmp = "";
					tmp += BeforeX;
					tmp += std::to_string(x);
					tmp += AfterX;
					calcul_for_graf.SetExpr(tmp);
					double y1 = calcul_for_graf.Calc();
					tmp = "";
					tmp += BeforeX;
					tmp += std::to_string(x + 0.001);
					tmp += AfterX;
					calcul_for_graf.SetExpr(tmp);
					double y2 = calcul_for_graf.Calc();
					if (!isnan(y1) && !isnan(y2))
					{
						if (y1 <= UpBorder && y1 >= DownBorder && y2 <= UpBorder && y2 >= DownBorder)
						{
							TDrawGraf(380 / (2 * RightBorder) * x, 380 / (2 * RightBorder) * y1, 380 / (2 * RightBorder) * (x + 0.001), 380 / (2 * RightBorder) * y2);
						}
					}
			}
		}
	}
	catch (char[])
	{
		label1->Text = "Еnter Graph"; 
	}
	*/
}
private: System::Void с_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
	label1->Text="0";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "8";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "log(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "4";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "sin(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "cos(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "tan(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "pi";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "exp(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "7";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "9";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "arcsin(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "5";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "6";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "arctan(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "sinh(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "1";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "2";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "3";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "cosh(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "tanh(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "0";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "abs(";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "!";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "+";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button30_Click_1(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "-";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "*";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string tmp;
	tmp = msclr::interop::marshal_as<std::string>(textBox1->Text);
	tmp += "/";
	textBox1->Text = gcnew System::String(tmp.c_str());
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	label2->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	label5->Visible = false;
	label6->Visible = false;
	label7->Visible = false;
	textBox2->Visible = false;
	textBox3->Visible = false;
	textBox4->Visible = false;
	textBox5->Visible = false;
	textBox6->Visible = false;
	textBox7->Visible = false;
	button33->Visible = false;
	button35->Visible = false;
	button36->Visible = false;
	button37->Visible = false;
	button38->Visible = false;
	button39->Visible = false;
	button40->Visible = false;
	button41->Visible = false;
	TEraserLineAxis();
	InicGraf(CacheGraf[0], EraserGrafPen,MainCacheSize);
	InicGraf(CacheGraf[1], EraserGrafPen,CacheSize);
	InicGraf(CacheGraf[2], EraserGrafPen,CacheSize);
	InicGraf(CacheGraf[3], EraserGrafPen,CacheSize);
	InicGraf(CacheGraf[4], EraserGrafPen,CacheSize);
	InicGraf(CacheGraf[5], EraserGrafPen,CacheSize);
}

private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	InicGraf(CacheGraf[1], EraserGrafPen,CacheSize);
	CacheGraf[1] = msclr::interop::marshal_as<std::string>(textBox3->Text);
	InicGraf(CacheGraf[2], EraserGrafPen,CacheSize);
	CacheGraf[2] = msclr::interop::marshal_as<std::string>(textBox4->Text);
	InicGraf(CacheGraf[3], EraserGrafPen,CacheSize);
	CacheGraf[3] = msclr::interop::marshal_as<std::string>(textBox5->Text);
	InicGraf(CacheGraf[4], EraserGrafPen,CacheSize);
	CacheGraf[4] = msclr::interop::marshal_as<std::string>(textBox6->Text);
	InicGraf(CacheGraf[5], EraserGrafPen,CacheSize);
	CacheGraf[5] = msclr::interop::marshal_as<std::string>(textBox7->Text);
	if (textBox2->Text != "")
	{
		try
		{
			CacheSize = (abs(Convert::ToDouble(textBox2->Text)));
		}
		catch (const std::exception&)
		{
			label1->Text = "Введите размер системы координат";
		}
	}

	TDrawLineAxis();

	std::string String_Graf;
	double Size;
	if (textBox2->Text != "")
	{
		try
		{
			Size = (abs(Convert::ToDouble(textBox2->Text)));
		}
		catch (const std::exception&)
		{
			label1->Text = "Введите размер системы координат";
		}
	}
	String_Graf = msclr::interop::marshal_as<std::string>(textBox3->Text);
	InicGraf(String_Graf, GrafPen1,Size);
	String_Graf = msclr::interop::marshal_as<std::string>(textBox4->Text);
	InicGraf(String_Graf, GrafPen2,Size);
	String_Graf = msclr::interop::marshal_as<std::string>(textBox5->Text);
	InicGraf(String_Graf, GrafPen3,Size);
	String_Graf = msclr::interop::marshal_as<std::string>(textBox6->Text);
	InicGraf(String_Graf, GrafPen4,Size);
	String_Graf = msclr::interop::marshal_as<std::string>(textBox7->Text);
	InicGraf(String_Graf, GrafPen5,Size);
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	InicGraf(CacheGraf[1], EraserGrafPen,CacheSize);
	InicGraf(CacheGraf[2], EraserGrafPen,CacheSize);
	InicGraf(CacheGraf[3], EraserGrafPen,CacheSize);
	InicGraf(CacheGraf[4], EraserGrafPen,CacheSize);
	InicGraf(CacheGraf[5], EraserGrafPen,CacheSize);

	TDrawLineAxis();
}
};
}
