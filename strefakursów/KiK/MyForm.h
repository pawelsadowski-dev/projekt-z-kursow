#pragma once

namespace KiK {
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
		bool wcsniety = true;
		bool czy_wygr = false;
		int  win_x = 0;
		int	 win_y = 0;
		int try_p = 0;


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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ labelX;
	private: System::Windows::Forms::Label^ labelY;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ A1;
	private: System::Windows::Forms::PictureBox^ B1;
	private: System::Windows::Forms::PictureBox^ C1;
	private: System::Windows::Forms::PictureBox^ C2;
	private: System::Windows::Forms::PictureBox^ C3;






	private: System::Windows::Forms::PictureBox^ B2;
	private: System::Windows::Forms::PictureBox^ B3;


	private: System::Windows::Forms::PictureBox^ A2;
	private: System::Windows::Forms::PictureBox^ A3;


	private: System::Windows::Forms::ImageList^ imageList1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelX = (gcnew System::Windows::Forms::Label());
			this->labelY = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wygrana dla X";
			// 
			// labelX
			// 
			this->labelX->AutoSize = true;
			this->labelX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelX->Location = System::Drawing::Point(56, 31);
			this->labelX->Name = L"labelX";
			this->labelX->Size = System::Drawing::Size(14, 13);
			this->labelX->TabIndex = 1;
			this->labelX->Text = L"0";
			// 
			// labelY
			// 
			this->labelY->AutoSize = true;
			this->labelY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelY->Location = System::Drawing::Point(201, 31);
			this->labelY->Name = L"labelY";
			this->labelY->Size = System::Drawing::Size(14, 13);
			this->labelY->TabIndex = 3;
			this->labelY->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(167, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Wygrana dla Y";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Nowa Gra";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// A1
			// 
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(10, 75);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(48, 60);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A1->TabIndex = 6;
			this->A1->TabStop = false;
			this->A1->Tag = L"\?";
			this->A1->Click += gcnew System::EventHandler(this, &MyForm::Graj);
			// 
			// B1
			// 
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(114, 65);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(48, 60);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B1->TabIndex = 7;
			this->B1->TabStop = false;
			this->B1->Tag = L"\?";
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::Graj);
			// 
			// C1
			// 
			this->C1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.ErrorImage")));
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(224, 65);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(48, 60);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C1->TabIndex = 8;
			this->C1->TabStop = false;
			this->C1->Tag = L"\?";
			this->C1->Click += gcnew System::EventHandler(this, &MyForm::Graj);
			// 
			// C2
			// 
			this->C2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.ErrorImage")));
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(224, 157);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(48, 60);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C2->TabIndex = 9;
			this->C2->TabStop = false;
			this->C2->Tag = L"\?";
			this->C2->Click += gcnew System::EventHandler(this, &MyForm::Graj);
			// 
			// C3
			// 
			this->C3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.ErrorImage")));
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(224, 257);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(48, 60);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C3->TabIndex = 10;
			this->C3->TabStop = false;
			this->C3->Tag = L"\?";
			this->C3->Click += gcnew System::EventHandler(this, &MyForm::Graj);
			// 
			// B2
			// 
			this->B2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.ErrorImage")));
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(114, 157);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(48, 60);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B2->TabIndex = 11;
			this->B2->TabStop = false;
			this->B2->Tag = L"\?";
			this->B2->Click += gcnew System::EventHandler(this, &MyForm::Graj);
			// 
			// B3
			// 
			this->B3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.ErrorImage")));
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(114, 257);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(48, 60);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B3->TabIndex = 12;
			this->B3->TabStop = false;
			this->B3->Tag = L"\?";
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::Graj);
			// 
			// A2
			// 
			this->A2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.ErrorImage")));
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(10, 157);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(48, 60);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A2->TabIndex = 13;
			this->A2->TabStop = false;
			this->A2->Tag = L"\?";
			this->A2->Click += gcnew System::EventHandler(this, &MyForm::Graj);
			// 
			// A3
			// 
			this->A3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.ErrorImage")));
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(10, 257);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(48, 60);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A3->TabIndex = 14;
			this->A3->TabStop = false;
			this->A3->Tag = L"\?";
			this->A3->Click += gcnew System::EventHandler(this, &MyForm::Graj);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"pytajnik.png");
			this->imageList1->Images->SetKeyName(1, L"kolko.png");
			this->imageList1->Images->SetKeyName(2, L"krzyzyk.png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(298, 399);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelY);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->labelX);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Tag = L"\?";
			this->Text = L"Kó³ko i Krzy¿yk";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Graj(System::Object^ sender, System::EventArgs^ e) {

		PictureBox^ zdjecie = (PictureBox^)sender;

		if (wcsniety) {
			zdjecie->Image = imageList1->Images[2];
			zdjecie->Tag = "X";
		}
		else {
			zdjecie->Image = imageList1->Images[1];
			zdjecie->Tag = "O";
		}
		wcsniety = !wcsniety;
		zdjecie->Enabled = false;
		wygrana(zdjecie);
	}
	private: void wygrana(PictureBox^ x) {
		System::String^ znak_zw = " ";
		//WYGRANA W PIONIE
		if ((A1->Tag == A2->Tag) && (A3->Tag == A2->Tag) && (A1->Tag != "?")) { czy_wygr = true; znak_zw = safe_cast<System::String^>(A1->Tag); }
		if ((B1->Tag == B2->Tag) && (B3->Tag == B2->Tag) && (B1->Tag != "?")) { czy_wygr = true; znak_zw = safe_cast<System::String^>(B1->Tag); }
		if ((C1->Tag == C2->Tag) && (C3->Tag == C2->Tag) && (C1->Tag != "?")) { czy_wygr = true; znak_zw = safe_cast<System::String^>(C1->Tag); }

		//WYGRANA W POZIOMIE
		if ((A1->Tag == B1->Tag) && (B1->Tag == C1->Tag) && (A1->Tag != "?")) { czy_wygr = true; znak_zw = safe_cast<System::String^>(A1->Tag); }
		if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && (A2->Tag != "?")) { czy_wygr = true; znak_zw = safe_cast<System::String^>(A2->Tag); }
		if ((A3->Tag == B3->Tag) && (A3->Tag == C3->Tag) && (A3->Tag != "?")) { czy_wygr = true; znak_zw = safe_cast<System::String^>(A3->Tag); }


		//WYGRANA PRZEKATNA
		if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && (A1->Tag != "?")) { czy_wygr = true;znak_zw = safe_cast<System::String^>(A1->Tag); }
		if ((C1->Tag == B2->Tag) && (B2->Tag == A3->Tag) && (C1->Tag != "?")) { czy_wygr = true; znak_zw = safe_cast<System::String^>(C1->Tag);  }

		if (czy_wygr)
		{
			MessageBox::Show("Wygrana " + znak_zw,"Kó³ko i Krzy¿yk", MessageBoxButtons::OK, MessageBoxIcon::Information);
			for each (Control ^ element in this->Controls)
			{
				if (element->GetType() == PictureBox::typeid)
					element->Enabled = false;

			}
			if (znak_zw == "O"){ 
				win_y++;
				labelY->Text = System::Convert::ToString(win_y);
			}
			else {
				win_x++;
				labelX->Text = System::Convert::ToString(win_x);
			}
		}
		else
		{
			try_p = (x->Tag != "?") ? try_p+1 : try_p;
			if (try_p>8){ 
				MessageBox::Show("Remis ", "Kó³ko i Krzy¿yk", MessageBoxButtons::OK, MessageBoxIcon::Information);
				try_p = 0;
			}
		}
	}
	private:void startowa() {
		try_p = 0;
		wcsniety = true;
		czy_wygr = false;
		for each (Control ^ element in this->Controls)
		{
			try {
				PictureBox^ zdjecie = (PictureBox^)element;
				zdjecie->Enabled = true;
				zdjecie->Tag = "?";
				zdjecie->Image = imageList1->Images[0];
			}
			catch (...)
			{

			}
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	labelX->Text = "0";
	labelY->Text = "0";
	startowa();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	startowa();
}
};
}
