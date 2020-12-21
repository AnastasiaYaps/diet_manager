#pragma once
#include "regex"
#include "string"
#include "inf_for_registr.h"
#include  "настройки.h"
#include "string.h"
#include "personal_page1.h"
#include "usersfood.h"
namespace типакурсач {
	using namespace System::Data::OleDb;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	public ref class Registration :public System::Windows::Forms::Form{
	public:
		Registration(void){
			login = "";
			password = "";
			Ulogin = "";
			Ukod = 0;
			Ulogin = "";
			login_check = "";
			InitializeComponent();
		}
	protected:
		~Registration(){
			if (components){
				delete components;
				delete login;
				delete password;
				delete Ulogin;
				delete login_check;
			}	}
	protected:
		String^ login,^password;
		int Ukod;
		String^ login_check;
		static String^ Ulogin;
	private:
		настройки^ nastr;
		personal_page1^ persona;
		usersfood^ user;
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label2->Location = System::Drawing::Point(10, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 31);
			this->label2->TabIndex = 18;
			this->label2->Text = L"login";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(10, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 31);
			this->label1->TabIndex = 17;
			this->label1->Text = L"password";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->textBox2->Location = System::Drawing::Point(158, 150);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(390, 38);
			this->textBox2->TabIndex = 23;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->textBox1->Location = System::Drawing::Point(158, 84);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(390, 38);
			this->textBox1->TabIndex = 22;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button3->Location = System::Drawing::Point(350, 386);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(234, 37);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Registration::exit);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button2->Location = System::Drawing::Point(188, 237);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 40);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Регистрация";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Registration::Registr);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label3->Location = System::Drawing::Point(12, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 29);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Введите данные";
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(605, 436);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Poor Richard", 10.125F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Регистрация";
			this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
private: System::Void exit(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Registr(System::Object^ sender, System::EventArgs^ e) {
	login = textBox1->Text;
	password = textBox2->Text;
	int kay;
	int fl = 0;
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=logpass.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "SELECT * FROM [Таблица1]";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
		if (login == "" || password == "") {
			fl = 1;
			MessageBox::Show("Не все поля заполнены, проверьте форму!", "Ошибка!", MessageBoxButtons::OK);
			dbReader->Close();
			dbConnection->Close();
		}
		else  {
			while (dbReader->Read()) {
				if ((String^)dbReader["log"] != "")  login_check = (String^)dbReader["log"];
				if (DBNull::Value != dbReader["log"])login_check = (String^)dbReader["log"];
				if (login_check == login) {
					MessageBox::Show("Пользователь " + login + " уже зарегистрирован!", "", MessageBoxButtons::OK);
					fl = 1;
					dbReader->Close();
					dbConnection->Close();
					break;
				}}}
		if (fl == 0) {
			String^ query1 = "INSERT INTO [Таблица1] (log,pass )VALUES ('" + login + "' , '" + password + "')";
			OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
			dbCommand1->ExecuteNonQuery();
			MessageBox::Show("Новый пользователь " + login + " зарегистрирован!", "", MessageBoxButtons::OK);
			dbReader->Close();
			dbConnection->Close();
			connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=logpass.mdb";
			dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			query = "SELECT * FROM [Таблица1]";
			dbCommand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbReader1 = dbCommand->ExecuteReader();
			while (dbReader1->Read()) {
				if ((String^)dbReader1["log"] != "")  login_check = (String^)dbReader1["log"];

				if (DBNull::Value != dbReader1["log"]) {
					if (login_check == login) {
						int kod = (int)dbReader1["код"];
						Ukod = kod;
						Ulogin = login;
						dbReader1->Close();
						dbConnection->Close();
						if (nastr) nastr->Close();
						nastr = gcnew настройки();
						this->AddOwnedForm(nastr);
						this->nastr->Ukod = Ukod;
						if (persona) persona->Close();
						persona = gcnew personal_page1();
						this->AddOwnedForm(persona);
						this->persona->Ukod = Ukod;
						this->persona->Ulogin = Ulogin;
						if (user) user->Close();
						user = gcnew usersfood();
						this->AddOwnedForm(user);
						this->user->Ulogin = Ulogin;
						break;
				}	}}
			inf_for_registr^ pers = gcnew inf_for_registr();
			pers->Show();
			Registration::Hide();
		}
}

private: System::Void Registration_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
