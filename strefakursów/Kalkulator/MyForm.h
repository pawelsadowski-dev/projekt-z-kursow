﻿#include "Pomoc.h"
#include "programistyczny.h"
#include <cmath>
#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ okinekoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknjToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ finansowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ programistycznyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ Wynik;
	private: System::Windows::Forms::Button^ siedem;
	private: System::Windows::Forms::Button^ osiem;
	private: System::Windows::Forms::Button^ dziewiec;



	private: System::Windows::Forms::Button^ cztery;
	private: System::Windows::Forms::Button^ piec;
	private: System::Windows::Forms::Button^ szesc;



	private: System::Windows::Forms::Button^ trzy;

	private: System::Windows::Forms::Button^ dwa;

	private: System::Windows::Forms::Button^ jeden;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ przecinek;



	private: System::Windows::Forms::Button^ przeczenie;
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





	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->okinekoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknjToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finansowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programistycznyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Wynik = (gcnew System::Windows::Forms::TextBox());
			this->siedem = (gcnew System::Windows::Forms::Button());
			this->osiem = (gcnew System::Windows::Forms::Button());
			this->dziewiec = (gcnew System::Windows::Forms::Button());
			this->cztery = (gcnew System::Windows::Forms::Button());
			this->piec = (gcnew System::Windows::Forms::Button());
			this->szesc = (gcnew System::Windows::Forms::Button());
			this->trzy = (gcnew System::Windows::Forms::Button());
			this->dwa = (gcnew System::Windows::Forms::Button());
			this->jeden = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->przecinek = (gcnew System::Windows::Forms::Button());
			this->przeczenie = (gcnew System::Windows::Forms::Button());
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
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(379, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okinekoToolStripMenuItem, this->zamknjToolStripMenuItem
			});
			this->plikToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			// 
			// okinekoToolStripMenuItem
			// 
			this->okinekoToolStripMenuItem->Name = L"okinekoToolStripMenuItem";
			this->okinekoToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->okinekoToolStripMenuItem->Text = L"Okienko";
			// 
			// zamknjToolStripMenuItem
			// 
			this->zamknjToolStripMenuItem->Name = L"zamknjToolStripMenuItem";
			this->zamknjToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->zamknjToolStripMenuItem->Text = L"Zamknj";
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->standardowyToolStripMenuItem,
					this->finansowyToolStripMenuItem, this->programistycznyToolStripMenuItem, this->gramToolStripMenuItem
			});
			this->widokToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// standardowyToolStripMenuItem
			// 
			this->standardowyToolStripMenuItem->Name = L"standardowyToolStripMenuItem";
			this->standardowyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->standardowyToolStripMenuItem->Text = L"Standardowy";
			// 
			// finansowyToolStripMenuItem
			// 
			this->finansowyToolStripMenuItem->Name = L"finansowyToolStripMenuItem";
			this->finansowyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->finansowyToolStripMenuItem->Text = L"Finansowy";
			// 
			// programistycznyToolStripMenuItem
			// 
			this->programistycznyToolStripMenuItem->Name = L"programistycznyToolStripMenuItem";
			this->programistycznyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->programistycznyToolStripMenuItem->Text = L"Programistyczny";
			this->programistycznyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::programistycznyToolStripMenuItem_Click);
			// 
			// gramToolStripMenuItem
			// 
			this->gramToolStripMenuItem->Name = L"gramToolStripMenuItem";
			this->gramToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->gramToolStripMenuItem->Text = L"Gram";
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pomocToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// Wynik
			// 
			this->Wynik->BackColor = System::Drawing::Color::Silver;
			this->Wynik->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Wynik->Dock = System::Windows::Forms::DockStyle::Top;
			this->Wynik->Enabled = false;
			this->Wynik->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wynik->ForeColor = System::Drawing::Color::Black;
			this->Wynik->Location = System::Drawing::Point(0, 24);
			this->Wynik->Multiline = true;
			this->Wynik->Name = L"Wynik";
			this->Wynik->Size = System::Drawing::Size(379, 63);
			this->Wynik->TabIndex = 1;
			this->Wynik->Text = L"0";
			this->Wynik->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// siedem
			// 
			this->siedem->AutoSize = true;
			this->siedem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->siedem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->siedem->Location = System::Drawing::Point(4, 95);
			this->siedem->Name = L"siedem";
			this->siedem->Size = System::Drawing::Size(50, 50);
			this->siedem->TabIndex = 2;
			this->siedem->Text = L"7";
			this->siedem->UseVisualStyleBackColor = false;
			this->siedem->Click += gcnew System::EventHandler(this, &MyForm::siedem_Click);
			// 
			// osiem
			// 
			this->osiem->AutoSize = true;
			this->osiem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->osiem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->osiem->Location = System::Drawing::Point(57, 95);
			this->osiem->Name = L"osiem";
			this->osiem->Size = System::Drawing::Size(50, 50);
			this->osiem->TabIndex = 3;
			this->osiem->Text = L"8";
			this->osiem->UseVisualStyleBackColor = false;
			this->osiem->Click += gcnew System::EventHandler(this, &MyForm::osiem_Click);
			// 
			// dziewiec
			// 
			this->dziewiec->AutoSize = true;
			this->dziewiec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->dziewiec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dziewiec->Location = System::Drawing::Point(110, 95);
			this->dziewiec->Name = L"dziewiec";
			this->dziewiec->Size = System::Drawing::Size(50, 50);
			this->dziewiec->TabIndex = 4;
			this->dziewiec->Text = L"9";
			this->dziewiec->UseVisualStyleBackColor = false;
			this->dziewiec->Click += gcnew System::EventHandler(this, &MyForm::dziewiec_Click);
			// 
			// cztery
			// 
			this->cztery->AutoSize = true;
			this->cztery->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->cztery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cztery->Location = System::Drawing::Point(4, 150);
			this->cztery->Name = L"cztery";
			this->cztery->Size = System::Drawing::Size(50, 50);
			this->cztery->TabIndex = 5;
			this->cztery->Text = L"4";
			this->cztery->UseVisualStyleBackColor = false;
			this->cztery->Click += gcnew System::EventHandler(this, &MyForm::cztery_Click);
			// 
			// piec
			// 
			this->piec->AutoSize = true;
			this->piec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->piec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->piec->Location = System::Drawing::Point(57, 150);
			this->piec->Name = L"piec";
			this->piec->Size = System::Drawing::Size(50, 50);
			this->piec->TabIndex = 6;
			this->piec->Text = L"5";
			this->piec->UseVisualStyleBackColor = false;
			this->piec->Click += gcnew System::EventHandler(this, &MyForm::piec_Click);
			// 
			// szesc
			// 
			this->szesc->AutoSize = true;
			this->szesc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->szesc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->szesc->Location = System::Drawing::Point(110, 150);
			this->szesc->Name = L"szesc";
			this->szesc->Size = System::Drawing::Size(50, 50);
			this->szesc->TabIndex = 7;
			this->szesc->Text = L"6";
			this->szesc->UseVisualStyleBackColor = false;
			this->szesc->Click += gcnew System::EventHandler(this, &MyForm::szesc_Click);
			// 
			// trzy
			// 
			this->trzy->AutoSize = true;
			this->trzy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->trzy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->trzy->Location = System::Drawing::Point(110, 201);
			this->trzy->Name = L"trzy";
			this->trzy->Size = System::Drawing::Size(50, 50);
			this->trzy->TabIndex = 10;
			this->trzy->Text = L"3";
			this->trzy->UseVisualStyleBackColor = false;
			this->trzy->Click += gcnew System::EventHandler(this, &MyForm::trzy_Click);
			// 
			// dwa
			// 
			this->dwa->AutoSize = true;
			this->dwa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->dwa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dwa->Location = System::Drawing::Point(57, 201);
			this->dwa->Name = L"dwa";
			this->dwa->Size = System::Drawing::Size(50, 50);
			this->dwa->TabIndex = 9;
			this->dwa->Text = L"2";
			this->dwa->UseVisualStyleBackColor = false;
			this->dwa->Click += gcnew System::EventHandler(this, &MyForm::dwa_Click);
			// 
			// jeden
			// 
			this->jeden->AutoSize = true;
			this->jeden->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->jeden->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->jeden->Location = System::Drawing::Point(4, 201);
			this->jeden->Name = L"jeden";
			this->jeden->Size = System::Drawing::Size(50, 50);
			this->jeden->TabIndex = 8;
			this->jeden->Text = L"1";
			this->jeden->UseVisualStyleBackColor = false;
			this->jeden->Click += gcnew System::EventHandler(this, &MyForm::jeden_Click);
			// 
			// zero
			// 
			this->zero->AutoSize = true;
			this->zero->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->zero->Location = System::Drawing::Point(57, 255);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(50, 50);
			this->zero->TabIndex = 11;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// przecinek
			// 
			this->przecinek->AutoSize = true;
			this->przecinek->BackColor = System::Drawing::SystemColors::GrayText;
			this->przecinek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->przecinek->Location = System::Drawing::Point(110, 255);
			this->przecinek->Name = L"przecinek";
			this->przecinek->Size = System::Drawing::Size(50, 50);
			this->przecinek->TabIndex = 12;
			this->przecinek->Text = L",";
			this->przecinek->UseVisualStyleBackColor = false;
			this->przecinek->Click += gcnew System::EventHandler(this, &MyForm::przecinek_Click);
			// 
			// przeczenie
			// 
			this->przeczenie->AutoSize = true;
			this->przeczenie->BackColor = System::Drawing::SystemColors::GrayText;
			this->przeczenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->przeczenie->Location = System::Drawing::Point(4, 255);
			this->przeczenie->Name = L"przeczenie";
			this->przeczenie->Size = System::Drawing::Size(50, 50);
			this->przeczenie->TabIndex = 13;
			this->przeczenie->Text = L"±";
			this->przeczenie->UseVisualStyleBackColor = false;
			this->przeczenie->Click += gcnew System::EventHandler(this, &MyForm::przeczenie_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::Brown;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(271, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 105);
			this->button1->TabIndex = 15;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::DarkSalmon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(326, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 107);
			this->button2->TabIndex = 16;
			this->button2->Text = L"=";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::SystemColors::Info;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(271, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 17;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::SystemColors::Info;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(326, 95);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 18;
			this->button4->Text = L"C";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(163, 255);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 19;
			this->button5->Text = L"x²";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(216, 150);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 20;
			this->button6->Text = L"√";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->AutoSize = true;
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(271, 150);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 21;
			this->button7->Text = L"x³";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(326, 151);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 22;
			this->button8->Text = L"³√";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->AutoSize = true;
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(163, 95);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 23;
			this->button9->Text = L"%";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->AutoSize = true;
			this->button10->BackColor = System::Drawing::Color::Brown;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(216, 255);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 24;
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->AutoSize = true;
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(96)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(163, 201);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 25;
			this->button11->Text = L"/";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->AutoSize = true;
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(163, 150);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 26;
			this->button12->Text = L"×";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->AutoSize = true;
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(216, 201);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 50);
			this->button13->TabIndex = 27;
			this->button13->Text = L"½";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->AutoSize = true;
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(216, 95);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 50);
			this->button14->TabIndex = 28;
			this->button14->Text = L"‰";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(379, 311);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
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
			this->Controls->Add(this->przeczenie);
			this->Controls->Add(this->przecinek);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->trzy);
			this->Controls->Add(this->dwa);
			this->Controls->Add(this->jeden);
			this->Controls->Add(this->szesc);
			this->Controls->Add(this->piec);
			this->Controls->Add(this->cztery);
			this->Controls->Add(this->dziewiec);
			this->Controls->Add(this->osiem);
			this->Controls->Add(this->siedem);
			this->Controls->Add(this->Wynik);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Kalkulator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double pierwsza, druga, wynik;
		bool status;
		char operacja;

