#pragma once
#include "настройки.h"
#include "product1.h"
#include "MyForm1.h"
#include <msclr\marshal_cppstd.h>
#include "string.h"
#include <cstring>
#include "usersfood.h"
#include "regex"
#include <string>
#include "iostream"
#include "stdlib.h"
namespace типакурсач {
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace msclr::interop;
	using namespace std;
	public ref class personal_page1 : public System::Windows::Forms::Form{
	public:
		personal_page1(void){
			InitializeComponent();
		}
		static int Ukod;
		int Ufl;
		static String^ Ulogin;
		static int Ukkal;
	public:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox36;

	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::Label^ label13;
	protected:
		~personal_page1(){
			if (components){	
				delete components;
				delete Ulogin;
			}
		}	
		usersfood^ user;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label9;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(personal_page1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(490, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"съедено калорий";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label2->Location = System::Drawing::Point(933, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"всего калорий";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label3->Location = System::Drawing::Point(1013, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 29);
			this->label3->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Yellow;
			this->label7->Font = (gcnew System::Drawing::Font(L"Rage Italic", 10.125F));
			this->label7->Location = System::Drawing::Point(169, 520);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 34);
			this->label7->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button2->Location = System::Drawing::Point(790, 556);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(388, 54);
			this->button2->TabIndex = 10;
			this->button2->Text = L"добавить продукты";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &personal_page1::to_product);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Yellow;
			this->label8->Font = (gcnew System::Drawing::Font(L"Rage Italic", 10.125F));
			this->label8->Location = System::Drawing::Point(169, 520);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 34);
			this->label8->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button1->Location = System::Drawing::Point(788, 496);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(390, 54);
			this->button1->TabIndex = 9;
			this->button1->Text = L"личная информация";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &personal_page1::to_nastr);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button3->Location = System::Drawing::Point(130, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(320, 53);
			this->button3->TabIndex = 12;
			this->button3->Text = L"завтрак";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &personal_page1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button4->Location = System::Drawing::Point(130, 341);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(320, 50);
			this->button4->TabIndex = 13;
			this->button4->Text = L"обед";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &personal_page1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button5->Location = System::Drawing::Point(130, 437);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(320, 53);
			this->button5->TabIndex = 14;
			this->button5->Text = L"ужин";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &personal_page1::button5_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button8->Location = System::Drawing::Point(1028, 629);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 40);
			this->button8->TabIndex = 18;
			this->button8->Text = L"выход";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &personal_page1::exit);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label5->Location = System::Drawing::Point(530, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 29);
			this->label5->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Rage Italic", 10.125F));
			this->label9->Location = System::Drawing::Point(359, 229);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 34);
			this->label9->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label10->Location = System::Drawing::Point(932, 260);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(217, 29);
			this->label10->TabIndex = 35;
			this->label10->Text = L"нужно пить воду. ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label11->Location = System::Drawing::Point(908, 234);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(279, 29);
			this->label11->TabIndex = 36;
			this->label11->Text = L"не стоит забывать, что";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label12->Location = System::Drawing::Point(933, 287);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(247, 29);
			this->label12->TabIndex = 37;
			this->label12->Text = L"В воде нет калорий,";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label13->Location = System::Drawing::Point(908, 316);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(279, 29);
			this->label13->TabIndex = 38;
			this->label13->Text = L"так что не волнуйтесь)";
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox15->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.InitialImage")));
			this->pictureBox15->Location = System::Drawing::Point(1564, -1);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(304, 282);
			this->pictureBox15->TabIndex = 41;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->WaitOnLoad = true;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox18->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.InitialImage")));
			this->pictureBox18->Location = System::Drawing::Point(1564, 839);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(304, 282);
			this->pictureBox18->TabIndex = 50;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->WaitOnLoad = true;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox21->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.InitialImage")));
			this->pictureBox21->Location = System::Drawing::Point(1564, 276);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(304, 282);
			this->pictureBox21->TabIndex = 44;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->WaitOnLoad = true;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox24->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.InitialImage")));
			this->pictureBox24->Location = System::Drawing::Point(1565, 558);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(304, 282);
			this->pictureBox24->TabIndex = 47;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->WaitOnLoad = true;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.BackgroundImage")));
			this->pictureBox33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox33->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.InitialImage")));
			this->pictureBox33->Location = System::Drawing::Point(1563, 1402);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(304, 282);
			this->pictureBox33->TabIndex = 62;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->WaitOnLoad = true;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.BackgroundImage")));
			this->pictureBox36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox36->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.InitialImage")));
			this->pictureBox36->Location = System::Drawing::Point(1564, 1121);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(304, 282);
			this->pictureBox36->TabIndex = 59;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->WaitOnLoad = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label4->Location = System::Drawing::Point(984, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 29);
			this->label4->TabIndex = 69;
			// 
			// personal_page1
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Window;
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1217, 1559);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox36);
			this->Name = L"personal_page1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Дневник";
			this->Load += gcnew System::EventHandler(this, &personal_page1::personal_page1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void to_eat(int fl) {
			usersfood^ us = gcnew usersfood();
			us->Show();
			Ufl = fl;
			static int k;
			int k1=0;
			int fl_check;
			int kkal2 = 0;
			if (user) user->Close();
			user = gcnew usersfood();
			this->AddOwnedForm(user);
			this->user->Ufl = Ufl;
			String^ kalorise, ^ login_check, ^ product;
			int kay, kkal;
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=kkal.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "SELECT * FROM [Таблица1]";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
			while (dbReader->Read()) {
				kay = (int)dbReader["Код"];
				if (kay == Ukod) {
					kalorise = (String^)dbReader["калория"];
					std::string kkal1 = msclr::interop::marshal_as<std::string>(kalorise);
					int al = kkal1.length();
					kkal2 = hmmm(kkal1);
					break;
				}
			}
			dbReader->Close();
			dbConnection->Close();
			int a;
			int z = 1;
			if (kalorise != "") {
				connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=user_food.mdb";
				dbConnection = gcnew OleDbConnection(connectionString);
				dbConnection->Open();
				query = "SELECT * FROM [Таблица1]";
				dbCommand = gcnew OleDbCommand(query, dbConnection);
				dbReader = dbCommand->ExecuteReader();
				while (dbReader->Read()) {
					login_check = (String^)dbReader["login"];
					if (login_check == Ulogin) {
						product = (String^)dbReader["product"];
						kkal = (int)dbReader["kkal"];
						int id = (int)dbReader["id"];
						k = kkal;
						z = 0;
						a += k;
					}
				}
				dbReader->Close();
				dbConnection->Close();
				label5->Text = a.ToString();
			}
		}
private: System::Void exit(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void to_nastr(System::Object^ sender, System::EventArgs^ e) {
	настройки^ pers = gcnew настройки();
	pers->Show();
}
	   template<typename T>
	   int hmmm(T a) {
		   int kkal2;
		   int al = a.length();
		   int k = 1;
		   for (int i = 0; i < al - 1; i++) 	k *= 10;
		   for (int i = 0; a[i] != 0; i++) {
			   kkal2 += (a[i] - '0') * k;
			   k /= 10;
		   }
		   return kkal2;
	   }
	private: System::Void personal_page1_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ kalorise;
		int kay;
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=kkal.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "SELECT * FROM [Таблица1]";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
		while (dbReader->Read()) {
			kay = (int)dbReader["Код"];
			if (kay == Ukod) {
				kalorise = (String^)dbReader["калория"];
				label4->Text = kalorise;
				break;
			}
		}
		dbReader->Close();
		dbConnection->Close();
	}
private: System::Void to_product(System::Object^ sender, System::EventArgs^ e) {
	product^ p = gcnew product();
	p->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int fl = 1;
	to_eat(fl);
 }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int fl = 2;
	to_eat(fl);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int fl=3;
	to_eat(fl);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	usersfood^ us = gcnew usersfood();
	us->Show();
	int fl = 4;
	Ufl = fl;
	if (user) user->Close();
	user = gcnew usersfood();
	this->AddOwnedForm(user);
	this->user->Ufl = Ufl;
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ pers = gcnew MyForm1();
	pers->Show();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
