#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// Додаємо числа від 1 до 5 у випадаючий список для прикладу
			for (int i = 1; i <= 33; i++) comboBox1->Items->Add(i.ToString());
		}

	protected:
		~MyForm()
		{
			if (components) delete components;
		}

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();

			// comboBox1
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(50, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);

			// textBox1
			this->textBox1->Location = System::Drawing::Point(200, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);

			// textBox2
			this->textBox2->Location = System::Drawing::Point(200, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);

			// button1 (вивести)
			this->button1->Location = System::Drawing::Point(50, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 50);
			this->button1->Text = L"вивести";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);

			// MyForm
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 300);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"Завдання 2 (Варіант 10)";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem == nullptr) {
			MessageBox::Show("Оберіть номер літери!");
			return;
		}

		int number = Convert::ToInt32(comboBox1->SelectedItem);
		String^ letter = "";

		// Використання оператора switch (Варіант 10)
		switch (number) {
		case 1: letter = "А"; break;
		case 2: letter = "Б"; break;
		case 3: letter = "В"; break;
		case 4: letter = "Г"; break;
		case 5: letter = "Ґ"; break;
		case 6: letter = "Д"; break;
		case 7: letter = "Е"; break;
		case 8: letter = "Є"; break;
		case 9: letter = "Ж"; break;
		case 10: letter = "З"; break;
			// Можна додати всі 33 літери
		default: letter = "Інша"; break;
		}

		// Виведення результату в обидва поля, як на макеті
		textBox1->Text = "Номер: " + number.ToString();
		textBox2->Text = "Літера: " + letter;
	}
	};
}