#pragma endregion
	
private: bool sprawdz_p()
{
	if (Wynik->Text->Contains(","))
		return true;
	else
		return false;
}
private: void Wypisz(String^ liczba) {
	if (liczba == "," && sprawdz_p()) {
		return;
	}

	if (Wynik->Text == "0" || status) {
		Wynik->Text = (liczba == ",") ? "0," : liczba;
		status = false;
	}
	else {
		Wynik->Text += liczba;
	}
}

private: System::Void jeden_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("1");
}
private: System::Void dwa_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("2");
}
private: System::Void trzy_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("3");
}

private: System::Void cztery_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("4");
}
private: System::Void piec_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("5");
}
private: System::Void szesc_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("6");
}
private: System::Void siedem_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("7");
}
private: System::Void osiem_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("8");
}
private: System::Void dziewiec_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("9");
}
private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("0");
}
private: System::Void przecinek_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz(",");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	operacja = '+';
	status = true;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	operacja = '*';
	status = true;

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	if (pierwsza >= 0) {
		Wynik->Text = Convert::ToString(sqrt(pierwsza));
	}
	else {
		MessageBox::Show("Nie można dzielić pierwiastkować liczby ujemnej!", "Komunikat", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	operacja = '%';
	status = true;
}

private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	operacja = 'p';
	status = true;
}
private: void Resetuj() {
	Wynik->Text = "0";
	druga = 0;
	status = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Resetuj();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = 0;
	Resetuj();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	status = true;
	druga = Convert::ToDouble(Wynik->Text);
	switch (operacja)
	{
	case '+':
		Wynik->Text = Convert::ToString(pierwsza + druga);
		break;
	case '-':
		Wynik->Text = Convert::ToString(pierwsza - druga);
		break;
	case '*':
		Wynik->Text = Convert::ToString(pierwsza * druga);
		break;
	case '/':
		if (druga != 0) {
			Wynik->Text = Convert::ToString(pierwsza / druga);
		}
		else {
			MessageBox::Show("Nie można dzielić przez zero!", "Komunikat", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		break;
	case '%':
		druga = druga != pierwsza ? druga : druga = 1;
		Wynik->Text = Convert::ToString((pierwsza / 100) * druga);
		break;
	case 'p':
		druga = druga != pierwsza ? druga : druga = 1;
		Wynik->Text = Convert::ToString((pierwsza / 1000) * druga);
		break;
	default:
		break;
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	operacja = '/';
	status = true;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	operacja = '-';
	status = true;
}
private: System::Void przeczenie_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	pierwsza = -pierwsza;
	Wynik->Text = Convert::ToString(pierwsza);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	pierwsza = pow(pierwsza,2);
	Wynik->Text = Convert::ToString(pierwsza);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	pierwsza = pow(pierwsza, 3);
	Wynik->Text = Convert::ToString(pierwsza);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	pierwsza = cbrt(pierwsza);
	Wynik->Text = Convert::ToString(pierwsza);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	pierwsza = Convert::ToDouble(Wynik->Text);
	pierwsza = pierwsza/2;
	Wynik->Text = Convert::ToString(pierwsza);
}

private: System::Void pomocToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Pomoc^ Onas = gcnew Pomoc();
	Onas->Show();
}
private: System::Void programistycznyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	programistyczny^ Onas = gcnew programistyczny();
	Onas->Show();
	this->Hide(); 
}
};
};
