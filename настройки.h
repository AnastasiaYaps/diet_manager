#pragma once
#include "change_pass.h"
#include "change_login.h"
namespace типакурсач {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	public ref class настройки : public System::Windows::Forms::Form{
	public:
		настройки(void){
			InitializeComponent();
			Ulogin = "";
			age_check = high_check = weight_check=end_weight_check=0;
			name_check = name2_check = "";
		}
		String^ Ulogin; 
		static int Ukod;
	protected:
		String^ name_check, ^ name2_check;
		int age_check, high_check, weight_check,end_weight_check;

	public:






	protected:
		~настройки()	{
			if (components){
				delete components;
				delete name_check;
				delete name2_check;
			}
		}
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label7;
	private: System::ComponentModel::IContainer^ components;
	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(настройки::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(621, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 45);
			this->button2->TabIndex = 2;
			this->button2->Text = L"изменить пароль";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &настройки::to_ch_pass);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(621, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"изменить логин";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &настройки::to_ch_login);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(664, 198);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(207, 45);
			this->button4->TabIndex = 4;
			this->button4->Text = L"выход";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &настройки::exit);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(42, 493);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 29);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Целевой вес";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(42, 420);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Вес";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(42, 339);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 29);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Рост";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(42, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 29);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Возраст";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(42, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 29);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Фамилия";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(48, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 29);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Имя";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(239, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 29);
			this->label9->TabIndex = 31;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(239, 170);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 29);
			this->label10->TabIndex = 32;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(239, 255);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 29);
			this->label11->TabIndex = 33;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(239, 505);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 29);
			this->label12->TabIndex = 36;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(239, 420);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(92, 29);
			this->label13->TabIndex = 35;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(239, 339);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(92, 29);
			this->label14->TabIndex = 34;
			this->label14->Text = L"label14";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(239, 493);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 29);
			this->label7->TabIndex = 37;
			this->label7->Text = L"label7";
			// 
			// настройки
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(908, 704);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"настройки";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"персональная страница";
			this->Load += gcnew System::EventHandler(this, &настройки::настройки_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void to_ch_pass(System::Object^ sender, System::EventArgs^ e) {
		change_pass^ ch= gcnew change_pass();// создаем новый экземпляр
		ch->Show();//откываертя регистрация
	}
	private: System::Void exit(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void to_ch_login(System::Object^ sender, System::EventArgs^ e) {
	change_login^ ch = gcnew change_login();// создаем новый экземпляр
	ch->Show();
}
private: System::Void настройки_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=information.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();//открываем соединение
	String^ query = "SELECT * FROM [information]";// запрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);//команда
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();// считываем данныем 
	while (dbReader->Read()) {
		int kod = (int)dbReader["код"];
		if (kod == Ukod) {
			name_check = (String^)dbReader["name"];
			name2_check = (String^)dbReader["name2"];
			age_check = (int)dbReader["age"];
			high_check = (int)dbReader["high"];
			weight_check = (int)dbReader["weight"];
			end_weight_check = (int)dbReader["end_weight"];
			break;
		}}
	label9->Text = name_check;
	label10->Text = name2_check;
	label11->Text = age_check.ToString();
	label14->Text = high_check.ToString();
	label13->Text = weight_check.ToString();
	label7->Text = end_weight_check.ToString();
	dbReader->Close();
	dbConnection->Close();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
