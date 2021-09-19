#pragma once
#include "CppCLR_WinformsProjekt.h"
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>

//#include "Qint.h"
//#include <string>



using namespace System::Windows::Forms;
using namespace System;

namespace CppCLRWinformsProjekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtBox;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;


	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;


	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ buttonDEL;

	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btBin;

	private: System::Windows::Forms::Button^ btHex;

	private: System::Windows::Forms::Button^ btDec;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;

	private: System::Windows::Forms::TextBox^ txbLBL;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button25;




	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtBox = (gcnew System::Windows::Forms::TextBox());
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
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
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
			this->buttonDEL = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btBin = (gcnew System::Windows::Forms::Button());
			this->btHex = (gcnew System::Windows::Forms::Button());
			this->btDec = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->txbLBL = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtBox
			// 
			this->txtBox->Location = System::Drawing::Point(92, 74);
			this->txtBox->Multiline = true;
			this->txtBox->Name = L"txtBox";
			this->txtBox->Size = System::Drawing::Size(345, 69);
			this->txtBox->TabIndex = 0;
			this->txtBox->Text = L"0";
			this->txtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtBox->TextChanged += gcnew System::EventHandler(this, &Form1::S);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(116, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"A";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(116, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"B";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(116, 241);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 1;
			this->button3->Text = L"C";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(116, 287);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 40);
			this->button4->TabIndex = 1;
			this->button4->Text = L"D";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(116, 333);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 40);
			this->button5->TabIndex = 1;
			this->button5->Text = L"E";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(116, 379);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 40);
			this->button6->TabIndex = 1;
			this->button6->Text = L"F";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(162, 149);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 40);
			this->button7->TabIndex = 1;
			this->button7->Text = L"<<";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::btn_SHL);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(162, 195);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 40);
			this->button8->TabIndex = 1;
			this->button8->Text = L"rol";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::btn_ROL);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(162, 241);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(40, 40);
			this->button9->TabIndex = 1;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(162, 287);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(40, 40);
			this->button10->TabIndex = 1;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(162, 333);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(40, 40);
			this->button11->TabIndex = 1;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(162, 379);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(40, 40);
			this->button12->TabIndex = 1;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(208, 149);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(40, 40);
			this->button13->TabIndex = 1;
			this->button13->Text = L">>";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::btn_SHR);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(208, 195);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(40, 40);
			this->button14->TabIndex = 1;
			this->button14->Text = L"ror";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::btn_ROR);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(208, 241);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(40, 40);
			this->button15->TabIndex = 1;
			this->button15->Text = L"8";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(208, 287);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(40, 40);
			this->button16->TabIndex = 1;
			this->button16->Text = L"5";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(208, 333);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(40, 40);
			this->button17->TabIndex = 1;
			this->button17->Text = L"2";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(208, 379);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(86, 40);
			this->button18->TabIndex = 1;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Blue;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(254, 149);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(40, 40);
			this->button19->TabIndex = 1;
			this->button19->Text = L"AC";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::buttonAC_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(254, 195);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(40, 40);
			this->button20->TabIndex = 1;
			this->button20->Text = L"÷";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::btn_DIV);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(254, 241);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(40, 40);
			this->button21->TabIndex = 1;
			this->button21->Text = L"9";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(254, 287);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(40, 40);
			this->button22->TabIndex = 1;
			this->button22->Text = L"6";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(254, 333);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(40, 40);
			this->button23->TabIndex = 1;
			this->button23->Text = L"3";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(300, 195);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(40, 40);
			this->button26->TabIndex = 1;
			this->button26->Text = L"×";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::btn_MUL);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(300, 241);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(40, 40);
			this->button27->TabIndex = 1;
			this->button27->Text = L"-";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form1::btn_SUB);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(300, 287);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(40, 40);
			this->button28->TabIndex = 1;
			this->button28->Text = L"+";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form1::btn_ADD);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(300, 333);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(40, 86);
			this->button29->TabIndex = 1;
			this->button29->Text = L"=";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::btnEqual_Click);
			// 
			// buttonDEL
			// 
			this->buttonDEL->BackColor = System::Drawing::Color::Blue;
			this->buttonDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDEL->ForeColor = System::Drawing::Color::White;
			this->buttonDEL->Location = System::Drawing::Point(300, 149);
			this->buttonDEL->Name = L"buttonDEL";
			this->buttonDEL->Size = System::Drawing::Size(40, 40);
			this->buttonDEL->TabIndex = 1;
			this->buttonDEL->Text = L"DEL";
			this->buttonDEL->UseVisualStyleBackColor = false;
			this->buttonDEL->Click += gcnew System::EventHandler(this, &Form1::buttonDEL_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(346, 195);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(70, 40);
			this->button30->TabIndex = 1;
			this->button30->Text = L"OR";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form1::btn_OR);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(346, 241);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(70, 40);
			this->button31->TabIndex = 1;
			this->button31->Text = L"XOR";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Form1::btn_XOR);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(346, 287);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(70, 40);
			this->button32->TabIndex = 1;
			this->button32->Text = L"NOT";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Form1::btn_NOT);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(346, 149);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(70, 40);
			this->button24->TabIndex = 1;
			this->button24->Text = L"AND";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::btn_AND);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btBin);
			this->groupBox1->Controls->Add(this->btHex);
			this->groupBox1->Controls->Add(this->btDec);
			this->groupBox1->Location = System::Drawing::Point(12, 209);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(98, 153);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// btBin
			// 
			this->btBin->BackColor = System::Drawing::Color::Black;
			this->btBin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btBin->ForeColor = System::Drawing::Color::White;
			this->btBin->Location = System::Drawing::Point(12, 101);
			this->btBin->Name = L"btBin";
			this->btBin->Size = System::Drawing::Size(74, 37);
			this->btBin->TabIndex = 3;
			this->btBin->Text = L"BIN";
			this->btBin->UseVisualStyleBackColor = false;
			this->btBin->Click += gcnew System::EventHandler(this, &Form1::fromBin_Click);
			// 
			// btHex
			// 
			this->btHex->BackColor = System::Drawing::Color::Black;
			this->btHex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btHex->ForeColor = System::Drawing::Color::White;
			this->btHex->Location = System::Drawing::Point(12, 58);
			this->btHex->Name = L"btHex";
			this->btHex->Size = System::Drawing::Size(74, 37);
			this->btHex->TabIndex = 4;
			this->btHex->Text = L"HEX";
			this->btHex->UseVisualStyleBackColor = false;
			this->btHex->Click += gcnew System::EventHandler(this, &Form1::fromHex_Click);
			// 
			// btDec
			// 
			this->btDec->BackColor = System::Drawing::Color::Black;
			this->btDec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDec->ForeColor = System::Drawing::Color::White;
			this->btDec->Location = System::Drawing::Point(12, 15);
			this->btDec->Name = L"btDec";
			this->btDec->Size = System::Drawing::Size(74, 37);
			this->btDec->TabIndex = 5;
			this->btDec->Text = L"DEC";
			this->btDec->UseVisualStyleBackColor = false;
			this->btDec->Click += gcnew System::EventHandler(this, &Form1::fromDec_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button36);
			this->groupBox2->Controls->Add(this->button37);
			this->groupBox2->Controls->Add(this->button38);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(422, 195);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(107, 178);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Convert";
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::Black;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::Color::White;
			this->button36->Location = System::Drawing::Point(16, 117);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(74, 37);
			this->button36->TabIndex = 3;
			this->button36->Text = L"BIN";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &Form1::toBin_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::Black;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::Color::White;
			this->button37->Location = System::Drawing::Point(16, 74);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(74, 37);
			this->button37->TabIndex = 4;
			this->button37->Text = L"HEX";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &Form1::toHex_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::Black;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::Color::White;
			this->button38->Location = System::Drawing::Point(16, 31);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(74, 37);
			this->button38->TabIndex = 5;
			this->button38->Text = L"DEC";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &Form1::toDec_Click);
			// 
			// txbLBL
			// 
			this->txbLBL->Location = System::Drawing::Point(92, 6);
			this->txbLBL->Multiline = true;
			this->txbLBL->Name = L"txbLBL";
			this->txbLBL->Size = System::Drawing::Size(345, 62);
			this->txbLBL->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(445, 417);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Made by @KNQAV";
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(459, 127);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 23);
			this->button25->TabIndex = 7;
			this->button25->Text = L"QFloat";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 439);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txbLBL);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->buttonDEL);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtBox);
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
			bool reset = false;
			bool FLAG_10 = false;
			bool FLAG_2 = false;
			bool FLAG_16 = false;
			bool QFloat = false;
			System::String^ result = "0";
			System::String^ operation = "";
			
	private: System::Void S(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Text = txtBox->Text;
	}
	private: System::Void buttonAC_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBox->Text = "0";
		txbLBL->Text = "";
		reset = false;
		if (!txtBox->Text->Contains(".")) {
			button7->Enabled = true;
			button8->Enabled = true;
			button13->Enabled = true;
			button14->Enabled = true;
			button20->Enabled = true;
			button26->Enabled = true;
			button27->Enabled = true;
			button28->Enabled = true;
			button29->Enabled = true;
			button24->Enabled = true;
			button30->Enabled = true;
			button31->Enabled = true;
			button32->Enabled = true;
			button37->Enabled = true;
			button18->Enabled = true;
			QFloat = false;
		}
		
	}
	private: System::Void buttonDEL_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtBox->Text->Length > 0)
			txtBox->Text = txtBox->Text->Remove(txtBox->Text->Length - 1, 1);
		if (txtBox->Text == "" || reset)
			txtBox->Text = "0";

		if (!txtBox->Text->Contains(".")) {
			button7->Enabled = true;
			button8->Enabled = true;
			button13->Enabled = true;
			button14->Enabled = true;
			button20->Enabled = true;
			button26->Enabled = true;
			button27->Enabled = true;
			button28->Enabled = true;
			button29->Enabled = true;
			button24->Enabled = true;
			button30->Enabled = true;
			button31->Enabled = true;
			button32->Enabled = true;
			button37->Enabled = true;
			button18->Enabled = true;
			QFloat = false;
		}
	}
		 
	//number
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "0";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "1";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "2";
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "3";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "4";;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "5";
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "6";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "7";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "8";
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "9";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "A";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "B";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "C";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "D";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "E";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBox->Text == "0" || reset)
		txtBox->Text = "";
	reset = false;
	txtBox->Text += "F";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtBox->Text->Contains(".")) {
		txtBox->Text += ".";
		QFloat = true;
		button7->Enabled = false;
		button8->Enabled = false;
		button13->Enabled = false;
		button14->Enabled = false;
		button20->Enabled = false;
		button26->Enabled = false;
		button27->Enabled = false;
		button28->Enabled = false;
		button29->Enabled = false;
		button24->Enabled = false;
		button30->Enabled = false;
		button31->Enabled = false;
		button32->Enabled = false;
		button37->Enabled = false;
		button18->Enabled = false;
	}
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = false;
	button2->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	button5->Enabled = false;
	button6->Enabled = false;
	button7->Enabled = false;
	button8->Enabled = false;
	button9->Enabled = false;
	button10->Enabled = false;
	button11->Enabled = false;
	button12->Enabled = false;
	button13->Enabled = false;
	button14->Enabled = false;
	button15->Enabled = false;
	button16->Enabled = false;
	button17->Enabled = false;
	button18->Enabled = false;
	button20->Enabled = false;
	button21->Enabled = false;
	button22->Enabled = false;
	button23->Enabled = false;
	button24->Enabled = false;
	button26->Enabled = false;
	button27->Enabled = false;
	button28->Enabled = false;
	button29->Enabled = false;
	button30->Enabled = false;
	button31->Enabled = false;
	button32->Enabled = false;
	button38->Enabled = false;
	button37->Enabled = false;
	button36->Enabled = false;
}
	 
	   //choose base
 private: System::Void fromDec_Click(System::Object^ sender, System::EventArgs^ e) {
	FLAG_10 = true;
	FLAG_2= false;
	FLAG_16 = false;
	button1->Enabled = false;
	button2->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	button5->Enabled = false;
	button6->Enabled = false;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;
	button10->Enabled = true;
	button11->Enabled = true;
	button12->Enabled = true;
	button13->Enabled = true;
	button14->Enabled = true;
	button15->Enabled = true;
	button16->Enabled = true;
	button17->Enabled = true;
	button18->Enabled = true;
	button20->Enabled = true;
	button21->Enabled = true;
	button22->Enabled = true;
	button23->Enabled = true;
	button24->Enabled = true;
	button26->Enabled = true;
	button27->Enabled = true;
	button28->Enabled = true;
	button29->Enabled = true;
	button30->Enabled = true;
	button31->Enabled = true;
	button32->Enabled = true;
	button38->Enabled = false;
	button37->Enabled = true;
	button36->Enabled = true;
}
private: System::Void fromHex_Click(System::Object^ sender, System::EventArgs^ e) {
	FLAG_10 = false;
	FLAG_2 = false;
	FLAG_16 = true;
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;
	button10->Enabled = true;
	button11->Enabled = true;
	button12->Enabled = true;
	button13->Enabled = true;
	button14->Enabled = true;
	button15->Enabled = true;
	button16->Enabled = true;
	button17->Enabled = true;
	button18->Enabled = false;
	button20->Enabled = true;
	button21->Enabled = true;
	button22->Enabled = true;
	button23->Enabled = true;
	button24->Enabled = true;
	button26->Enabled = true;
	button27->Enabled = true;
	button28->Enabled = true;
	button29->Enabled = true;
	button30->Enabled = true;
	button31->Enabled = true;
	button32->Enabled = true;
	button38->Enabled = true;
	button37->Enabled = false;
	button36->Enabled = true;
}
private: System::Void fromBin_Click(System::Object^ sender, System::EventArgs^ e) {
	FLAG_10 = false;
	FLAG_2 = true;
	FLAG_16 = false;
	button1->Enabled = false;
	button2->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	button5->Enabled = false;
	button6->Enabled = false;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = false;
	button10->Enabled = false;
	button11->Enabled = true;
	button12->Enabled = true;
	button13->Enabled = true;
	button14->Enabled = true;
	button15->Enabled = false;
	button16->Enabled = false;
	button17->Enabled = false;
	button18->Enabled = false;
	button20->Enabled = true;
	button21->Enabled = false;
	button22->Enabled = false;
	button23->Enabled = false;
	button24->Enabled = true;
	button26->Enabled = true;
	button27->Enabled = true;
	button28->Enabled = true;
	button29->Enabled = true;
	button30->Enabled = true;
	button31->Enabled = true;
	button32->Enabled = true;
	button38->Enabled = true;
	button37->Enabled = true;
	button36->Enabled = false;
}

	   //operator toan tu
