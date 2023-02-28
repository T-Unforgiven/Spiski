#pragma once
#include "State.h"
#include "Lists.h"


namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
			
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbFIO;
	protected:

	private: System::Windows::Forms::Button^ bthOutputList;

	private: System::Windows::Forms::ListBox^ lbStudents;
	private: System::Windows::Forms::ListBox^ lbGrades;
	private: System::Windows::Forms::Label^ lblFIO;
	private: System::Windows::Forms::Label^ lblGrades;
	private: System::Windows::Forms::Label^ lblNumber;
	private: System::Windows::Forms::TextBox^ tbGrades;
	private: System::Windows::Forms::TextBox^ tbNumber;
	private: System::Windows::Forms::Button^ btnConfirm;
	private: System::Windows::Forms::Button^ btnAppend;
	private: System::Windows::Forms::Label^ lblEndOper;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnSort;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnChange;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbFIO = (gcnew System::Windows::Forms::TextBox());
			this->bthOutputList = (gcnew System::Windows::Forms::Button());
			this->lbStudents = (gcnew System::Windows::Forms::ListBox());
			this->lbGrades = (gcnew System::Windows::Forms::ListBox());
			this->lblFIO = (gcnew System::Windows::Forms::Label());
			this->lblGrades = (gcnew System::Windows::Forms::Label());
			this->lblNumber = (gcnew System::Windows::Forms::Label());
			this->tbGrades = (gcnew System::Windows::Forms::TextBox());
			this->tbNumber = (gcnew System::Windows::Forms::TextBox());
			this->btnConfirm = (gcnew System::Windows::Forms::Button());
			this->btnAppend = (gcnew System::Windows::Forms::Button());
			this->lblEndOper = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnSort = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnChange = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbFIO
			// 
			this->tbFIO->BackColor = System::Drawing::Color::Silver;
			this->tbFIO->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbFIO->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbFIO->Location = System::Drawing::Point(121, 34);
			this->tbFIO->Name = L"tbFIO";
			this->tbFIO->Size = System::Drawing::Size(100, 24);
			this->tbFIO->TabIndex = 0;
			// 
			// bthOutputList
			// 
			this->bthOutputList->BackColor = System::Drawing::Color::Silver;
			this->bthOutputList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bthOutputList->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bthOutputList->Location = System::Drawing::Point(317, 204);
			this->bthOutputList->Name = L"bthOutputList";
			this->bthOutputList->Size = System::Drawing::Size(247, 23);
			this->bthOutputList->TabIndex = 1;
			this->bthOutputList->Text = L"Вывести список";
			this->bthOutputList->UseVisualStyleBackColor = false;
			this->bthOutputList->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lbStudents
			// 
			this->lbStudents->BackColor = System::Drawing::Color::Silver;
			this->lbStudents->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbStudents->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbStudents->ForeColor = System::Drawing::Color::Black;
			this->lbStudents->FormattingEnabled = true;
			this->lbStudents->ItemHeight = 16;
			this->lbStudents->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Мытищи", L"Павловск", L"Ухта" });
			this->lbStudents->Location = System::Drawing::Point(15, 204);
			this->lbStudents->Name = L"lbStudents";
			this->lbStudents->Size = System::Drawing::Size(138, 226);
			this->lbStudents->TabIndex = 2;
			this->lbStudents->Tag = L"";
			this->lbStudents->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// lbGrades
			// 
			this->lbGrades->BackColor = System::Drawing::Color::Silver;
			this->lbGrades->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbGrades->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbGrades->FormattingEnabled = true;
			this->lbGrades->ItemHeight = 16;
			this->lbGrades->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"кк" });
			this->lbGrades->Location = System::Drawing::Point(179, 204);
			this->lbGrades->Name = L"lbGrades";
			this->lbGrades->Size = System::Drawing::Size(132, 226);
			this->lbGrades->TabIndex = 2;
			this->lbGrades->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// lblFIO
			// 
			this->lblFIO->AutoSize = true;
			this->lblFIO->Font = (gcnew System::Drawing::Font(L"GOST type B", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblFIO->Location = System::Drawing::Point(132, 9);
			this->lblFIO->Name = L"lblFIO";
			this->lblFIO->Size = System::Drawing::Size(37, 15);
			this->lblFIO->TabIndex = 3;
			this->lblFIO->Text = L"label1";
			// 
			// lblGrades
			// 
			this->lblGrades->AutoSize = true;
			this->lblGrades->Font = (gcnew System::Drawing::Font(L"GOST type B", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGrades->Location = System::Drawing::Point(132, 76);
			this->lblGrades->Name = L"lblGrades";
			this->lblGrades->Size = System::Drawing::Size(39, 15);
			this->lblGrades->TabIndex = 4;
			this->lblGrades->Text = L"label2";
			// 
			// lblNumber
			// 
			this->lblNumber->AutoSize = true;
			this->lblNumber->Font = (gcnew System::Drawing::Font(L"GOST type B", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblNumber->Location = System::Drawing::Point(132, 143);
			this->lblNumber->Name = L"lblNumber";
			this->lblNumber->Size = System::Drawing::Size(39, 15);
			this->lblNumber->TabIndex = 5;
			this->lblNumber->Text = L"label3";
			// 
			// tbGrades
			// 
			this->tbGrades->BackColor = System::Drawing::Color::Silver;
			this->tbGrades->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbGrades->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbGrades->Location = System::Drawing::Point(121, 106);
			this->tbGrades->Name = L"tbGrades";
			this->tbGrades->Size = System::Drawing::Size(100, 24);
			this->tbGrades->TabIndex = 6;
			// 
			// tbNumber
			// 
			this->tbNumber->BackColor = System::Drawing::Color::Silver;
			this->tbNumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNumber->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbNumber->Location = System::Drawing::Point(121, 176);
			this->tbNumber->Name = L"tbNumber";
			this->tbNumber->Size = System::Drawing::Size(100, 24);
			this->tbNumber->TabIndex = 7;
			// 
			// btnConfirm
			// 
			this->btnConfirm->BackColor = System::Drawing::Color::Silver;
			this->btnConfirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConfirm->Font = (gcnew System::Drawing::Font(L"GOST type B", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnConfirm->Location = System::Drawing::Point(279, 92);
			this->btnConfirm->Name = L"btnConfirm";
			this->btnConfirm->Size = System::Drawing::Size(75, 23);
			this->btnConfirm->TabIndex = 8;
			this->btnConfirm->Text = L"Готово";
			this->btnConfirm->UseVisualStyleBackColor = false;
			this->btnConfirm->Click += gcnew System::EventHandler(this, &MyForm::btnConfirm_Click);
			// 
			// btnAppend
			// 
			this->btnAppend->BackColor = System::Drawing::Color::Silver;
			this->btnAppend->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAppend->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAppend->Location = System::Drawing::Point(317, 233);
			this->btnAppend->Name = L"btnAppend";
			this->btnAppend->Size = System::Drawing::Size(247, 26);
			this->btnAppend->TabIndex = 9;
			this->btnAppend->Text = L"Добавить элемент в конец ";
			this->btnAppend->UseVisualStyleBackColor = false;
			this->btnAppend->Click += gcnew System::EventHandler(this, &MyForm::btnAppend_Click);
			// 
			// lblEndOper
			// 
			this->lblEndOper->AutoSize = true;
			this->lblEndOper->BackColor = System::Drawing::Color::BurlyWood;
			this->lblEndOper->Font = (gcnew System::Drawing::Font(L"GOST type B", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblEndOper->Location = System::Drawing::Point(395, 95);
			this->lblEndOper->Name = L"lblEndOper";
			this->lblEndOper->Size = System::Drawing::Size(37, 15);
			this->lblEndOper->TabIndex = 10;
			this->lblEndOper->Text = L"label1";
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Silver;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAdd->Location = System::Drawing::Point(317, 265);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(247, 29);
			this->btnAdd->TabIndex = 11;
			this->btnAdd->Text = L"Вставить элемент по номеру";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->BackColor = System::Drawing::Color::Silver;
			this->btnRemove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRemove->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRemove->Location = System::Drawing::Point(317, 294);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(247, 30);
			this->btnRemove->TabIndex = 12;
			this->btnRemove->Text = L"Удалить элемент по номеру";
			this->btnRemove->UseVisualStyleBackColor = false;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::Silver;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSearch->Location = System::Drawing::Point(317, 323);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(247, 23);
			this->btnSearch->TabIndex = 13;
			this->btnSearch->Text = L"Найти студента по ФИО";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// btnSort
			// 
			this->btnSort->BackColor = System::Drawing::Color::Silver;
			this->btnSort->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSort->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSort->Location = System::Drawing::Point(317, 352);
			this->btnSort->Name = L"btnSort";
			this->btnSort->Size = System::Drawing::Size(247, 23);
			this->btnSort->TabIndex = 14;
			this->btnSort->Text = L"Отсортиравать список";
			this->btnSort->UseVisualStyleBackColor = false;
			this->btnSort->Click += gcnew System::EventHandler(this, &MyForm::btnSort_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::Silver;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDelete->Location = System::Drawing::Point(317, 381);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(247, 23);
			this->btnDelete->TabIndex = 15;
			this->btnDelete->Text = L"Удалить список";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// btnChange
			// 
			this->btnChange->BackColor = System::Drawing::Color::Silver;
			this->btnChange->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnChange->Font = (gcnew System::Drawing::Font(L"GOST type B", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnChange->Location = System::Drawing::Point(317, 410);
			this->btnChange->Name = L"btnChange";
			this->btnChange->Size = System::Drawing::Size(247, 23);
			this->btnChange->TabIndex = 16;
			this->btnChange->Text = L"Редактировать элемент";
			this->btnChange->UseVisualStyleBackColor = false;
			this->btnChange->Click += gcnew System::EventHandler(this, &MyForm::btnChange_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->ClientSize = System::Drawing::Size(576, 452);
			this->Controls->Add(this->btnChange);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnSort);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->lblEndOper);
			this->Controls->Add(this->btnAppend);
			this->Controls->Add(this->btnConfirm);
			this->Controls->Add(this->tbNumber);
			this->Controls->Add(this->tbGrades);
			this->Controls->Add(this->lblNumber);
			this->Controls->Add(this->lblGrades);
			this->Controls->Add(this->lblFIO);
			this->Controls->Add(this->lbGrades);
			this->Controls->Add(this->lbStudents);
			this->Controls->Add(this->bthOutputList);
			this->Controls->Add(this->tbFIO);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		list lst = createlist();
		State st = None;
		int xz;
		bool Processing = false;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!Processing) {
			lbStudents->Items->Clear();
			lbGrades->Items->Clear();
			lblEndOper->Text = "";
			listnode* p = lst.head;
			String^ str;
			for (int i = 0; i < lst.len; i++) {
				String^ str1 = "";
				str = Marshal::PtrToStringAnsi((IntPtr)p->value.Name);
				lbStudents->Items->Add(lbStudents->Items->Count.ToString() + " " + str);
				for (int j = 0; j < 3; j++) {
					str1 += System::Convert::ToString(p->value.Marks[j]);
					str1 += " ";
				}
				lbGrades->Items->Add(str1);
				p = p->next;
			}
			deletenode(p);
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	lbStudents->Items->Clear();
	lbGrades->Items->Clear();
	lblFIO->Text = "";
	lblGrades->Text = "";
	lblNumber->Text = "";
	lblEndOper->Text = "";
	tbFIO->Text = "\0";
	tbGrades->Text = "\0";
	tbNumber->Text = "\0";
	}
private: System::Void btnAppend_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Processing) {
		lblFIO->Text = "Введите ФИО";
		lblGrades->Text = "Введите оценки";
		lblNumber->Text = "";
		lblEndOper->Text = "";
		st = Append;
		Processing = true;
	}
}
private: System::Void btnConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
	Processing = false;
	char* s = (char*)(void*)Marshal::StringToHGlobalAnsi(tbFIO->Text);
	Student a;
	strcpy(a.Name, s);
	Marshal::FreeHGlobal((IntPtr)s);
	char delimiters[] = { " ,." };
	char* s1 = (char*)(void*)Marshal::StringToHGlobalAnsi(tbGrades->Text);
	char* token = strtok(s1, delimiters);
	int i = 0;
	while (token != nullptr) {
		if (i == 3)
			break;
		a.Marks[i] = atoi(token);
		i++;
		token = strtok(nullptr, delimiters);
	}
	Marshal::FreeHGlobal((IntPtr)s1);
	int number;
	if(tbNumber->Text != "")
		number = System::Convert::ToInt32(tbNumber->Text);
	switch (st) {
		case Append:
			append(lst, a);
			lblEndOper->Text = "Список пополнен";
			tbFIO->Text = "\0";
			tbGrades->Text = "\0";
			tbNumber->Text = "\0";
			lblFIO->Text = "";
			lblGrades->Text = "";
			lblNumber->Text = "";
			break;
		case Add:
			if (number >= 0 && number < lst.len + 1) {
				appendat(lst, a, number);
				lblEndOper->Text = "Список пополнен";
			}
			else {
				lblEndOper->Text = "Неверный номер";
			}
			tbFIO->Text = "\0";
			tbGrades->Text = "\0";
			tbNumber->Text = "\0";
			lblFIO->Text = "";
			lblGrades->Text = "";
			lblNumber->Text = "";
			break;
		case Remove:
			if (number >= 0 && number < lst.len) {
				removeat(lst, number);
				lblEndOper->Text = "Список сокращен";
			}
			else {
				lblEndOper->Text = "Неверный номер";
			}
			tbFIO->Text = "\0";
			tbGrades->Text = "\0";
			tbNumber->Text = "\0";
			lblFIO->Text = "";
			lblGrades->Text = "";
			lblNumber->Text = "";
			break;
		case Search:
			if (true) {
				int count = 0;
				for (int q = 0; q < lst.len; q++) {
					listnode* d = lst.head;
					if (q == 0) {
						if (strcmp(a.Name, d->value.Name) == 0) {
							String^ buffer = Marshal::PtrToStringAnsi((IntPtr)d->value.Name);
							lblEndOper->Text += buffer + "\n";
							for (int j = 0; j < 3; j++) {
								lblEndOper->Text += System::Convert::ToString(d->value.Marks[j]);
								lblEndOper->Text += " ";
							}
							lblEndOper->Text += "\n";
							count++;
						}
					}
					else {
						for (int r = 0; r < q - 1; r++)
							d = d->next;
						if (strcmp(a.Name, d->next->value.Name) == 0) {
							String^ buffer = Marshal::PtrToStringAnsi((IntPtr)d->next->value.Name);
							lblEndOper->Text += buffer + "\n";
							for (int j = 0; j < 3; j++) {
								lblEndOper->Text += System::Convert::ToString(d->next->value.Marks[j]);
								lblEndOper->Text += " ";
							}
							lblEndOper->Text += "\n";
							count++;
						}
					}
				}
				if (count == 0)
					lblEndOper->Text = "Совпадений нет";
				tbFIO->Text = "\0";
				tbGrades->Text = "\0";
				tbNumber->Text = "\0";
				lblFIO->Text = "";
				lblGrades->Text = "";
				lblNumber->Text = "";
			}
			break;
		case Change:
			listnode* p = lst.head;
			for (int c = 0; c < xz; c++) {
				p = p->next;
			}
			strcpy(p->value.Name, a.Name);
			for (int c = 0; c < 3; c++) {
				p->value.Marks[c] = a.Marks[c];
			}
			lblEndOper->Text = "Список исправлен";
			tbFIO->Text = "\0";
			tbGrades->Text = "\0";
			tbNumber->Text = "\0";
			lblFIO->Text = "";
			lblGrades->Text = "";
			lblNumber->Text = "";
			break;
	}
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Processing) {
		lblFIO->Text = "Введите ФИО";
		lblGrades->Text = "Введите оценки";
		lblNumber->Text = "Введите номер";
		lblEndOper->Text = "";
		st = Add;
		Processing = true;
	}
}
private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Processing) {
		lblNumber->Text = "ВВедите номер";
		lblEndOper->Text = "";
		st = Remove;
		Processing = true;
	}
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Processing) {
		lblFIO->Text = "Введите ФИО";
		lblEndOper->Text = "";
		st = Search;
		Processing = true;
	}
}
private: System::Void btnSort_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Processing) {
		bubblesort(lst);
		lblEndOper->Text = "Список отсортирован";
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Processing) {
		deletelist(lst);
		lblEndOper->Text = "Список очищен";
	}
}
private: System::Void btnChange_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!Processing) {
		int n = lbStudents->SelectedIndex;
		xz = n;
		lblFIO->Text = "Исправьте ФИО";
		lblGrades->Text = "Исправьте оценки";
		listnode* p = lst.head;
		String^ str;
		for (int i = 0; i < xz; i++) {
			p = p->next;
		}
		str = Marshal::PtrToStringAnsi((IntPtr)p->value.Name);
		tbFIO->Text = str;
		tbGrades->Text = (String^)lbGrades->Items[xz];
		st = Change;
		Processing = true;
	}
}
};
}
