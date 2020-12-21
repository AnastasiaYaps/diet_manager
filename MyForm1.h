#pragma once

namespace типакурсач {
	using namespace System::Data::OleDb;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	protected:
		String^ product1,^kkal,^product_check;
	public:
		MyForm1(void){
			product1 = kkal = product_check="";
			InitializeComponent();
		}

	protected:
		~MyForm1(){
			if (components){
				delete components;
				delete kkal;
				delete product1;
				delete product_check;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button1->Location = System::Drawing::Point(354, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 54);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->textBox2->Location = System::Drawing::Point(676, 184);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(165, 35);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->textBox1->Location = System::Drawing::Point(91, 184);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(501, 35);
			this->textBox1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->label4->Location = System::Drawing::Point(18, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(964, 29);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Введите название физической нагрузки и количествво сжигаемых калорий в час";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(994, 427);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		product1 = textBox1->Text;
		kkal = textBox2->Text;
		int fl = 0;
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=exersize.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "SELECT * FROM [Таблица1]";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
		int n;
		if (product1 == "" || kkal == "") {
			fl = 1;
			MessageBox::Show("Не все поля заполнены, проверьте форму!", "Ошибка!", MessageBoxButtons::OK);
			dbReader->Close();
			dbConnection->Close();
		}
		else {
			while (dbReader->Read()) {
				if ((String^)dbReader["упражнения"] != "")  product_check = (String^)dbReader["упражнения"];
				if (DBNull::Value != dbReader["упражнения"])product_check = (String^)dbReader["упражнения"];
				if (product_check == product1) {
					MessageBox::Show("Упражнение6" + product1 + " уже есть в базе!", "", MessageBoxButtons::OK);
					fl = 1;
					dbReader->Close();
					dbConnection->Close();
					break;
				}
			}
		}
		if (fl == 0) {
			n++;
			String^ query1 = "INSERT INTO [Таблица1] (упражнения,kkal )VALUES ('" + product1 + "' , '" + kkal + "')";
			OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
			dbCommand1->ExecuteNonQuery();
			MessageBox::Show("Новое упражнение " + product1 + " добавлено!", "", MessageBoxButtons::OK);
			dbReader->Close();
			dbConnection->Close();
			this->Close();
		}
	}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