private: System::Void btn_ADD(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "+";
		txbLBL->Text = result + " " + operation;
	}
	else
	{
		operation = "+";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = result + " " + operation;
	}
}

private: System::Void btn_SUB(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "-";
		txbLBL->Text = result + " " + operation;
	}
	else
	{
		operation = "-";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = result + " " + operation;
	}
}

private: System::Void btn_MUL(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "×";
		txbLBL->Text = result + " " + operation;
	}
	else
	{
		operation = "×";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = result + " " + operation;
	}
}

private: System::Void btn_DIV(System::Object^ sender, System::EventArgs^ e) {
		if (result != "") {
			button29->PerformClick();
			reset = true;
			operation = "÷";
			txbLBL->Text = result + " " + operation;
		}
		else
		{
			operation = "÷";
			result = txtBox->Text;
			reset = true;
			txbLBL->Text = result + " " + operation;
		}
}
		
	   //toan tu dich
private: System::Void btn_SHL(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "<<";
		txbLBL->Text = result + " " + operation;
	}
	else
	{
		operation = "<<";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = result + " " + operation;
	}
}
private: System::Void btn_SHR(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = ">>";
		txbLBL->Text = result + " " + operation;
	}
	else
	{
		operation = ">>";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = result + " " + operation;
	}
}
private: System::Void btn_ROL(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "ROL";
		txbLBL->Text = result + " " + operation;
	}
	else
	{
		operation = "ROL";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = result + " " + operation;
	}
}
private: System::Void btn_ROR(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "ROR";
		txbLBL->Text = result + " " + operation;
	}
	else
	{
		operation = "ROR";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = result + " " + operation;
	}
}

	   //toan tu 
