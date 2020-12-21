#pragma once
#include "personal_page1.h"
#include <string.h>
#include <msclr\marshal_cppstd.h>
#include <string>
#include "iostream"
#include "stdlib.h"
#include "настройки.h"
#include <cstring>
namespace типакурсач {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace msclr::interop;
	using namespace std;
	public ref class inf_for_registr : public System::Windows::Forms::Form{
	public:
		inf_for_registr(void){
			age = "";
			name = "";
			name2 = "";
			weight = "";
			end_weight = "";
			end_weight = "";
			age2=high2=weight2=end_weight2;
			InitializeComponent();
		}
	protected:
		String^ name;
		String^ name2;
		String^ age , ^ high;
		String^ weight, ^ end_weight;
		int age2, high2, weight2, end_weight2;
		~inf_for_registr(){
			if (components) { 
				delete components;
				delete name;
				delete name2;
				 }
		}
		personal_page1^ persona;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button4;
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(inf_for_registr::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label1->Location = System::Drawing::Point(180, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label2->Location = System::Drawing::Point(180, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Фамилия";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->textBox1->Location = System::Drawing::Point(185, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(476, 35);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->textBox2->Location = System::Drawing::Point(185, 147);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(476, 35);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->textBox3->Location = System::Drawing::Point(185, 229);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(476, 35);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label3->Location = System::Drawing::Point(180, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Возраст";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->textBox4->Location = System::Drawing::Point(185, 388);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(476, 35);
			this->textBox4->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label4->Location = System::Drawing::Point(180, 356);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 29);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Вес";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->textBox5->Location = System::Drawing::Point(185, 309);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(476, 35);
			this->textBox5->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label5->Location = System::Drawing::Point(180, 277);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 29);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Рост";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->textBox6->Location = System::Drawing::Point(185, 474);
			this->textBox6->Name = L"textBox6";
			this->textBox6->PasswordChar = '*';
			this->textBox6->Size = System::Drawing::Size(476, 35);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label6->Location = System::Drawing::Point(180, 442);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 29);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Целевой вес";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Beige;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button1->Location = System::Drawing::Point(171, 577);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 51);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Женский";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &inf_for_registr::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Beige;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button2->Location = System::Drawing::Point(448, 577);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 51);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Мужской";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &inf_for_registr::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label7->Location = System::Drawing::Point(180, 667);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 29);
			this->label7->TabIndex = 14;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Beige;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button3->Location = System::Drawing::Point(448, 699);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(213, 47);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Вход";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &inf_for_registr::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label8->Location = System::Drawing::Point(180, 535);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 29);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Пол";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Beige;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button4->Location = System::Drawing::Point(171, 699);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(213, 47);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &inf_for_registr::button4_Click_1);
			// 
			// inf_for_registr
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(859, 969);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"inf_for_registr";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"персональная информация";
			this->Load += gcnew System::EventHandler(this, &inf_for_registr::inf_for_registr_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		template < typename T >
		int hmmm(T a) {
			int age2 = 0;
			int al = a.length();
			int k = 1;
			for (int i = 0; i < al - 1; i++) {
				k *= 10;
			}
			for (int i = 0; a[i] != 0; i++) {
				age2 += (a[i] - '0') * k;
				k /= 10;
			}
			return age2;
		}
		void func(int kal) {
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=kkal.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "SELECT * FROM [Таблица1]";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
			String^ query1 = "INSERT INTO [Таблица1] (калория)VALUES ('" + kal + "')";
			OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
			dbCommand1->ExecuteNonQuery();
			dbReader->Close();
			dbConnection->Close();
		}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = textBox1->Text;
	String^ name2 = textBox2->Text;
	String^ age = textBox3->Text, ^ high = textBox5->Text;
	String^ weight = textBox4->Text, ^ end_weight = textBox6->Text;
	std::string age1 = msclr::interop::marshal_as<std::string>(age);
	std::string high1 = msclr::interop::marshal_as<std::string>(high);
	std::string weight1 = msclr::interop::marshal_as<std::string>(weight);
	std::string end_weight1 = msclr::interop::marshal_as<std::string>(end_weight);
	bool est = false;
	int i = 0;
	if (((age1[i] >= 'A') && (age1[i] <= 'Z'))
		|| ((age1[i] >= 'a') && (age1[i] <= 'z')|| age1=="") || ((high1[i] >= 'A') && (high1[i] <= 'Z'))
		|| ((high[i] >= 'a') && (high1[i] <= 'z')|| high1=="") || ((weight1[i] >= 'A') && (weight1[i] <= 'Z'))
		|| ((weight1[i] >= 'a') && (weight1[i] <= 'z')|| weight1=="")|| ((end_weight1[i] >= 'A') && (end_weight1[i] <= 'Z'))
		|| ((end_weight1[i] >= 'a') && (end_weight1[i] <= 'z') || end_weight1 == ""))
		 {
		est = true;
	}
	if (est == false) {
		age2 = hmmm(age1);
		high2 = hmmm(high1);
		weight2 = hmmm(weight1);
		end_weight2 = hmmm(end_weight1);
	}
	if (age2 > 10 && high2 >= 130 && weight2 > 29 && end_weight2 > 29) {
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=information.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "SELECT * FROM [information]";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
		int n;
		if (name == "" || name2 == "" || est == true) {
			MessageBox::Show("Не все поля заполнены или заполнены некорректно, проверьте форму!", "Ошибка!", MessageBoxButtons::OK);
			dbReader->Close();
			dbConnection->Close();
		}
		else {
			while (dbReader->Read()) {
				n = (int)dbReader["Код"];
				if (DBNull::Value != dbReader["name"]) {
					break;
				}
			}
			String^ query1 = "INSERT INTO [information] (name,name2, age,high,weight,end_weight )VALUES ('" + name + "' , '" + name2 + "', '" + age2 + "', '" + high2 + "', '" + weight2 + "', '" + end_weight2 + "')";
			OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
			dbCommand1->ExecuteNonQuery();
			dbReader->Close();
			dbConnection->Close();
			personal_page1^ registr = gcnew personal_page1();// создаем новый экземпляр
			registr->Show();//откываертя регистрация
			inf_for_registr::Hide();// закрываем
		}
	}
	else
		MessageBox::Show("Ваши данные неправильны! Проверьте их!", "Ошибка!", MessageBoxButtons::OK);
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
} 
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		name = textBox1->Text;
		name2 = textBox2->Text;
		age = textBox3->Text;
		high = textBox5->Text;
		weight = textBox4->Text;
		end_weight = textBox6->Text;
		std::string age1 = msclr::interop::marshal_as<std::string>(age);
		std::string high1 = msclr::interop::marshal_as<std::string>(high);
		std::string weight1 = msclr::interop::marshal_as<std::string>(weight);
		std::string end_weight1 = msclr::interop::marshal_as<std::string>(end_weight);
		
		bool fl = true;
		age2 = hmmm(age1);
		high2 = hmmm(high1);
		weight2 = hmmm(weight1);
		end_weight2 = hmmm(end_weight1);
		int kal = 9.99 * weight2 + 6.25 * high2 - 4.92 * age2 - 181;
			if (fl == true) func(kal);
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		bool fl = true;
		name = textBox1->Text;
		name2 = textBox2->Text;
		age = textBox3->Text;
		high = textBox5->Text;
		weight = textBox4->Text;
		end_weight = textBox6->Text;
		std::string age1 = msclr::interop::marshal_as<std::string>(age);
		std::string high1 = msclr::interop::marshal_as<std::string>(high);
		std::string weight1 = msclr::interop::marshal_as<std::string>(weight);
		std::string end_weight1 = msclr::interop::marshal_as<std::string>(end_weight);
		int age2, high2, weight2, end_weight2;
		age2 = hmmm(age1);
		high2 = hmmm(high1);
		weight2 = hmmm(weight1);
		end_weight2 = hmmm(end_weight1);
		int kal = 9.99 * weight2 + 6.25 * high2 - 4.92 * age2 + 5;
		if (fl == true) func(kal);
	}
private: System::Void inf_for_registr_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

