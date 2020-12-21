#pragma once
#include "Registration.h"
#include"Autoriz.h"
namespace типакурсач {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void) {
			InitializeComponent();
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;
	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Location = System::Drawing::Point(674, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 31);
			this->label1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button2->Location = System::Drawing::Point(12, 123);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Авторизация";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button3->Location = System::Drawing::Point(348, 294);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 39);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic));
			this->button1->Location = System::Drawing::Point(12, 53);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 39);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Регистрация";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// MyForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Window;
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(567, 357);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Poor Richard", 10.125F));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вход";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e){
		  Autoriz^ autoriz = gcnew Autoriz();// создаем новый экземпляр
		  autoriz->Show();//откываертя регистрация
		  MyForm::Hide();// закрываем 
	}
	public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	Registration^ registr = gcnew Registration();// создаем новый экземпляр
	registr->Show();//откываертя регистрация
	MyForm::Hide();// закрываем 
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
    };
}