private: System::Void btn_AND(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "AND";
		txbLBL->Text = result + " " + operation;
	}
	else
	{
		operation = "AND";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = result + " " + operation;
	}
}
private: System::Void btn_OR(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "OR";
		txbLBL->Text = result + " " + operation;
	}
	else
	{
		operation = "OR";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = result + " " + operation;
	}
}
private: System::Void btn_XOR(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "XOR";
		txbLBL->Text = result + " " + operation;
	}
	else
	{
		operation = "XOR";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = result + " " + operation;
	}
}
//return value when click
private: System::Void btn_NOT(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "NOT";
		txbLBL->Text = operation;
	}
	else
	{
		operation = "NOT";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = operation;
	}
	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(result);
	Qint tmp2 = CreateQint(), res = CreateQint();
	string string_res;
	if (FLAG_10 == true) {
		//tmp1 = DecToQint(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = DecToQint(standardString1);
		res = NOT(tmp2);
		string_res = QIntToDec(res);
		txbLBL->Text = operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	else if (FLAG_16 == true) {
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = BinToQInt(HexToBin(standardString1));
		res = NOT(tmp2);
		string_res = QIntToHex(res);
		txbLBL->Text = operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	else {
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = BinToQInt(standardString1);
		res = NOT(tmp2);
		string_res = QIntToBin(res);
		txbLBL->Text = operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
}

	   //button Equal
private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	txbLBL->Text = "";
	Qint tmp1 = CreateQint();
	Qint tmp2 = CreateQint();
	Qint res = CreateQint();
	string string_res;
	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(result);
//Cong
	if (operation == "+") {
		if (FLAG_10 == true) {
			tmp1 = DecToQint(standardString);
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = DecToQint(standardString1);
			res = Cong(tmp1, tmp2);
			string_res = QIntToDec(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else if (FLAG_16 == true) {
			tmp1 = BinToQInt(HexToBin(standardString));
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = BinToQInt(HexToBin(standardString1));
			res = Cong(tmp1, tmp2);
			string_res = QIntToHex(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			tmp1 = BinToQInt(standardString);
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = BinToQInt(standardString1);
			res = Cong(tmp1, tmp2);
			string_res = QIntToBin(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
	}
//Tru
	else if (operation == "-") {
		if (FLAG_10 == true) {
			tmp1 = DecToQint(standardString);
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = DecToQint(standardString1);
			res = Tru(tmp1, tmp2);
			string_res = QIntToDec(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else if (FLAG_16 == true) {
			tmp1 = BinToQInt(HexToBin(standardString));
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = BinToQInt(HexToBin(standardString1));
			res = Tru(tmp1, tmp2);
			string_res = QIntToHex(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			tmp1 = BinToQInt(standardString);
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = BinToQInt(standardString1);
			res = Tru(tmp1, tmp2);
			string_res = QIntToBin(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
	}
//Nhan
	else  if (operation == "×") {
		if (FLAG_10 == true) {
			tmp1 = DecToQint(standardString);
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = DecToQint(standardString1);
			res = Nhan(tmp1, tmp2);
			string_res = QIntToDec(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else if (FLAG_16 == true) {
			tmp1 = BinToQInt(HexToBin(standardString));
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = BinToQInt(HexToBin(standardString1));
			res = Nhan(tmp1, tmp2);
			string_res = QIntToHex(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			tmp1 = BinToQInt(standardString);
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = BinToQInt(standardString1);
			res = Nhan(tmp1, tmp2);
			string_res = QIntToBin(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
	}
//Chia
	else  if (operation == "÷") {
		if (FLAG_10 == true) {
			tmp1 = DecToQint(standardString);
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = DecToQint(standardString1);
			res = Chia(tmp1, tmp2);
			string_res = QIntToDec(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else if (FLAG_16 == true) {
			tmp1 = BinToQInt(HexToBin(standardString));
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = BinToQInt(HexToBin(standardString1));
			res = Chia(tmp1, tmp2);
			string_res = QIntToHex(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			tmp1 = BinToQInt(standardString);
			std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
			tmp2 = BinToQInt(standardString1);
			res = Chia(tmp1, tmp2);
			string_res = QIntToBin(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
	}
//Dich trai
	else if (operation == "<<") {
	if (FLAG_10 == true) {
		tmp1 = DecToQint(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = DichTrai(tmp1, tmp3);
			string_res = QIntToDec(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}
	
	}
	else if (FLAG_16 == true) {
		tmp1 = BinToQInt(HexToBin(standardString));
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = DichTrai(tmp1, tmp3);
			string_res = QIntToHex(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}
		
	}
	else {
		tmp1 = BinToQInt(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = DichTrai(tmp1, tmp3);
			string_res = QIntToBin(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}
		
	}
	}
//Dich phai
	else if (operation == ">>") {
	if (FLAG_10 == true) {
		tmp1 = DecToQint(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = DichPhai(tmp1, tmp3);
			string_res = QIntToDec(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}

	}
	else if (FLAG_16 == true) {
		tmp1 = BinToQInt(HexToBin(standardString));
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = DichPhai(tmp1, tmp3);
			string_res = QIntToHex(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}

	}
	else {
		tmp1 = BinToQInt(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = DichPhai(tmp1, tmp3);
			string_res = QIntToBin(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}

	}
	}
//ROL
	else if (operation == "ROL") {
	if (FLAG_10 == true) {
		tmp1 = DecToQint(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = ROL(tmp1, tmp3);
			string_res = QIntToDec(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}

	}
	else if (FLAG_16 == true) {
		tmp1 = BinToQInt(HexToBin(standardString));
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = ROL(tmp1, tmp3);
			string_res = QIntToHex(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}

	}
	else {
		tmp1 = BinToQInt(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = ROL(tmp1, tmp3);
			string_res = QIntToBin(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}

	}
	}
//ROR
	else if (operation == "ROR") {
	if (FLAG_10 == true) {
		tmp1 = DecToQint(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = ROR(tmp1, tmp3);
			string_res = QIntToDec(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}

	}
	else if (FLAG_16 == true) {
		tmp1 = BinToQInt(HexToBin(standardString));
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = ROR(tmp1, tmp3);
			string_res = QIntToHex(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;

		}

	}
	else {
		tmp1 = BinToQInt(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		int tmp3 = stoi(standardString1);
		if (tmp3 <= 127) {
			res = ROR(tmp1, tmp3);
			string_res = QIntToBin(res);
			txbLBL->Text += result + " " + operation + " " + txtBox->Text;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			txtBox->Text = "Result not defined!";
			reset = true;
		}

	}
	}
//AND
	else  if (operation == "AND") {
	if (FLAG_10 == true) {
		tmp1 = DecToQint(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = DecToQint(standardString1);
		res = AND(tmp1, tmp2);
		string_res = QIntToDec(res);
		txbLBL->Text += result + " " + operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	else if (FLAG_16 == true) {
		tmp1 = BinToQInt(HexToBin(standardString));
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = BinToQInt(HexToBin(standardString1));
		res = AND(tmp1, tmp2);
		string_res = QIntToHex(res);
		txbLBL->Text += result + " " + operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	else {
		tmp1 = BinToQInt(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = BinToQInt(standardString1);
		res = AND(tmp1, tmp2);
		string_res = QIntToBin(res);
		txbLBL->Text += result + " " + operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	}
//OR
	else  if (operation == "OR") {
	if (FLAG_10 == true) {
		tmp1 = DecToQint(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = DecToQint(standardString1);
		res = OR(tmp1, tmp2);
		string_res = QIntToDec(res);
		txbLBL->Text += result + " " + operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	else if (FLAG_16 == true) {
		tmp1 = BinToQInt(HexToBin(standardString));
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = BinToQInt(HexToBin(standardString1));
		res = OR(tmp1, tmp2);
		string_res = QIntToHex(res);
		txbLBL->Text += result + " " + operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	else {
		tmp1 = BinToQInt(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = BinToQInt(standardString1);
		res = OR(tmp1, tmp2);
		string_res = QIntToBin(res);
		txbLBL->Text += result + " " + operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	}
//XOR
	else  if (operation == "XOR") {
	if (FLAG_10 == true) {
		tmp1 = DecToQint(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = DecToQint(standardString1);
		res = XOR(tmp1, tmp2);
		string_res = QIntToDec(res);
		txbLBL->Text += result + " " + operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	else if (FLAG_16 == true) {
		tmp1 = BinToQInt(HexToBin(standardString));
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = BinToQInt(HexToBin(standardString1));
		res = XOR(tmp1, tmp2);
		string_res = QIntToHex(res);
		txbLBL->Text += result + " " + operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	else {
		tmp1 = BinToQInt(standardString);
		std::string standardString1 = context.marshal_as<std::string>(txtBox->Text);
		tmp2 = BinToQInt(standardString1);
		res = XOR(tmp1, tmp2);
		string_res = QIntToBin(res);
		txbLBL->Text += result + " " + operation + " " + txtBox->Text;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	}
//Other
	else txbLBL->Text = txtBox->Text + "=";
	result = txtBox->Text;
	operation = "";
}

	   //Convert
private: System::Void toDec_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "DEC= ";
		txbLBL->Text = operation;
	}
	else
	{
		operation = "DEC= ";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = operation;
	}
	msclr::interop::marshal_context context;
	string string_res;
	if (QFloat == true) {
//can sua
		std::string standardString1 = context.marshal_as<std::string>(result);
		string_res = PrintQfloat(Qf_BinToDec(standardString1));
		txbLBL->Text = txtBox->Text + "->" + operation;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;

		button38->Enabled = false;
		button37->Enabled = false;
		button36->Enabled = true;
	}
	else {
		if (FLAG_16 == true) {
			std::string standardString1 = context.marshal_as<std::string>(result);
			string_res = QIntToDec(BinToQInt(HexToBin(standardString1)));
			txbLBL->Text = txtBox->Text + "->" + operation;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			std::string standardString1 = context.marshal_as<std::string>(result);
			string_res = QIntToDec(BinToQInt(standardString1));
			txbLBL->Text = txtBox->Text + "->" + operation;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		button38->Enabled = false;
		button37->Enabled = true;
		button36->Enabled = true;
	}
	FLAG_10 = true;
	FLAG_2 = false;
	FLAG_16 = false;
	
}
private: System::Void toHex_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "HEX= ";
		txbLBL->Text = operation;
	}
	else
	{
		operation = "HEX= ";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = operation;
	}
	msclr::interop::marshal_context context;
	string string_res;
	if (FLAG_10 == true) {
		std::string standardString1 = context.marshal_as<std::string>(result);
		string_res = DecToHex(standardString1);
		txbLBL->Text = txtBox->Text + "->" + operation;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	else {
		std::string standardString1 = context.marshal_as<std::string>(result);
		string_res = BinToHex(standardString1);
		txbLBL->Text = txtBox->Text + "->" + operation;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;
	}
	FLAG_10 = false;
	FLAG_2 = false;
	FLAG_16 = true;
	button38->Enabled = true;
	button37->Enabled = false;
	button36->Enabled = true;
}
private: System::Void toBin_Click(System::Object^ sender, System::EventArgs^ e) {
	if (result != "") {
		button29->PerformClick();
		reset = true;
		operation = "BIN= ";
		txbLBL->Text = operation;
	}
	else
	{
		operation = "BIN= ";
		result = txtBox->Text;
		reset = true;
		txbLBL->Text = operation;
	}
	msclr::interop::marshal_context context;
	string string_res;

	if (QFloat == true) {
		std::string standardString1 = context.marshal_as<std::string>(result);
		string_res = Qf_DecToBin(DecToQfloat(standardString1));
		txbLBL->Text = txtBox->Text + "->" + operation;
		result = context.marshal_as<String^>(string_res);
		txtBox->Text = result;

		button38->Enabled = true;
		button37->Enabled = false;
		button36->Enabled = false;
	}
	else {
		if (FLAG_10 == true) {
			std::string standardString1 = context.marshal_as<std::string>(result);
			string_res = QIntToBin(DecToQint(standardString1));
			txbLBL->Text = txtBox->Text + "->" + operation;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		else {
			std::string standardString1 = context.marshal_as<std::string>(result);
			string_res = HexToBin(standardString1);
			txbLBL->Text = txtBox->Text + "->" + operation;
			result = context.marshal_as<String^>(string_res);
			txtBox->Text = result;
		}
		button38->Enabled = true;
		button37->Enabled = true;
		button36->Enabled = false;
	}
	FLAG_10 = false;
	FLAG_2 = true;
	FLAG_16 = false;
	
}


private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	QFloat = true;
}
};
}
