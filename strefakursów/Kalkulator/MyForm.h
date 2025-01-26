#include "Pomoc.h"
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
			//
			//TODO: Add the constructor code here
			//
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
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okinekoToolStripMenuItem, this->zamknjToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::przypnijToolStripMenuItem_Click);
			// 
			// okinekoToolStripMenuItem
			// 
			this->okinekoToolStripMenuItem->Name = L"okinekoToolStripMenuItem";
			this->okinekoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->okinekoToolStripMenuItem->Text = L"Okineko";
			this->okinekoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::okinekoToolStripMenuItem_Click);
			// 
			// zamknjToolStripMenuItem
			// 
			this->zamknjToolStripMenuItem->Name = L"zamknjToolStripMenuItem";
			this->zamknjToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zamknjToolStripMenuItem->Text = L"Zamknj";
			this->zamknjToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zamknjToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->standardowyToolStripMenuItem,
					this->finansowyToolStripMenuItem, this->programistycznyToolStripMenuItem, this->gramToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// standardowyToolStripMenuItem
			// 
			this->standardowyToolStripMenuItem->Name = L"standardowyToolStripMenuItem";
			this->standardowyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->standardowyToolStripMenuItem->Text = L"Standardowy";
			this->standardowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardowyToolStripMenuItem_Click);
			// 
			// finansowyToolStripMenuItem
			// 
			this->finansowyToolStripMenuItem->Name = L"finansowyToolStripMenuItem";
			this->finansowyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->finansowyToolStripMenuItem->Text = L"Finansowy";
			this->finansowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::finansowyToolStripMenuItem_Click);
			// 
			// programistycznyToolStripMenuItem
			// 
			this->programistycznyToolStripMenuItem->Name = L"programistycznyToolStripMenuItem";
			this->programistycznyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->programistycznyToolStripMenuItem->Text = L"Programistyczny";
			// 
			// gramToolStripMenuItem
			// 
			this->gramToolStripMenuItem->Name = L"gramToolStripMenuItem";
			this->gramToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->gramToolStripMenuItem->Text = L"Gram";
			// 
			// pomocToolStripMenuItem
			// 
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Kalkulator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pomocToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pomoc^ pomoc = gcnew Pomoc();
		pomoc->Show();
	}
private: System::Void standardowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 300;
	MyForm::Height = 425;
}
private: System::Void finansowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 300;
	MyForm::Height = 650;
}
private: System::Void przypnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	TopMost = true;
}
private: System::Void okinekoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	TopMost = false;
}
private: System::Void zamknjToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
