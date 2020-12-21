#pragma once
#include <msclr\marshal_cppstd.h>
#include "regex"
#include <string>
#include "iostream"
#include "stdlib.h"
namespace типакурсач {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Data::OleDb;
	public ref class usersfood : public System::Windows::Forms::Form{
	public:
		usersfood(void)	{
			food = kkal = food_check = "";
			InitializeComponent();
		}
		static int Ufl;
		static int^ Ukod;
		static String^ Ulogin;
	protected:
		String^ food;
		String^ kkal;
		String^ gram;
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
		   String^ food_check;
	protected:
		~usersfood()	{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private:
		System::ComponentModel::Container ^components;
	
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)	{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(usersfood::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(216, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(313, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Поиск продуктов питания";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(131, 278);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(221, 53);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Искать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &usersfood::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(36, 199);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(408, 35);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(515, 399);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 47);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(404, 278);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(213, 53);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Добавить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &usersfood::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(478, 199);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 35);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(473, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Граммы";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(31, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Продукт";
			// 
			// usersfood
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(739, 479);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"usersfood";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &usersfood::usersfood_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = false;
	String^ food;
	String^ kkal;
	String^ food_check;
	food = textBox1->Text;
	int fl1 = 0;
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=product.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();//открываем соединение
	String^ query = "SELECT * FROM [Таблица1]";// запрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);//команда
	OleDbDataReader^ dbReader1 = dbCommand->ExecuteReader();// считываем данные
	while (dbReader1->Read()) {
		food_check = (String^)dbReader1["Продукт"];
		if (DBNull::Value != dbReader1["Продукт"]) {
			if (food_check == food) {
				MessageBox::Show(" " + food + " есть в базе!", "", MessageBoxButtons::OK);
				kkal = (String^)dbReader1["калорийность"];
				MessageBox::Show("Калорийность данного продукта = " + kkal + "", "", MessageBoxButtons::OK);
				check = true;
				fl1 = 1;
				String^ kod = kkal;
				dbReader1->Close();// закрываем соединение
				dbConnection->Close();
				break;
			}}}
	if (check == false) {
		MessageBox::Show(this, "Извините, данного продукта пока нет в базе данных, если вы точно знаете калорийность, то можете его добавить сами", "Cообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		dbReader1->Close();// закрываем соединение
		dbConnection->Close();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = false;
	String^ food;
	String^ gram;
	String^ kkal;
	String^ food_check;
	String^ login = Ulogin;
	
	int fl = Ufl, a = false;
	food = textBox1->Text;
	gram = textBox2->Text;
	int fl1 = 0,kkal2,gram2,kkal3;
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=product.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();//открываем соединение
	String^ query = "SELECT * FROM [Таблица1]";// запрос
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);//команда
	OleDbDataReader^ dbReader1 = dbCommand->ExecuteReader();// считываем данные
	while (dbReader1->Read()) {
		food_check = (String^)dbReader1["Продукт"];
		if (DBNull::Value != dbReader1["Продукт"]) {
			if (food_check == food) {
				check = true;
				MessageBox::Show(" " + food + " есть в базе!", "", MessageBoxButtons::OK);
				kkal = (String^)dbReader1["калорийность"];
				std::string kkal1 = msclr::interop::marshal_as<std::string>(kkal);
				int h = kkal1.length();
				int k = 1;
				for (int i = 0; i < h - 1; i++) {
					k *= 10;
				}
				for (int i = 0; kkal1[i] != 0; i++) {
					kkal2 += (kkal1[i] - '0') * k;
					k /= 10;
				}
				std::string gram1 = msclr::interop::marshal_as<std::string>(gram);
				h = gram1.length();
				k = 1;
				for (int i = 0; i < h - 1; i++) {
					k *= 10;
				}
				for (int i = 0; gram1[i] != 0; i++) {
					gram2 += (gram1[i] - '0') * k;
					k /= 10;
				}
				kkal3 = gram2 * kkal2 / 100;
				MessageBox::Show("Калорийность данного продукта = " + kkal + "", "", MessageBoxButtons::OK);
				dbReader1->Close();
				dbConnection->Close();
				a = true;
				break;
		}	}}
	if (a == true) {
		connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=user_food.mdb";
		dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		query = "SELECT * FROM [Таблица1]";
		dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
		int n;
		query = "INSERT INTO [Таблица1] (id,product,kkal,login )VALUES ('" + fl + "' , '" + food + "','"+ kkal3 +"','"+ login +"')";
		dbCommand = gcnew OleDbCommand(query, dbConnection);
		dbCommand->ExecuteNonQuery();
		MessageBox::Show("продукт" + food + "", "добавлен в сегодняшний рацион", MessageBoxButtons::OK);
		dbReader->Close();
		dbConnection->Close();
		
	}
	if (check == false) {
		MessageBox::Show(this, "Извините, данного продукта пока нет в базе данных, если вы точно знаете калорийность, то можете его добавить сами", "Cообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		dbReader1->Close();// закрываем соединение
		dbConnection->Close();
	}
}
private: System::Void usersfood_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
