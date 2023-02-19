#pragma
#include <string>
#include <msclr/marshal_cppstd.h>
#include<fstream>
#include<iostream>
#include<sstream>
#include<time.h>
#include<stdlib.h>



namespace NTPprojekat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace std;

	struct ObracunskiPeriod {
		string prviDatum;
		string drugiDatum;
	};

	struct Stanje {
		string novo;
		string staro;
	};

	struct Podaci {
		string ime;
		string prezime;
		string imeOca;
		string godinaRodjenja;
		string adresa;
		string mjesto;
		ObracunskiPeriod Period;
		int brClanova;
		Stanje StaroNovoStanje;
		int brRacuna;
		string postanskiBr;
	};

	int brRacunaPrint;

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
	private: System::Windows::Forms::Label^ imeLabel;
	protected:



	protected:

	protected:










	private: System::Windows::Forms::TextBox^ imeInput;
	private: System::Windows::Forms::TextBox^ prezimeInput;
	private: System::Windows::Forms::Label^ prezimeLabel;



	private: System::Windows::Forms::TextBox^ adresaInput;
	private: System::Windows::Forms::Label^ adresaLabel;


	private: System::Windows::Forms::TextBox^ mjestoInput;
	private: System::Windows::Forms::Label^ mjestoLabel;



	private: System::Windows::Forms::TextBox^ godinaRodenjaInput;
	private: System::Windows::Forms::Label^ godinaRodjenjaLabel;



	private: System::Windows::Forms::TextBox^ imeOcaInput;
	private: System::Windows::Forms::Label^ imeOcaLabel;
	private: System::Windows::Forms::TextBox^ postanskiBrInput;



	private: System::Windows::Forms::Label^ postanskiLabel;


	private: System::Windows::Forms::GroupBox^ licniPodaciBox;
	private: System::Windows::Forms::GroupBox^ podOPrebivalistuBox;
	private: System::Windows::Forms::GroupBox^ obracunskiPeriodBox;
	private: System::Windows::Forms::Label^ doLabel;
	private: System::Windows::Forms::DateTimePicker^ prviDatumInput;






	private: System::Windows::Forms::Label^ odLabel;


	private: System::Windows::Forms::Label^ brojClanovaLabel;

	private: System::Windows::Forms::TextBox^ brClanovaInput;
	private: System::Windows::Forms::DateTimePicker^ drugiDatumInput;

	private: System::Windows::Forms::GroupBox^ stanjeVodeBox;



	private: System::Windows::Forms::TextBox^ novoStanjeInput;


	private: System::Windows::Forms::TextBox^ staroStanjeInput;
	private: System::Windows::Forms::Label^ novoStanjeLabel;


	private: System::Windows::Forms::Label^ staroStanjeLabel;

	private: System::Windows::Forms::Button^ ispisiRacunBtn;
	private: System::Windows::Forms::Button^ OcistiPoljaBtn;




	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ noviRacunBtn;

	private: System::Windows::Forms::Button^ traziRacunBtn;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label13;



	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::GroupBox^ traziRacunBox;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ trazeniRacunInput;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Button^ pregledRacuna;






	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ izlazBtn;







	private: System::Windows::Forms::Panel^ pregledRacunaPanel;
	private: System::Windows::Forms::GroupBox^ potrosacBox;
	private: System::Windows::Forms::Label^ PRPadresa;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Label^ PRPimePrezime;
	private: System::Windows::Forms::Label^ PRPmjesto;
	private: System::Windows::Forms::Label^ PRPpostanski;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ PRPstaroStanje;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ PRPmjestoIzdavanja;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ PRPperiod;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ PRPbrRacuna;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ PRPrazlikaStanja;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ PRPnovoStanje;
	private: System::Windows::Forms::Label^ PRPcijenaVode;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ PRPcijenaSaPdv;

	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ PRPpdv;

	private: System::Windows::Forms::Label^ PRPpdvOsnovica;

	private: System::Windows::Forms::Label^ PRPcijenaBezPdv;

	private: System::Windows::Forms::Label^ PRPodvozSmeca;

	private: System::Windows::Forms::Label^ PRPpvnIsporucenaVoda;

	private: System::Windows::Forms::Label^ PRPpvnZastitaVoda;

	private: System::Windows::Forms::Label^ PRPfiksniTrosakDom;
	private: System::Windows::Forms::Label^ PRPodrzavanjeKanSis;


	private: System::Windows::Forms::Label^ PRPbrClanova;

	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ sacuvajRacunBtn;
	private: System::Windows::Forms::PictureBox^ SaveRacun;
	private: System::Windows::Forms::PictureBox^ pictureBoxPrintRacun;





















	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->imeLabel = (gcnew System::Windows::Forms::Label());
			this->imeInput = (gcnew System::Windows::Forms::TextBox());
			this->prezimeInput = (gcnew System::Windows::Forms::TextBox());
			this->prezimeLabel = (gcnew System::Windows::Forms::Label());
			this->adresaInput = (gcnew System::Windows::Forms::TextBox());
			this->adresaLabel = (gcnew System::Windows::Forms::Label());
			this->mjestoInput = (gcnew System::Windows::Forms::TextBox());
			this->mjestoLabel = (gcnew System::Windows::Forms::Label());
			this->godinaRodenjaInput = (gcnew System::Windows::Forms::TextBox());
			this->godinaRodjenjaLabel = (gcnew System::Windows::Forms::Label());
			this->imeOcaInput = (gcnew System::Windows::Forms::TextBox());
			this->imeOcaLabel = (gcnew System::Windows::Forms::Label());
			this->postanskiBrInput = (gcnew System::Windows::Forms::TextBox());
			this->postanskiLabel = (gcnew System::Windows::Forms::Label());
			this->licniPodaciBox = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->podOPrebivalistuBox = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->brojClanovaLabel = (gcnew System::Windows::Forms::Label());
			this->brClanovaInput = (gcnew System::Windows::Forms::TextBox());
			this->obracunskiPeriodBox = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->drugiDatumInput = (gcnew System::Windows::Forms::DateTimePicker());
			this->doLabel = (gcnew System::Windows::Forms::Label());
			this->prviDatumInput = (gcnew System::Windows::Forms::DateTimePicker());
			this->odLabel = (gcnew System::Windows::Forms::Label());
			this->stanjeVodeBox = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->novoStanjeInput = (gcnew System::Windows::Forms::TextBox());
			this->staroStanjeInput = (gcnew System::Windows::Forms::TextBox());
			this->novoStanjeLabel = (gcnew System::Windows::Forms::Label());
			this->staroStanjeLabel = (gcnew System::Windows::Forms::Label());
			this->ispisiRacunBtn = (gcnew System::Windows::Forms::Button());
			this->OcistiPoljaBtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxPrintRacun = (gcnew System::Windows::Forms::PictureBox());
			this->sacuvajRacunBtn = (gcnew System::Windows::Forms::Button());
			this->izlazBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->noviRacunBtn = (gcnew System::Windows::Forms::Button());
			this->traziRacunBtn = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->traziRacunBox = (gcnew System::Windows::Forms::GroupBox());
			this->pregledRacuna = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->trazeniRacunInput = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pregledRacunaPanel = (gcnew System::Windows::Forms::Panel());
			this->PRPbrClanova = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->PRPcijenaSaPdv = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->PRPpdv = (gcnew System::Windows::Forms::Label());
			this->PRPpdvOsnovica = (gcnew System::Windows::Forms::Label());
			this->PRPcijenaBezPdv = (gcnew System::Windows::Forms::Label());
			this->PRPodvozSmeca = (gcnew System::Windows::Forms::Label());
			this->PRPpvnIsporucenaVoda = (gcnew System::Windows::Forms::Label());
			this->PRPpvnZastitaVoda = (gcnew System::Windows::Forms::Label());
			this->PRPfiksniTrosakDom = (gcnew System::Windows::Forms::Label());
			this->PRPodrzavanjeKanSis = (gcnew System::Windows::Forms::Label());
			this->PRPcijenaVode = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->PRPrazlikaStanja = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->PRPnovoStanje = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->PRPstaroStanje = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->PRPmjestoIzdavanja = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->PRPperiod = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->PRPbrRacuna = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->potrosacBox = (gcnew System::Windows::Forms::GroupBox());
			this->PRPmjesto = (gcnew System::Windows::Forms::Label());
			this->PRPpostanski = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PRPadresa = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->PRPimePrezime = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SaveRacun = (gcnew System::Windows::Forms::PictureBox());
			this->licniPodaciBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->podOPrebivalistuBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->obracunskiPeriodBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->stanjeVodeBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPrintRacun))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->traziRacunBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->pregledRacunaPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->potrosacBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SaveRacun))->BeginInit();
			this->SuspendLayout();
			// 
			// imeLabel
			// 
			this->imeLabel->AutoSize = true;
			this->imeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->imeLabel->Location = System::Drawing::Point(173, 32);
			this->imeLabel->Name = L"imeLabel";
			this->imeLabel->Size = System::Drawing::Size(39, 20);
			this->imeLabel->TabIndex = 10;
			this->imeLabel->Text = L"Ime";
			// 
			// imeInput
			// 
			this->imeInput->Location = System::Drawing::Point(237, 32);
			this->imeInput->Name = L"imeInput";
			this->imeInput->Size = System::Drawing::Size(155, 26);
			this->imeInput->TabIndex = 11;
			this->imeInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::imeInput_KeyPress);
			// 
			// prezimeInput
			// 
			this->prezimeInput->Location = System::Drawing::Point(596, 32);
			this->prezimeInput->Name = L"prezimeInput";
			this->prezimeInput->Size = System::Drawing::Size(154, 26);
			this->prezimeInput->TabIndex = 13;
			this->prezimeInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::prezimeInput_KeyPress);
			// 
			// prezimeLabel
			// 
			this->prezimeLabel->AutoSize = true;
			this->prezimeLabel->Location = System::Drawing::Point(479, 32);
			this->prezimeLabel->Name = L"prezimeLabel";
			this->prezimeLabel->Size = System::Drawing::Size(73, 20);
			this->prezimeLabel->TabIndex = 12;
			this->prezimeLabel->Text = L"Prezime";
			// 
			// adresaInput
			// 
			this->adresaInput->Location = System::Drawing::Point(237, 35);
			this->adresaInput->Name = L"adresaInput";
			this->adresaInput->Size = System::Drawing::Size(245, 26);
			this->adresaInput->TabIndex = 15;
			// 
			// adresaLabel
			// 
			this->adresaLabel->AutoSize = true;
			this->adresaLabel->Location = System::Drawing::Point(131, 37);
			this->adresaLabel->Name = L"adresaLabel";
			this->adresaLabel->Size = System::Drawing::Size(66, 20);
			this->adresaLabel->TabIndex = 14;
			this->adresaLabel->Text = L"Adresa";
			// 
			// mjestoInput
			// 
			this->mjestoInput->Location = System::Drawing::Point(237, 67);
			this->mjestoInput->Name = L"mjestoInput";
			this->mjestoInput->Size = System::Drawing::Size(155, 26);
			this->mjestoInput->TabIndex = 18;
			this->mjestoInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::mjestoInput_KeyPress);
			// 
			// mjestoLabel
			// 
			this->mjestoLabel->AutoSize = true;
			this->mjestoLabel->Location = System::Drawing::Point(144, 71);
			this->mjestoLabel->Name = L"mjestoLabel";
			this->mjestoLabel->Size = System::Drawing::Size(62, 20);
			this->mjestoLabel->TabIndex = 17;
			this->mjestoLabel->Text = L"Mjesto";
			// 
			// godinaRodenjaInput
			// 
			this->godinaRodenjaInput->Location = System::Drawing::Point(596, 65);
			this->godinaRodenjaInput->Name = L"godinaRodenjaInput";
			this->godinaRodenjaInput->Size = System::Drawing::Size(154, 26);
			this->godinaRodenjaInput->TabIndex = 20;
			this->godinaRodenjaInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::godinaRodenjaInput_KeyPress);
			// 
			// godinaRodjenjaLabel
			// 
			this->godinaRodjenjaLabel->AutoSize = true;
			this->godinaRodjenjaLabel->Location = System::Drawing::Point(446, 65);
			this->godinaRodjenjaLabel->Name = L"godinaRodjenjaLabel";
			this->godinaRodjenjaLabel->Size = System::Drawing::Size(132, 20);
			this->godinaRodjenjaLabel->TabIndex = 19;
			this->godinaRodjenjaLabel->Text = L"Godina rođenja";
			// 
			// imeOcaInput
			// 
			this->imeOcaInput->Location = System::Drawing::Point(237, 65);
			this->imeOcaInput->Name = L"imeOcaInput";
			this->imeOcaInput->Size = System::Drawing::Size(155, 26);
			this->imeOcaInput->TabIndex = 22;
			this->imeOcaInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::imeOcaInput_KeyPress);
			// 
			// imeOcaLabel
			// 
			this->imeOcaLabel->AutoSize = true;
			this->imeOcaLabel->Location = System::Drawing::Point(150, 65);
			this->imeOcaLabel->Name = L"imeOcaLabel";
			this->imeOcaLabel->Size = System::Drawing::Size(73, 20);
			this->imeOcaLabel->TabIndex = 21;
			this->imeOcaLabel->Text = L"Ime oca";
			// 
			// postanskiBrInput
			// 
			this->postanskiBrInput->Location = System::Drawing::Point(646, 34);
			this->postanskiBrInput->Name = L"postanskiBrInput";
			this->postanskiBrInput->Size = System::Drawing::Size(100, 26);
			this->postanskiBrInput->TabIndex = 26;
			this->postanskiBrInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::postanskiBrInput_KeyPress);
			// 
			// postanskiLabel
			// 
			this->postanskiLabel->AutoSize = true;
			this->postanskiLabel->Location = System::Drawing::Point(502, 37);
			this->postanskiLabel->Name = L"postanskiLabel";
			this->postanskiLabel->Size = System::Drawing::Size(122, 20);
			this->postanskiLabel->TabIndex = 25;
			this->postanskiLabel->Text = L"Poštanski broj";
			// 
			// licniPodaciBox
			// 
			this->licniPodaciBox->BackColor = System::Drawing::Color::Transparent;
			this->licniPodaciBox->Controls->Add(this->pictureBox3);
			this->licniPodaciBox->Controls->Add(this->godinaRodenjaInput);
			this->licniPodaciBox->Controls->Add(this->godinaRodjenjaLabel);
			this->licniPodaciBox->Controls->Add(this->prezimeLabel);
			this->licniPodaciBox->Controls->Add(this->prezimeInput);
			this->licniPodaciBox->Controls->Add(this->imeOcaInput);
			this->licniPodaciBox->Controls->Add(this->imeOcaLabel);
			this->licniPodaciBox->Controls->Add(this->imeInput);
			this->licniPodaciBox->Controls->Add(this->imeLabel);
			this->licniPodaciBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->licniPodaciBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->licniPodaciBox->Location = System::Drawing::Point(303, 122);
			this->licniPodaciBox->Name = L"licniPodaciBox";
			this->licniPodaciBox->Size = System::Drawing::Size(820, 110);
			this->licniPodaciBox->TabIndex = 28;
			this->licniPodaciBox->TabStop = false;
			this->licniPodaciBox->Text = L"Lični podaci";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(6, 46);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(64, 64);
			this->pictureBox3->TabIndex = 23;
			this->pictureBox3->TabStop = false;
			// 
			// podOPrebivalistuBox
			// 
			this->podOPrebivalistuBox->BackColor = System::Drawing::Color::Transparent;
			this->podOPrebivalistuBox->Controls->Add(this->pictureBox4);
			this->podOPrebivalistuBox->Controls->Add(this->brojClanovaLabel);
			this->podOPrebivalistuBox->Controls->Add(this->brClanovaInput);
			this->podOPrebivalistuBox->Controls->Add(this->postanskiLabel);
			this->podOPrebivalistuBox->Controls->Add(this->postanskiBrInput);
			this->podOPrebivalistuBox->Controls->Add(this->adresaLabel);
			this->podOPrebivalistuBox->Controls->Add(this->adresaInput);
			this->podOPrebivalistuBox->Controls->Add(this->mjestoInput);
			this->podOPrebivalistuBox->Controls->Add(this->mjestoLabel);
			this->podOPrebivalistuBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->podOPrebivalistuBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->podOPrebivalistuBox->Location = System::Drawing::Point(303, 253);
			this->podOPrebivalistuBox->Name = L"podOPrebivalistuBox";
			this->podOPrebivalistuBox->Size = System::Drawing::Size(820, 110);
			this->podOPrebivalistuBox->TabIndex = 29;
			this->podOPrebivalistuBox->TabStop = false;
			this->podOPrebivalistuBox->Text = L"Podaci o prebivalištu";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(6, 46);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(64, 64);
			this->pictureBox4->TabIndex = 29;
			this->pictureBox4->TabStop = false;
			// 
			// brojClanovaLabel
			// 
			this->brojClanovaLabel->AutoSize = true;
			this->brojClanovaLabel->Location = System::Drawing::Point(509, 71);
			this->brojClanovaLabel->Name = L"brojClanovaLabel";
			this->brojClanovaLabel->Size = System::Drawing::Size(107, 20);
			this->brojClanovaLabel->TabIndex = 27;
			this->brojClanovaLabel->Text = L"Broj članova";
			// 
			// brClanovaInput
			// 
			this->brClanovaInput->Location = System::Drawing::Point(646, 67);
			this->brClanovaInput->Name = L"brClanovaInput";
			this->brClanovaInput->Size = System::Drawing::Size(100, 26);
			this->brClanovaInput->TabIndex = 28;
			this->brClanovaInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::brClanovaInput_KeyPress);
			// 
			// obracunskiPeriodBox
			// 
			this->obracunskiPeriodBox->BackColor = System::Drawing::Color::Transparent;
			this->obracunskiPeriodBox->Controls->Add(this->pictureBox5);
			this->obracunskiPeriodBox->Controls->Add(this->drugiDatumInput);
			this->obracunskiPeriodBox->Controls->Add(this->doLabel);
			this->obracunskiPeriodBox->Controls->Add(this->prviDatumInput);
			this->obracunskiPeriodBox->Controls->Add(this->odLabel);
			this->obracunskiPeriodBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->obracunskiPeriodBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->obracunskiPeriodBox->Location = System::Drawing::Point(303, 383);
			this->obracunskiPeriodBox->Name = L"obracunskiPeriodBox";
			this->obracunskiPeriodBox->Size = System::Drawing::Size(820, 110);
			this->obracunskiPeriodBox->TabIndex = 30;
			this->obracunskiPeriodBox->TabStop = false;
			this->obracunskiPeriodBox->Text = L"ObraÄunski period";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(6, 46);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(64, 64);
			this->pictureBox5->TabIndex = 34;
			this->pictureBox5->TabStop = false;
			// 
			// drugiDatumInput
			// 
			this->drugiDatumInput->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->drugiDatumInput->Location = System::Drawing::Point(494, 55);
			this->drugiDatumInput->Name = L"drugiDatumInput";
			this->drugiDatumInput->Size = System::Drawing::Size(176, 26);
			this->drugiDatumInput->TabIndex = 33;
			// 
			// doLabel
			// 
			this->doLabel->AutoSize = true;
			this->doLabel->Location = System::Drawing::Point(446, 59);
			this->doLabel->Name = L"doLabel";
			this->doLabel->Size = System::Drawing::Size(29, 20);
			this->doLabel->TabIndex = 32;
			this->doLabel->Text = L"do";
			// 
			// prviDatumInput
			// 
			this->prviDatumInput->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->prviDatumInput->Location = System::Drawing::Point(237, 55);
			this->prviDatumInput->Name = L"prviDatumInput";
			this->prviDatumInput->Size = System::Drawing::Size(176, 26);
			this->prviDatumInput->TabIndex = 32;
			// 
			// odLabel
			// 
			this->odLabel->AutoSize = true;
			this->odLabel->Location = System::Drawing::Point(186, 59);
			this->odLabel->Name = L"odLabel";
			this->odLabel->Size = System::Drawing::Size(29, 20);
			this->odLabel->TabIndex = 31;
			this->odLabel->Text = L"od";
			// 
			// stanjeVodeBox
			// 
			this->stanjeVodeBox->BackColor = System::Drawing::Color::Transparent;
			this->stanjeVodeBox->Controls->Add(this->pictureBox6);
			this->stanjeVodeBox->Controls->Add(this->novoStanjeInput);
			this->stanjeVodeBox->Controls->Add(this->staroStanjeInput);
			this->stanjeVodeBox->Controls->Add(this->novoStanjeLabel);
			this->stanjeVodeBox->Controls->Add(this->staroStanjeLabel);
			this->stanjeVodeBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stanjeVodeBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->stanjeVodeBox->Location = System::Drawing::Point(303, 509);
			this->stanjeVodeBox->Name = L"stanjeVodeBox";
			this->stanjeVodeBox->Size = System::Drawing::Size(820, 110);
			this->stanjeVodeBox->TabIndex = 31;
			this->stanjeVodeBox->TabStop = false;
			this->stanjeVodeBox->Text = L"Stanje vode";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(6, 46);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(64, 64);
			this->pictureBox6->TabIndex = 35;
			this->pictureBox6->TabStop = false;
			// 
			// novoStanjeInput
			// 
			this->novoStanjeInput->Location = System::Drawing::Point(537, 55);
			this->novoStanjeInput->Name = L"novoStanjeInput";
			this->novoStanjeInput->Size = System::Drawing::Size(88, 26);
			this->novoStanjeInput->TabIndex = 33;
			this->novoStanjeInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::novoStanjeInput_KeyPress);
			// 
			// staroStanjeInput
			// 
			this->staroStanjeInput->Location = System::Drawing::Point(304, 55);
			this->staroStanjeInput->Name = L"staroStanjeInput";
			this->staroStanjeInput->Size = System::Drawing::Size(88, 26);
			this->staroStanjeInput->TabIndex = 32;
			this->staroStanjeInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::staroStanjeInput_KeyPress);
			// 
			// novoStanjeLabel
			// 
			this->novoStanjeLabel->AutoSize = true;
			this->novoStanjeLabel->Location = System::Drawing::Point(420, 55);
			this->novoStanjeLabel->Name = L"novoStanjeLabel";
			this->novoStanjeLabel->Size = System::Drawing::Size(103, 20);
			this->novoStanjeLabel->TabIndex = 34;
			this->novoStanjeLabel->Text = L"Novo stanje";
			// 
			// staroStanjeLabel
			// 
			this->staroStanjeLabel->AutoSize = true;
			this->staroStanjeLabel->Location = System::Drawing::Point(185, 55);
			this->staroStanjeLabel->Name = L"staroStanjeLabel";
			this->staroStanjeLabel->Size = System::Drawing::Size(107, 20);
			this->staroStanjeLabel->TabIndex = 32;
			this->staroStanjeLabel->Text = L"Staro stanje";
			// 
			// ispisiRacunBtn
			// 
			this->ispisiRacunBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ispisiRacunBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ispisiRacunBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ispisiRacunBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ispisiRacunBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ispisiRacunBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->ispisiRacunBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ispisiRacunBtn.Image")));
			this->ispisiRacunBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ispisiRacunBtn->Location = System::Drawing::Point(525, 653);
			this->ispisiRacunBtn->Name = L"ispisiRacunBtn";
			this->ispisiRacunBtn->Size = System::Drawing::Size(170, 50);
			this->ispisiRacunBtn->TabIndex = 32;
			this->ispisiRacunBtn->Text = L"Ispiši račun";
			this->ispisiRacunBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ispisiRacunBtn->UseVisualStyleBackColor = false;
			this->ispisiRacunBtn->Click += gcnew System::EventHandler(this, &MyForm::ispisiRacunBtn_Click);
			// 
			// OcistiPoljaBtn
			// 
			this->OcistiPoljaBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->OcistiPoljaBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OcistiPoljaBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->OcistiPoljaBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OcistiPoljaBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OcistiPoljaBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->OcistiPoljaBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OcistiPoljaBtn.Image")));
			this->OcistiPoljaBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->OcistiPoljaBtn->Location = System::Drawing::Point(719, 653);
			this->OcistiPoljaBtn->Name = L"OcistiPoljaBtn";
			this->OcistiPoljaBtn->Size = System::Drawing::Size(170, 50);
			this->OcistiPoljaBtn->TabIndex = 33;
			this->OcistiPoljaBtn->Text = L"Očisti polja";
			this->OcistiPoljaBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->OcistiPoljaBtn->UseVisualStyleBackColor = false;
			this->OcistiPoljaBtn->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->pictureBoxPrintRacun);
			this->panel1->Controls->Add(this->sacuvajRacunBtn);
			this->panel1->Controls->Add(this->izlazBtn);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->noviRacunBtn);
			this->panel1->Controls->Add(this->traziRacunBtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(224, 735);
			this->panel1->TabIndex = 35;
			// 
			// pictureBoxPrintRacun
			// 
			this->pictureBoxPrintRacun->Location = System::Drawing::Point(3, 477);
			this->pictureBoxPrintRacun->Name = L"pictureBoxPrintRacun";
			this->pictureBoxPrintRacun->Size = System::Drawing::Size(218, 174);
			this->pictureBoxPrintRacun->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxPrintRacun->TabIndex = 89;
			this->pictureBoxPrintRacun->TabStop = false;
			this->pictureBoxPrintRacun->Visible = false;
			// 
			// sacuvajRacunBtn
			// 
			this->sacuvajRacunBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sacuvajRacunBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sacuvajRacunBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sacuvajRacunBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sacuvajRacunBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sacuvajRacunBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->sacuvajRacunBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sacuvajRacunBtn.Image")));
			this->sacuvajRacunBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->sacuvajRacunBtn->Location = System::Drawing::Point(28, 393);
			this->sacuvajRacunBtn->Name = L"sacuvajRacunBtn";
			this->sacuvajRacunBtn->Size = System::Drawing::Size(181, 50);
			this->sacuvajRacunBtn->TabIndex = 88;
			this->sacuvajRacunBtn->Text = L"Sačuvaj račun";
			this->sacuvajRacunBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->sacuvajRacunBtn->UseVisualStyleBackColor = false;
			this->sacuvajRacunBtn->Visible = false;
			this->sacuvajRacunBtn->Click += gcnew System::EventHandler(this, &MyForm::sacuvajRacunBtn_Click);
			// 
			// izlazBtn
			// 
			this->izlazBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->izlazBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->izlazBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->izlazBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->izlazBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->izlazBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"izlazBtn.Image")));
			this->izlazBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->izlazBtn->Location = System::Drawing::Point(12, 673);
			this->izlazBtn->Name = L"izlazBtn";
			this->izlazBtn->Size = System::Drawing::Size(197, 50);
			this->izlazBtn->TabIndex = 43;
			this->izlazBtn->Text = L"Napusti program";
			this->izlazBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->izlazBtn->UseVisualStyleBackColor = true;
			this->izlazBtn->Click += gcnew System::EventHandler(this, &MyForm::izlazBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(218, 174);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// noviRacunBtn
			// 
			this->noviRacunBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->noviRacunBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->noviRacunBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->noviRacunBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->noviRacunBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->noviRacunBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"noviRacunBtn.Image")));
			this->noviRacunBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->noviRacunBtn->Location = System::Drawing::Point(29, 329);
			this->noviRacunBtn->Name = L"noviRacunBtn";
			this->noviRacunBtn->Size = System::Drawing::Size(170, 50);
			this->noviRacunBtn->TabIndex = 1;
			this->noviRacunBtn->Text = L"Novi račun";
			this->noviRacunBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->noviRacunBtn->UseVisualStyleBackColor = true;
			this->noviRacunBtn->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// traziRacunBtn
			// 
			this->traziRacunBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->traziRacunBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->traziRacunBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->traziRacunBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->traziRacunBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->traziRacunBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"traziRacunBtn.Image")));
			this->traziRacunBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->traziRacunBtn->Location = System::Drawing::Point(29, 273);
			this->traziRacunBtn->Name = L"traziRacunBtn";
			this->traziRacunBtn->Size = System::Drawing::Size(170, 50);
			this->traziRacunBtn->TabIndex = 0;
			this->traziRacunBtn->Text = L"Traži Račun";
			this->traziRacunBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->traziRacunBtn->UseVisualStyleBackColor = true;
			this->traziRacunBtn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button4->Location = System::Drawing::Point(927, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(32, 32);
			this->button4->TabIndex = 2;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(224, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(960, 47);
			this->panel2->TabIndex = 36;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->ErrorImage = nullptr;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->InitialImage = nullptr;
			this->pictureBox7->Location = System::Drawing::Point(180, 3);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(48, 37);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 43;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::Control;
			this->label13->Location = System::Drawing::Point(229, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(516, 24);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Javno preduzeće vodovod, kanalizacija i odvoz smeća";
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(25, 73);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(911, 664);
			this->panel3->TabIndex = 38;
			// 
			// traziRacunBox
			// 
			this->traziRacunBox->BackColor = System::Drawing::Color::Transparent;
			this->traziRacunBox->Controls->Add(this->pregledRacuna);
			this->traziRacunBox->Controls->Add(this->pictureBox2);
			this->traziRacunBox->Controls->Add(this->trazeniRacunInput);
			this->traziRacunBox->Controls->Add(this->label17);
			this->traziRacunBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->traziRacunBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->traziRacunBox->Location = System::Drawing::Point(297, 322);
			this->traziRacunBox->Name = L"traziRacunBox";
			this->traziRacunBox->Size = System::Drawing::Size(820, 110);
			this->traziRacunBox->TabIndex = 37;
			this->traziRacunBox->TabStop = false;
			this->traziRacunBox->Text = L"Traži račun";
			this->traziRacunBox->Visible = false;
			// 
			// pregledRacuna
			// 
			this->pregledRacuna->Location = System::Drawing::Point(602, 38);
			this->pregledRacuna->Margin = System::Windows::Forms::Padding(2);
			this->pregledRacuna->Name = L"pregledRacuna";
			this->pregledRacuna->Size = System::Drawing::Size(148, 51);
			this->pregledRacuna->TabIndex = 24;
			this->pregledRacuna->Text = L"pregled računa";
			this->pregledRacuna->UseVisualStyleBackColor = true;
			this->pregledRacuna->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 46);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 64);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			// 
			// trazeniRacunInput
			// 
			this->trazeniRacunInput->Location = System::Drawing::Point(395, 50);
			this->trazeniRacunInput->Name = L"trazeniRacunInput";
			this->trazeniRacunInput->Size = System::Drawing::Size(155, 26);
			this->trazeniRacunInput->TabIndex = 11;
			this->trazeniRacunInput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(207, 52);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(166, 20);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Unesite broj računa";
			// 
			// pregledRacunaPanel
			// 
			this->pregledRacunaPanel->BackColor = System::Drawing::SystemColors::Control;
			this->pregledRacunaPanel->Controls->Add(this->PRPbrClanova);
			this->pregledRacunaPanel->Controls->Add(this->label41);
			this->pregledRacunaPanel->Controls->Add(this->PRPcijenaSaPdv);
			this->pregledRacunaPanel->Controls->Add(this->label38);
			this->pregledRacunaPanel->Controls->Add(this->PRPpdv);
			this->pregledRacunaPanel->Controls->Add(this->PRPpdvOsnovica);
			this->pregledRacunaPanel->Controls->Add(this->PRPcijenaBezPdv);
			this->pregledRacunaPanel->Controls->Add(this->PRPodvozSmeca);
			this->pregledRacunaPanel->Controls->Add(this->PRPpvnIsporucenaVoda);
			this->pregledRacunaPanel->Controls->Add(this->PRPpvnZastitaVoda);
			this->pregledRacunaPanel->Controls->Add(this->PRPfiksniTrosakDom);
			this->pregledRacunaPanel->Controls->Add(this->PRPodrzavanjeKanSis);
			this->pregledRacunaPanel->Controls->Add(this->PRPcijenaVode);
			this->pregledRacunaPanel->Controls->Add(this->label28);
			this->pregledRacunaPanel->Controls->Add(this->label27);
			this->pregledRacunaPanel->Controls->Add(this->label26);
			this->pregledRacunaPanel->Controls->Add(this->label25);
			this->pregledRacunaPanel->Controls->Add(this->label24);
			this->pregledRacunaPanel->Controls->Add(this->label23);
			this->pregledRacunaPanel->Controls->Add(this->label22);
			this->pregledRacunaPanel->Controls->Add(this->label21);
			this->pregledRacunaPanel->Controls->Add(this->label20);
			this->pregledRacunaPanel->Controls->Add(this->label19);
			this->pregledRacunaPanel->Controls->Add(this->label18);
			this->pregledRacunaPanel->Controls->Add(this->label16);
			this->pregledRacunaPanel->Controls->Add(this->label14);
			this->pregledRacunaPanel->Controls->Add(this->PRPrazlikaStanja);
			this->pregledRacunaPanel->Controls->Add(this->label11);
			this->pregledRacunaPanel->Controls->Add(this->PRPnovoStanje);
			this->pregledRacunaPanel->Controls->Add(this->label12);
			this->pregledRacunaPanel->Controls->Add(this->PRPstaroStanje);
			this->pregledRacunaPanel->Controls->Add(this->label10);
			this->pregledRacunaPanel->Controls->Add(this->PRPmjestoIzdavanja);
			this->pregledRacunaPanel->Controls->Add(this->label9);
			this->pregledRacunaPanel->Controls->Add(this->PRPperiod);
			this->pregledRacunaPanel->Controls->Add(this->label8);
			this->pregledRacunaPanel->Controls->Add(this->PRPbrRacuna);
			this->pregledRacunaPanel->Controls->Add(this->label6);
			this->pregledRacunaPanel->Controls->Add(this->label7);
			this->pregledRacunaPanel->Controls->Add(this->label5);
			this->pregledRacunaPanel->Controls->Add(this->label4);
			this->pregledRacunaPanel->Controls->Add(this->label3);
			this->pregledRacunaPanel->Controls->Add(this->label2);
			this->pregledRacunaPanel->Controls->Add(this->pictureBox8);
			this->pregledRacunaPanel->Controls->Add(this->potrosacBox);
			this->pregledRacunaPanel->Controls->Add(this->groupBox1);
			this->pregledRacunaPanel->Controls->Add(this->SaveRacun);
			this->pregledRacunaPanel->Location = System::Drawing::Point(227, 53);
			this->pregledRacunaPanel->Name = L"pregledRacunaPanel";
			this->pregledRacunaPanel->Size = System::Drawing::Size(956, 684);
			this->pregledRacunaPanel->TabIndex = 48;
			this->pregledRacunaPanel->Visible = false;
			// 
			// PRPbrClanova
			// 
			this->PRPbrClanova->AutoSize = true;
			this->PRPbrClanova->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPbrClanova->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPbrClanova->Location = System::Drawing::Point(896, 283);
			this->PRPbrClanova->Name = L"PRPbrClanova";
			this->PRPbrClanova->Size = System::Drawing::Size(29, 20);
			this->PRPbrClanova->TabIndex = 86;
			this->PRPbrClanova->Text = L"12";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label41->Location = System::Drawing::Point(778, 283);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(112, 20);
			this->label41->TabIndex = 85;
			this->label41->Text = L"Broj članova:";
			// 
			// PRPcijenaSaPdv
			// 
			this->PRPcijenaSaPdv->AutoSize = true;
			this->PRPcijenaSaPdv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPcijenaSaPdv->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPcijenaSaPdv->Location = System::Drawing::Point(864, 631);
			this->PRPcijenaSaPdv->Name = L"PRPcijenaSaPdv";
			this->PRPcijenaSaPdv->Size = System::Drawing::Size(44, 20);
			this->PRPcijenaSaPdv->TabIndex = 84;
			this->PRPcijenaSaPdv->Text = L"0,00";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label38->Location = System::Drawing::Point(864, 609);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(44, 20);
			this->label38->TabIndex = 83;
			this->label38->Text = L"0,00";
			this->label38->Click += gcnew System::EventHandler(this, &MyForm::label38_Click);
			// 
			// PRPpdv
			// 
			this->PRPpdv->AutoSize = true;
			this->PRPpdv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPpdv->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPpdv->Location = System::Drawing::Point(864, 587);
			this->PRPpdv->Name = L"PRPpdv";
			this->PRPpdv->Size = System::Drawing::Size(44, 20);
			this->PRPpdv->TabIndex = 82;
			this->PRPpdv->Text = L"0,00";
			// 
			// PRPpdvOsnovica
			// 
			this->PRPpdvOsnovica->AutoSize = true;
			this->PRPpdvOsnovica->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPpdvOsnovica->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPpdvOsnovica->Location = System::Drawing::Point(864, 565);
			this->PRPpdvOsnovica->Name = L"PRPpdvOsnovica";
			this->PRPpdvOsnovica->Size = System::Drawing::Size(44, 20);
			this->PRPpdvOsnovica->TabIndex = 81;
			this->PRPpdvOsnovica->Text = L"0,00";
			// 
			// PRPcijenaBezPdv
			// 
			this->PRPcijenaBezPdv->AutoSize = true;
			this->PRPcijenaBezPdv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPcijenaBezPdv->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPcijenaBezPdv->Location = System::Drawing::Point(864, 543);
			this->PRPcijenaBezPdv->Name = L"PRPcijenaBezPdv";
			this->PRPcijenaBezPdv->Size = System::Drawing::Size(44, 20);
			this->PRPcijenaBezPdv->TabIndex = 80;
			this->PRPcijenaBezPdv->Text = L"0,00";
			// 
			// PRPodvozSmeca
			// 
			this->PRPodvozSmeca->AutoSize = true;
			this->PRPodvozSmeca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPodvozSmeca->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPodvozSmeca->Location = System::Drawing::Point(864, 512);
			this->PRPodvozSmeca->Name = L"PRPodvozSmeca";
			this->PRPodvozSmeca->Size = System::Drawing::Size(44, 20);
			this->PRPodvozSmeca->TabIndex = 79;
			this->PRPodvozSmeca->Text = L"0,00";
			// 
			// PRPpvnIsporucenaVoda
			// 
			this->PRPpvnIsporucenaVoda->AutoSize = true;
			this->PRPpvnIsporucenaVoda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPpvnIsporucenaVoda->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPpvnIsporucenaVoda->Location = System::Drawing::Point(864, 489);
			this->PRPpvnIsporucenaVoda->Name = L"PRPpvnIsporucenaVoda";
			this->PRPpvnIsporucenaVoda->Size = System::Drawing::Size(44, 20);
			this->PRPpvnIsporucenaVoda->TabIndex = 78;
			this->PRPpvnIsporucenaVoda->Text = L"0,00";
			// 
			// PRPpvnZastitaVoda
			// 
			this->PRPpvnZastitaVoda->AutoSize = true;
			this->PRPpvnZastitaVoda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPpvnZastitaVoda->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPpvnZastitaVoda->Location = System::Drawing::Point(864, 467);
			this->PRPpvnZastitaVoda->Name = L"PRPpvnZastitaVoda";
			this->PRPpvnZastitaVoda->Size = System::Drawing::Size(44, 20);
			this->PRPpvnZastitaVoda->TabIndex = 77;
			this->PRPpvnZastitaVoda->Text = L"0,00";
			// 
			// PRPfiksniTrosakDom
			// 
			this->PRPfiksniTrosakDom->AutoSize = true;
			this->PRPfiksniTrosakDom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPfiksniTrosakDom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPfiksniTrosakDom->Location = System::Drawing::Point(864, 446);
			this->PRPfiksniTrosakDom->Name = L"PRPfiksniTrosakDom";
			this->PRPfiksniTrosakDom->Size = System::Drawing::Size(44, 20);
			this->PRPfiksniTrosakDom->TabIndex = 76;
			this->PRPfiksniTrosakDom->Text = L"0,00";
			// 
			// PRPodrzavanjeKanSis
			// 
			this->PRPodrzavanjeKanSis->AutoSize = true;
			this->PRPodrzavanjeKanSis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPodrzavanjeKanSis->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPodrzavanjeKanSis->Location = System::Drawing::Point(864, 424);
			this->PRPodrzavanjeKanSis->Name = L"PRPodrzavanjeKanSis";
			this->PRPodrzavanjeKanSis->Size = System::Drawing::Size(44, 20);
			this->PRPodrzavanjeKanSis->TabIndex = 75;
			this->PRPodrzavanjeKanSis->Text = L"0,00";
			// 
			// PRPcijenaVode
			// 
			this->PRPcijenaVode->AutoSize = true;
			this->PRPcijenaVode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPcijenaVode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPcijenaVode->Location = System::Drawing::Point(864, 402);
			this->PRPcijenaVode->Name = L"PRPcijenaVode";
			this->PRPcijenaVode->Size = System::Drawing::Size(44, 20);
			this->PRPcijenaVode->TabIndex = 74;
			this->PRPcijenaVode->Text = L"0,00";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label28->Location = System::Drawing::Point(644, 631);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(118, 20);
			this->label28->TabIndex = 73;
			this->label28->Text = L"Iznos računa:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label27->Location = System::Drawing::Point(611, 609);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(144, 20);
			this->label27->TabIndex = 72;
			this->label27->Text = L"Zatezna kamata:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label26->Location = System::Drawing::Point(676, 587);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(95, 20);
			this->label26->TabIndex = 71;
			this->label26->Text = L"PDV 17% :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label25->Location = System::Drawing::Point(636, 565);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(125, 20);
			this->label25->TabIndex = 70;
			this->label25->Text = L"PDV osnovica:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label24->Location = System::Drawing::Point(593, 543);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(167, 20);
			this->label24->TabIndex = 69;
			this->label24->Text = L"Ukupno bez PDV-a:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label23->Location = System::Drawing::Point(62, 512);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(138, 20);
			this->label23->TabIndex = 68;
			this->label23->Text = L"ODVOZ SMEĆA";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label22->Location = System::Drawing::Point(62, 489);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(250, 20);
			this->label22->TabIndex = 67;
			this->label22->Text = L"PVN ZA ISPORUČENU VODU";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label21->Location = System::Drawing::Point(62, 467);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(301, 20);
			this->label21->TabIndex = 66;
			this->label21->Text = L"PVN ZA ZAŠTITU VODA - TARIFA 1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label20->Location = System::Drawing::Point(62, 446);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(277, 20);
			this->label20->TabIndex = 65;
			this->label20->Text = L"FIKSNI TROŠAK DOMAĆINSTVO";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label19->Location = System::Drawing::Point(62, 424);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(379, 20);
			this->label19->TabIndex = 64;
			this->label19->Text = L"ODRŽAVANJE KANALIZACIJSKOG SISTEMA";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label18->Location = System::Drawing::Point(62, 402);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(193, 20);
			this->label18->TabIndex = 63;
			this->label18->Text = L"VODA DOMAĆINSTVO";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label16->Location = System::Drawing::Point(821, 368);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(95, 20);
			this->label16->TabIndex = 62;
			this->label16->Text = L"Iznos (KM)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label14->Location = System::Drawing::Point(249, 368);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 20);
			this->label14->TabIndex = 61;
			this->label14->Text = L"Naziv usluge";
			// 
			// PRPrazlikaStanja
			// 
			this->PRPrazlikaStanja->AutoSize = true;
			this->PRPrazlikaStanja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPrazlikaStanja->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPrazlikaStanja->Location = System::Drawing::Point(647, 283);
			this->PRPrazlikaStanja->Name = L"PRPrazlikaStanja";
			this->PRPrazlikaStanja->Size = System::Drawing::Size(98, 20);
			this->PRPrazlikaStanja->TabIndex = 60;
			this->PRPrazlikaStanja->Text = L"12345 [m3]";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label11->Location = System::Drawing::Point(549, 283);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 20);
			this->label11->TabIndex = 59;
			this->label11->Text = L"Potrošnja:";
			// 
			// PRPnovoStanje
			// 
			this->PRPnovoStanje->AutoSize = true;
			this->PRPnovoStanje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPnovoStanje->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPnovoStanje->Location = System::Drawing::Point(418, 283);
			this->PRPnovoStanje->Name = L"PRPnovoStanje";
			this->PRPnovoStanje->Size = System::Drawing::Size(98, 20);
			this->PRPnovoStanje->TabIndex = 58;
			this->PRPnovoStanje->Text = L"12345 [m3]";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label12->Location = System::Drawing::Point(302, 283);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(113, 20);
			this->label12->TabIndex = 57;
			this->label12->Text = L"Novo stanje: ";
			// 
			// PRPstaroStanje
			// 
			this->PRPstaroStanje->AutoSize = true;
			this->PRPstaroStanje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPstaroStanje->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPstaroStanje->Location = System::Drawing::Point(180, 283);
			this->PRPstaroStanje->Name = L"PRPstaroStanje";
			this->PRPstaroStanje->Size = System::Drawing::Size(98, 20);
			this->PRPstaroStanje->TabIndex = 56;
			this->PRPstaroStanje->Text = L"12345 [m3]";
			this->PRPstaroStanje->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label10->Location = System::Drawing::Point(62, 283);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 20);
			this->label10->TabIndex = 55;
			this->label10->Text = L"Staro stanje: ";
			// 
			// PRPmjestoIzdavanja
			// 
			this->PRPmjestoIzdavanja->AutoSize = true;
			this->PRPmjestoIzdavanja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPmjestoIzdavanja->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPmjestoIzdavanja->Location = System::Drawing::Point(686, 213);
			this->PRPmjestoIzdavanja->Name = L"PRPmjestoIzdavanja";
			this->PRPmjestoIzdavanja->Size = System::Drawing::Size(63, 20);
			this->PRPmjestoIzdavanja->TabIndex = 54;
			this->PRPmjestoIzdavanja->Text = L"Zenica";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(521, 213);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 20);
			this->label9->TabIndex = 53;
			this->label9->Text = L"Mjesto izdavanja:";
			// 
			// PRPperiod
			// 
			this->PRPperiod->AutoSize = true;
			this->PRPperiod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPperiod->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPperiod->Location = System::Drawing::Point(686, 191);
			this->PRPperiod->Name = L"PRPperiod";
			this->PRPperiod->Size = System::Drawing::Size(244, 20);
			this->PRPperiod->TabIndex = 52;
			this->PRPperiod->Text = L"od 01.12.1234 do 01.12.1234";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(509, 191);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(159, 20);
			this->label8->TabIndex = 51;
			this->label8->Text = L"Obračunski period:";
			// 
			// PRPbrRacuna
			// 
			this->PRPbrRacuna->AutoSize = true;
			this->PRPbrRacuna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPbrRacuna->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PRPbrRacuna->Location = System::Drawing::Point(686, 169);
			this->PRPbrRacuna->Name = L"PRPbrRacuna";
			this->PRPbrRacuna->Size = System::Drawing::Size(109, 20);
			this->PRPbrRacuna->TabIndex = 50;
			this->PRPbrRacuna->Text = L"1234567890";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(562, 169);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 20);
			this->label6->TabIndex = 49;
			this->label6->Text = L"Broj Računa:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(171, 88);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(514, 16);
			this->label7->TabIndex = 48;
			this->label7->Text = L"PRIJAVA KVARA (0-24h): Tel: +387 (0)12 345 678  | Tel: +387 (0)12 345 678";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(171, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(444, 16);
			this->label5->TabIndex = 47;
			this->label5->Text = L"INFORMACIJE: Tel: +387 (0)12 345 678   Fax: +387 (0)12 345 678";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(171, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(421, 16);
			this->label4->TabIndex = 46;
			this->label4->Text = L"DIREKCIJA: Tel: +387 (0)12 345 678   Fax: +387 (0)12 345 678";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(170, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(751, 20);
			this->label3->TabIndex = 45;
			this->label3->Text = L"PDV broj: 1234567890, ID broj: 1234567890, porezni broj: 1234567890, reg broj: 01"
				L"-23-4567";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(170, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(738, 20);
			this->label2->TabIndex = 44;
			this->label2->Text = L"J.P. Vodovod, kanalizacija i odvoz smeća d.o.o. Zenica, primjer adrese br. 12, 72"
				L"000 Zenica";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(61, 23);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(99, 77);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 3;
			this->pictureBox8->TabStop = false;
			// 
			// potrosacBox
			// 
			this->potrosacBox->Controls->Add(this->PRPmjesto);
			this->potrosacBox->Controls->Add(this->PRPpostanski);
			this->potrosacBox->Controls->Add(this->label1);
			this->potrosacBox->Controls->Add(this->PRPadresa);
			this->potrosacBox->Controls->Add(this->label15);
			this->potrosacBox->Controls->Add(this->PRPimePrezime);
			this->potrosacBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->potrosacBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->potrosacBox->Location = System::Drawing::Point(61, 152);
			this->potrosacBox->Name = L"potrosacBox";
			this->potrosacBox->Size = System::Drawing::Size(388, 99);
			this->potrosacBox->TabIndex = 0;
			this->potrosacBox->TabStop = false;
			this->potrosacBox->Text = L"Potrošač:";
			// 
			// PRPmjesto
			// 
			this->PRPmjesto->AutoSize = true;
			this->PRPmjesto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPmjesto->Location = System::Drawing::Point(151, 67);
			this->PRPmjesto->Name = L"PRPmjesto";
			this->PRPmjesto->Size = System::Drawing::Size(63, 20);
			this->PRPmjesto->TabIndex = 4;
			this->PRPmjesto->Text = L"Zenica";
			// 
			// PRPpostanski
			// 
			this->PRPpostanski->AutoSize = true;
			this->PRPpostanski->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPpostanski->Location = System::Drawing::Point(88, 67);
			this->PRPpostanski->Name = L"PRPpostanski";
			this->PRPpostanski->Size = System::Drawing::Size(59, 20);
			this->PRPpostanski->TabIndex = 3;
			this->PRPpostanski->Text = L"72000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Mjesto:";
			// 
			// PRPadresa
			// 
			this->PRPadresa->AutoSize = true;
			this->PRPadresa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPadresa->Location = System::Drawing::Point(88, 44);
			this->PRPadresa->Name = L"PRPadresa";
			this->PRPadresa->Size = System::Drawing::Size(218, 20);
			this->PRPadresa->TabIndex = 2;
			this->PRPadresa->Text = L"Primjer Adrese 172B 2/4/3";
			this->PRPadresa->Click += gcnew System::EventHandler(this, &MyForm::PRPadresa_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(7, 44);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(71, 20);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Adresa:";
			// 
			// PRPimePrezime
			// 
			this->PRPimePrezime->AutoSize = true;
			this->PRPimePrezime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRPimePrezime->Location = System::Drawing::Point(7, 22);
			this->PRPimePrezime->Name = L"PRPimePrezime";
			this->PRPimePrezime->Size = System::Drawing::Size(163, 20);
			this->PRPimePrezime->TabIndex = 0;
			this->PRPimePrezime->Text = L"Ime (Otac) Prezime";
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->groupBox1->Location = System::Drawing::Point(58, 332);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(872, 334);
			this->groupBox1->TabIndex = 87;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Usluge";
			// 
			// SaveRacun
			// 
			this->SaveRacun->Location = System::Drawing::Point(3, 3);
			this->SaveRacun->Name = L"SaveRacun";
			this->SaveRacun->Size = System::Drawing::Size(950, 678);
			this->SaveRacun->TabIndex = 88;
			this->SaveRacun->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1184, 735);
			this->Controls->Add(this->pregledRacunaPanel);
			this->Controls->Add(this->traziRacunBox);
			this->Controls->Add(this->podOPrebivalistuBox);
			this->Controls->Add(this->licniPodaciBox);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->stanjeVodeBox);
			this->Controls->Add(this->OcistiPoljaBtn);
			this->Controls->Add(this->ispisiRacunBtn);
			this->Controls->Add(this->obracunskiPeriodBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->licniPodaciBox->ResumeLayout(false);
			this->licniPodaciBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->podOPrebivalistuBox->ResumeLayout(false);
			this->podOPrebivalistuBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->obracunskiPeriodBox->ResumeLayout(false);
			this->obracunskiPeriodBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->stanjeVodeBox->ResumeLayout(false);
			this->stanjeVodeBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPrintRacun))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->traziRacunBox->ResumeLayout(false);
			this->traziRacunBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->pregledRacunaPanel->ResumeLayout(false);
			this->pregledRacunaPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->potrosacBox->ResumeLayout(false);
			this->potrosacBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SaveRacun))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		//****************************************************************************************************//
		//***************************************		POČETAK		  ****************************************// 		
		//******************************		      MENU DUGMAD        		******************************//
		//****************************************************************************************************//

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//System::Windows::Forms::GroupBox^ licniPodaciBox;
		licniPodaciBox->Visible = false;
		podOPrebivalistuBox->Visible = false;
		obracunskiPeriodBox->Visible = false;
		stanjeVodeBox->Visible = false;
		ispisiRacunBtn->Visible = false;
		OcistiPoljaBtn->Visible = false;
		pregledRacunaPanel->Visible = false;
		traziRacunBox->Visible = true;
		sacuvajRacunBtn->Visible = false;

	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		imeInput->Text = "";
		prezimeInput->Text = "";
		imeOcaInput->Text = "";
		godinaRodenjaInput->Text = "";
		postanskiBrInput->Text = "";
		adresaInput->Text = "";
		brClanovaInput->Text = "";
		mjestoInput->Text = "";
		novoStanjeInput->Text = "";
		staroStanjeInput->Text = "";

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		licniPodaciBox->Visible = true;
		podOPrebivalistuBox->Visible = true;
		obracunskiPeriodBox->Visible = true;
		stanjeVodeBox->Visible = true;
		ispisiRacunBtn->Visible = true;
		OcistiPoljaBtn->Visible = true;
		traziRacunBox->Visible = false;
		pregledRacunaPanel->Visible = false;
		sacuvajRacunBtn->Visible = false;
	}

		   //****************************************************************************************************//
		   //******************************		      MENU DUGMAD        		******************************// 		
		   //***************************************		   KRAJ	      ****************************************//
		   //****************************************************************************************************//
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void ispisiRacunBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		double potrosnja, cijenaPotroseneVode, cijenaPVNzastitaVoda, cijenaBezPDV, cijenaSaPDV, odvozSmeca;

		Podaci korisnik;

		string punoImePrezime;

		string imeKorisnika = msclr::interop::marshal_as< std::string >(imeInput->Text);
		korisnik.ime = imeKorisnika;
		//testniLabel->Text = gcnew String(korisnik.ime.c_str());

		string prezimeKorisnika = msclr::interop::marshal_as< std::string >(prezimeInput->Text);
		korisnik.prezime = prezimeKorisnika;

		string  imeOcaKorisnika = msclr::interop::marshal_as< std::string >(imeOcaInput->Text);
		korisnik.imeOca = imeOcaKorisnika;

		string  adresaKorisnika = msclr::interop::marshal_as< std::string >(adresaInput->Text);
		korisnik.adresa = adresaKorisnika;

		string  mjestoKorisnika = msclr::interop::marshal_as< std::string >(mjestoInput->Text);
		korisnik.mjesto = mjestoKorisnika;

		string  postanskiBrKorisnika = msclr::interop::marshal_as< std::string >(postanskiBrInput->Text);
		korisnik.postanskiBr = postanskiBrKorisnika;

		int brClanovaKorisnika = Convert::ToInt32(brClanovaInput->Text);
		korisnik.brClanova = brClanovaKorisnika;

		string  prviDatumKorisnika = msclr::interop::marshal_as< std::string >(prviDatumInput->Text);
		korisnik.Period.prviDatum = prviDatumKorisnika;

		string  drugiDatumKorisnika = msclr::interop::marshal_as< std::string >(drugiDatumInput->Text);
		korisnik.Period.drugiDatum = drugiDatumKorisnika;

		string staroStanjeKorisnika = msclr::interop::marshal_as< std::string >(staroStanjeInput->Text);
		korisnik.StaroNovoStanje.staro = staroStanjeKorisnika;

		string novoStanjeKorisnika = msclr::interop::marshal_as< std::string >(novoStanjeInput->Text);
		korisnik.StaroNovoStanje.novo = novoStanjeKorisnika;

		//Fiksni podaci 
		float fiksniTrosakDom = 2.99;
		float cijenaVode = 0.56;
		float odrzavanjeKanSis = 2.58;
		float PVNzastitaVoda = 0.04;
		float PVNisporucenaVoda = 0.09;
		float cijenaOdvozaSmeca = 5.95;

		string potrosnjaStr, cijenaPotroseneVodeStr, cijenaPVNzastitaVodaStr, cijenaBezPDVStr, cijenaSaPDVStr;

		odvozSmeca = ceil((cijenaOdvozaSmeca * korisnik.brClanova) * 100.0) / 100.0;

		potrosnja = Convert::ToDouble(novoStanjeInput->Text) - Convert::ToDouble(staroStanjeInput->Text);

		cijenaPotroseneVode = ceil((potrosnja * cijenaVode) * 100.0) / 100.0;

		cijenaPotroseneVodeStr = cijenaPotroseneVode;

		cijenaPVNzastitaVoda = ceil((PVNzastitaVoda * potrosnja) * 100.0) / 100.0;

		cijenaBezPDV = ceil((cijenaPotroseneVode + odrzavanjeKanSis + fiksniTrosakDom + cijenaPVNzastitaVoda + PVNisporucenaVoda + odvozSmeca) * 100.0) / 100.0;

		cijenaSaPDV = ceil((cijenaBezPDV + cijenaBezPDV * 0.17) * 100.0) / 100.0;



		srand(time(NULL));
		korisnik.brRacuna = rand() % 89999999 + 10000000;
		brRacunaPrint = korisnik.brRacuna;

		fstream my_file;

		my_file.open("my_file.csv", fstream::app);
		if (!my_file) {
			std::cout << "File not created!";
		}
		else {
			cout << "File created successfully!";
			my_file << korisnik.brRacuna << ";" << korisnik.ime << ";" << korisnik.prezime << ";" << korisnik.imeOca << ";" << korisnik.adresa << ";"
				<< korisnik.postanskiBr << ";" << korisnik.mjesto << ";" << korisnik.brClanova << ";" << korisnik.Period.prviDatum << ";"
				<< korisnik.Period.drugiDatum << ";" << korisnik.StaroNovoStanje.staro << ";" << korisnik.StaroNovoStanje.novo << ";" << potrosnja << ";"
				<< cijenaPotroseneVode << ";" << cijenaPVNzastitaVoda << ";" << cijenaBezPDV << ";" << cijenaSaPDV << ";" << odvozSmeca << "\n";
			my_file.close();
		}

		licniPodaciBox->Visible = false;
		podOPrebivalistuBox->Visible = false;
		obracunskiPeriodBox->Visible = false;
		stanjeVodeBox->Visible = false;
		ispisiRacunBtn->Visible = false;
		OcistiPoljaBtn->Visible = false;
		pregledRacunaPanel->Visible = true;
		sacuvajRacunBtn->Visible = true;



		punoImePrezime = korisnik.ime + " (" + korisnik.imeOca + ") " + korisnik.prezime;
		PRPimePrezime->Text = gcnew String(punoImePrezime.c_str());
		PRPadresa->Text = gcnew String(korisnik.adresa.c_str());
		PRPmjesto->Text = gcnew String(korisnik.mjesto.c_str());
		PRPpostanski->Text = gcnew String(korisnik.postanskiBr.c_str());
		PRPbrClanova->Text = brClanovaInput->Text;
		string datumi;
		datumi = "od " + korisnik.Period.prviDatum + " do " + korisnik.Period.drugiDatum;
		PRPperiod->Text = gcnew String(datumi.c_str());
		PRPnovoStanje->Text = gcnew String(korisnik.StaroNovoStanje.novo.c_str());
		PRPstaroStanje->Text = gcnew String(korisnik.StaroNovoStanje.staro.c_str());
		PRPrazlikaStanja->Text = Convert::ToString(ceil(potrosnja * 100.0) / 100.0);
		PRPcijenaVode->Text = Convert::ToString(ceil(cijenaPotroseneVode * 100.0) / 100.0);
		PRPpvnZastitaVoda->Text = Convert::ToString(ceil(cijenaPVNzastitaVoda * 100.0) / 100.0);
		PRPcijenaBezPdv->Text = Convert::ToString(ceil(cijenaBezPDV * 100.0) / 100.0);
		PRPcijenaSaPdv->Text = Convert::ToString(ceil(cijenaSaPDV * 100.0) / 100.0);
		PRPodvozSmeca->Text = Convert::ToString(ceil(odvozSmeca * 100.0) / 100.0);
		PRPodrzavanjeKanSis->Text = Convert::ToString(ceil(odrzavanjeKanSis * 100.0) / 100.0);
		PRPpdvOsnovica->Text = Convert::ToString(ceil(cijenaBezPDV * 100.0) / 100.0);
		PRPfiksniTrosakDom->Text = Convert::ToString(fiksniTrosakDom);
		PRPpvnIsporucenaVoda->Text = Convert::ToString(PVNisporucenaVoda);
		PRPpdv->Text = Convert::ToString(ceil((cijenaBezPDV * 0.17) * 100.0) / 100.0);
		PRPbrRacuna->Text = Convert::ToString(korisnik.brRacuna);

		//PRPbrClanova->Text= gcnew String(korisnik.brClanova.c_str());
	}


	private: System::Void testniLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Podaci trazeniKorisnik;
		string brClanova, prpbrRacuna, potrosnja, cijenaPotroseneVode, cijenaPvnZastitaVoda, cijenaBezPdv, cijenaSaPdv, cijenaOdvozSmeca;
		int brRacuna, trazeniBrRacuna;

		//Fiksni podaci 
		string fiksniTrosakDom = "2.99";
		string cijenaVode = "0.56";
		string odrzavanjeKanSis = "2.58";
		string PVNzastitaVoda = "0.04";
		string PVNisporucenaVoda = "0.09";
		string cijenaOdvozaSmeca = "5.95";

		bool pronadjen = false;
		for (int i = 0; ; i++)
		{

			ifstream inFile("my_file.csv");


			trazeniBrRacuna = Convert::ToInt32(trazeniRacunInput->Text);

			
			string prijemStringa;
			while (inFile >> brRacuna)
			{
				int brojacRedova = 0, brojacKolona = 0;
				ifstream inFile("my_file.csv");
				if (inFile.is_open())
				{
					string line;
					while (getline(inFile, line))
					{

						if (brojacRedova == i) {
							stringstream ss(line);
							string course;

							while (getline(ss, course, ';'))
							{
								prijemStringa = course;
								if (brojacKolona == 0) {

									brRacuna = stoi(prijemStringa);
									if (trazeniBrRacuna == brRacuna) {
										prpbrRacuna = prijemStringa;
										pronadjen = true;
										brRacunaPrint = brRacuna;
									}
								}
								if (brojacKolona == 1 && pronadjen == true) {
									trazeniKorisnik.ime = prijemStringa;
								}
								if (brojacKolona == 2 && pronadjen == true) {
									trazeniKorisnik.prezime = prijemStringa;
								}
								if (brojacKolona == 3 && pronadjen == true) {
									trazeniKorisnik.imeOca = prijemStringa;
								}
								if (brojacKolona == 4 && pronadjen == true) {
									trazeniKorisnik.adresa = prijemStringa;
								}
								if (brojacKolona == 5 && pronadjen == true) {
									trazeniKorisnik.postanskiBr = prijemStringa;
								}
								if (brojacKolona == 6 && pronadjen == true) {
									trazeniKorisnik.mjesto = prijemStringa;
								}
								if (brojacKolona == 7 && pronadjen == true) {
									brClanova = prijemStringa;
								}
								if (brojacKolona == 8 && pronadjen == true) {
									trazeniKorisnik.Period.prviDatum = prijemStringa;
								}
								if (brojacKolona == 9 && pronadjen == true) {
									trazeniKorisnik.Period.drugiDatum = prijemStringa;
								}
								if (brojacKolona == 10 && pronadjen == true) {
									trazeniKorisnik.StaroNovoStanje.staro = prijemStringa;
								}
								if (brojacKolona == 11 && pronadjen == true) {
									trazeniKorisnik.StaroNovoStanje.novo = prijemStringa;
								}
								if (brojacKolona == 12 && pronadjen == true) {
									potrosnja = prijemStringa;
								}
								if (brojacKolona == 13 && pronadjen == true) {
									cijenaPotroseneVode = prijemStringa;
								}
								if (brojacKolona == 14 && pronadjen == true) {
									cijenaPvnZastitaVoda = prijemStringa;
								}
								if (brojacKolona == 15 && pronadjen == true) {
									cijenaBezPdv = prijemStringa;
								}
								if (brojacKolona == 16 && pronadjen == true) {
									cijenaSaPdv = prijemStringa;
								}
								if (brojacKolona == 17 && pronadjen == true) {
									cijenaOdvozSmeca = prijemStringa;
									pronadjen = false;
									goto end;
								}
								brojacKolona++;
							}
							brojacKolona == 0;
						}
						brojacRedova++;
					}
				}

			}

			inFile.close();

		}
	end:;
		pregledRacunaPanel->Visible = true;
		traziRacunBox->Visible = false;
		sacuvajRacunBtn->Visible = true;
		string punoImePrezime;

		punoImePrezime = trazeniKorisnik.ime + " (" + trazeniKorisnik.imeOca + ") " + trazeniKorisnik.prezime;
		PRPimePrezime->Text = gcnew String(punoImePrezime.c_str());
		PRPadresa->Text = gcnew String(trazeniKorisnik.adresa.c_str());
		PRPmjesto->Text = gcnew String(trazeniKorisnik.mjesto.c_str());
		PRPpostanski->Text = gcnew String(trazeniKorisnik.postanskiBr.c_str());
		PRPbrClanova->Text = gcnew String(brClanova.c_str());
		string datumi;
		datumi = "od " + trazeniKorisnik.Period.prviDatum + " do " + trazeniKorisnik.Period.drugiDatum;
		PRPperiod->Text = gcnew String(datumi.c_str());
		PRPnovoStanje->Text = gcnew String(trazeniKorisnik.StaroNovoStanje.novo.c_str());
		PRPstaroStanje->Text = gcnew String(trazeniKorisnik.StaroNovoStanje.staro.c_str());
		PRPrazlikaStanja->Text = gcnew String(potrosnja.c_str());
		PRPcijenaVode->Text = gcnew String(cijenaPotroseneVode.c_str());
		PRPpvnZastitaVoda->Text = gcnew String(PVNzastitaVoda.c_str());
		PRPcijenaBezPdv->Text = gcnew String(cijenaBezPdv.c_str());
		PRPcijenaSaPdv->Text = gcnew String(cijenaSaPdv.c_str());
		PRPodvozSmeca->Text = gcnew String(cijenaOdvozSmeca.c_str());
		PRPodrzavanjeKanSis->Text = gcnew String(odrzavanjeKanSis.c_str());
		PRPpdvOsnovica->Text = gcnew String(cijenaBezPdv.c_str());
		PRPfiksniTrosakDom->Text = gcnew String(fiksniTrosakDom.c_str());
		PRPpvnIsporucenaVoda->Text = gcnew String(PVNisporucenaVoda.c_str());
		PRPpdv->Text = Convert::ToString(ceil((stoi(cijenaBezPdv) * 0.17) * 100.0) / 100.0);
		PRPbrRacuna->Text = gcnew String(prpbrRacuna.c_str());

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void testniLabel4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void testniLabel3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   //****************************************************************************************************//
		   //***************************************		POČETAK		  ****************************************// 		
		   //******************************		OGRANIČAVANJE TEXTBOXOVA		******************************//
		   //****************************************************************************************************//

	private: System::Void imeInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (!isalpha(ch) && !iscntrl(ch))
		{
			e->Handled = true;
		}
	}
	private: System::Void brClanovaInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		brClanovaInput->MaxLength = 2;
		if (!isdigit(ch) && !iscntrl(ch))
		{
			e->Handled = true;
		}

	}
	private: System::Void prezimeInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (!isalpha(ch) && !iscntrl(ch))
		{
			e->Handled = true;
		}
	}


	private: System::Void godinaRodenjaInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		godinaRodenjaInput->MaxLength = 4;
		if (!isdigit(ch) && !iscntrl(ch))
		{
			e->Handled = true;
		}
	}

	private: System::Void postanskiBrInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		postanskiBrInput->MaxLength = 5;
		if (!isdigit(ch) && !iscntrl(ch))
		{
			e->Handled = true;
		}
	}

	private: System::Void mjestoInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (!isalpha(ch) && !isspace(ch) && !iscntrl(ch))
		{
			e->Handled = true;
		}
	}

	private: System::Void imeOcaInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (!isalpha(ch) && !iscntrl(ch))
		{
			e->Handled = true;
		}
	}

	private: System::Void staroStanjeInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		staroStanjeInput->MaxLength = 8;
		if (!isdigit(ch) && !iscntrl(ch) && !ispunct(ch))
		{
			e->Handled = true;
		}
	}

	private: System::Void novoStanjeInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		novoStanjeInput->MaxLength = 8;
		if (!isdigit(ch) && !iscntrl(ch) && !ispunct(ch))
		{
			e->Handled = true;
		}
	}
		   //****************************************************************************************************//
		   //******************************		OGRANIČAVANJE TEXTBOXOVA		******************************//
		   //***************************************		   KRAJ	      ****************************************//
		   //****************************************************************************************************//

	private: System::Void izlazBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}





	private: System::Void PRPadresa_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sacuvajRacunBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Rectangle^ bounds;
		System::Drawing::Bitmap^ screenshot;
		Graphics^ graph;
		bounds = Screen::PrimaryScreen->Bounds;
		screenshot = gcnew System::Drawing::Bitmap(bounds->Width - 345, bounds->Height - 20, System::Drawing::Imaging::PixelFormat::Format32bppPArgb);
		graph = Graphics::FromImage(screenshot);
		graph->CopyFromScreen(bounds->X + 505, bounds->Y + 125, 0, 0, bounds->Size, CopyPixelOperation::SourceCopy);
		pictureBoxPrintRacun->Image = screenshot;

		string nekiStrign = "nesto";

		SaveFileDialog^ save = gcnew SaveFileDialog();
		save->Title = "Save Screenshot";
		save->FileName = Convert::ToString(brRacunaPrint);
		save->Filter = "JPEG | *.jpg | Bitmap | *.bmp | Portable Network Graphics | *.png |Graphical Interchange File Format | *.gif | PDF | *.pdf";
		save->ShowDialog();
		pictureBoxPrintRacun->Image->Save(save->FileName);

	}

	};
}