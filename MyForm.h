#pragma once
#include <string>

namespace itprogerwinapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;

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
	private: System::Windows::Forms::Button^ A;
	private: System::Windows::Forms::Button^ T;
	private: System::Windows::Forms::Button^ G;
	private: System::Windows::Forms::Button^ C;
	protected:

	protected:





	private: System::Windows::Forms::Button^ btn_main;


	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ reset_label;
	private: System::Windows::Forms::Button^ del;


	private: System::Windows::Forms::Label^ counter;
	private: System::Windows::Forms::Label^ label2;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->A = (gcnew System::Windows::Forms::Button());
			this->T = (gcnew System::Windows::Forms::Button());
			this->G = (gcnew System::Windows::Forms::Button());
			this->C = (gcnew System::Windows::Forms::Button());
			this->btn_main = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->reset_label = (gcnew System::Windows::Forms::Label());
			this->del = (gcnew System::Windows::Forms::Button());
			this->counter = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// A
			// 
			this->A->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->A->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A->Location = System::Drawing::Point(17, 103);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(67, 64);
			this->A->TabIndex = 0;
			this->A->Text = L"A";
			this->A->UseVisualStyleBackColor = false;
			this->A->Click += gcnew System::EventHandler(this, &MyForm::A_Click);
			// 
			// T
			// 
			this->T->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->T->Location = System::Drawing::Point(107, 103);
			this->T->Name = L"T";
			this->T->Size = System::Drawing::Size(67, 64);
			this->T->TabIndex = 1;
			this->T->Text = L"T";
			this->T->UseVisualStyleBackColor = false;
			this->T->Click += gcnew System::EventHandler(this, &MyForm::T_Click);
			// 
			// G
			// 
			this->G->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->G->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->G->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->G->Location = System::Drawing::Point(197, 103);
			this->G->Name = L"G";
			this->G->Size = System::Drawing::Size(67, 64);
			this->G->TabIndex = 2;
			this->G->Text = L"G";
			this->G->UseVisualStyleBackColor = false;
			this->G->Click += gcnew System::EventHandler(this, &MyForm::G_Click);
			// 
			// C
			// 
			this->C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->C->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C->Location = System::Drawing::Point(96, 182);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(91, 64);
			this->C->TabIndex = 3;
			this->C->Text = L"C";
			this->C->UseVisualStyleBackColor = false;
			this->C->Click += gcnew System::EventHandler(this, &MyForm::C_Click);
			// 
			// btn_main
			// 
			this->btn_main->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->btn_main->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_main->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_main->Location = System::Drawing::Point(341, 231);
			this->btn_main->Name = L"btn_main";
			this->btn_main->Size = System::Drawing::Size(135, 37);
			this->btn_main->TabIndex = 6;
			this->btn_main->Text = L"запустить";
			this->btn_main->UseVisualStyleBackColor = false;
			this->btn_main->Click += gcnew System::EventHandler(this, &MyForm::btn_main_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label1->Location = System::Drawing::Point(3, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(396, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Введите последовательность ДНК:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 25);
			this->label4->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label6->Location = System::Drawing::Point(7, 281);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(498, 23);
			this->label6->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(7, 384);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 25);
			this->label5->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(8, 318);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 44);
			this->label7->TabIndex = 14;
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label8->Location = System::Drawing::Point(8, 423);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(665, 71);
			this->label8->TabIndex = 15;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::comp_dna);
			// 
			// reset_label
			// 
			this->reset_label->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->reset_label->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->reset_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reset_label->Location = System::Drawing::Point(320, 91);
			this->reset_label->Name = L"reset_label";
			this->reset_label->Size = System::Drawing::Size(359, 124);
			this->reset_label->TabIndex = 18;
			// 
			// del
			// 
			this->del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->del->Location = System::Drawing::Point(502, 231);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(160, 37);
			this->del->TabIndex = 19;
			this->del->Text = L"сбросить все";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// counter
			// 
			this->counter->AutoSize = true;
			this->counter->BackColor = System::Drawing::Color::GhostWhite;
			this->counter->Location = System::Drawing::Point(640, 200);
			this->counter->Name = L"counter";
			this->counter->Size = System::Drawing::Size(13, 13);
			this->counter->TabIndex = 20;
			this->counter->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::GhostWhite;
			this->label2->Location = System::Drawing::Point(655, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"/90";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->ClientSize = System::Drawing::Size(685, 521);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->counter);
			this->Controls->Add(this->del);
			this->Controls->Add(this->reset_label);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_main);
			this->Controls->Add(this->C);
			this->Controls->Add(this->G);
			this->Controls->Add(this->T);
			this->Controls->Add(this->A);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор водородных связей";
			this->Click += gcnew System::EventHandler(this, &MyForm::btn_letters_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: String^ str;
	private: int n = 0;
	private: int i = 0;
	private: float k = 0;
	private: bool equal = false;
#pragma endregion

	private: System::Void btn_main_Click(System::Object^ sender, System::EventArgs^ e) //заупуск всего
	{
		this->label6->Text = "Количество водородных связей:";
		this->label5->Text = "Полученая комплементарная цепочка:";
		this->label8->BackColor = Color::Snow;
		this->label7->BackColor = Color::Snow;
		this->label7->Text = System::Convert::ToString(k);
		this->label8->ForeColor = Color::Black;

		

	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)//сброс всего
	{
		i = 0;
		this->label6->Text = " ";
		this->label5->Text = " ";
		this->label8->BackColor = Color::DarkSlateBlue;
		this->label7->BackColor = Color::DarkSlateBlue;
		this->label7->Text = " ";
		this->label8->Text = " ";
		this->label8->ForeColor = Color::DarkSlateBlue;
		k = 0;
		this->counter->Text = "0";
		this->reset_label->Text = " ";
		
	}
	//private: System::Void btn_letters_Click(System::Object^ sender, System::EventArgs^ e)//ограничитель счетчика
	//{

	//}
	private: System::Void btn_letters_Click(System::Object^ sender, System::EventArgs^ e)//ввод текста
	{
		if (i < 90)
		{
			Button^ button = safe_cast<Button^>(sender);
			this->reset_label->Text = reset_label->Text + button->Text;
		}
		
	}


	private: System::Void comp_dna(System::Object^ sender, System::EventArgs^ e)//вывод текста
	{
		Button^ button = safe_cast<Button^>(sender);
		Button^ a = safe_cast<Button^>(sender);
		a = button;

		if (button == A && i < 90)
		{
			button = T;
			this->label8->Text = label8->Text + button->Text;
			button = a;

		}
		if (button == T && i < 90)
		{
			button = A;
			this->label8->Text = label8->Text + button->Text;
			button = a;
		}
		if (button == C && i < 90)
		{
			button = G;
			this->label8->Text = label8->Text + button->Text;
			button = a;

		}
		if (button == G && i < 90)
		{
			button = C;
			this->label8->Text = label8->Text + button->Text;
			button = a;
		}


		
		
	}
	//private: System::Void comp_dna(System::Object^ sender, System::EventArgs^ e)//ввывод текста
	//{
		//Button^ button = safe_cast<Button^>(sender);
		//if (sender == 'A') 
		//{
			//this->label8->Text = button->Text->"T";
		//}
		//if (this->reset_label->Text == " ")
		//{
		//	this->reset_label->Text = button->Text;
		//}
		//else
		//{
		//	this->reset_label->Text = reset_label->Text + button->Text;
		//}

	//}
	private: System::Void A_Click(System::Object^ sender, System::EventArgs^ e)//ввод A
	{
		dna_action('A');
		btn_letters_Click(sender, e);
		counter_Click('A');
		comp_dna(sender, e);
		
		
	}

	private: System::Void T_Click(System::Object^ sender, System::EventArgs^ e)//ввод T
	{
		dna_action('T');
		btn_letters_Click(sender, e);
		counter_Click('T');
		comp_dna(sender, e);
	}

	private: System::Void C_Click(System::Object^ sender, System::EventArgs^ e)//ввод C
	{
		dna_action('C');
		btn_letters_Click(sender, e);
		counter_Click('C');
		comp_dna(sender, e);

	}

	private: System::Void G_Click(System::Object^ sender, System::EventArgs^ e)//ввод G
	{
		dna_action('G');
		btn_letters_Click(sender, e);
		counter_Click('G');
		comp_dna(sender, e);
	}

	private: System::Void dna_action(char action)//общая для всех кнопок
	{
		if (action == 'A' && i<90)
		{
			k += 2;
		}
		else if (action == 'C' && i<90)
		{
			k += 3;
		}
		else if (action == 'T' && i<90)
		{
			k += 2;
		}
		else if (action == 'G' && i<90)
		{
			k += 3;
		}
	}

		   //private: System::Void btn_del(System::Object^ sender, System::EventArgs^ e)//кнопка делита
		   //{

		   //}
    
	private: System::Void counter_Click(char action)//счетчик 
	{
		if (action == 'A')
		{
			if (i < 90)
			{
				i++;
				this->counter->Text = System::Convert::ToString(i);
			}
		}
		else if (action == 'C')
		{
			if (i < 90)
			{
				i++;
				this->counter->Text = System::Convert::ToString(i);
			}
		}
		else if (action == 'T')
		{
			if (i < 90) 
			{
				i++;
				this->counter->Text = System::Convert::ToString(i);
			}
		}
		else if (action == 'G')
		{
			if (i < 90)
			{
				i++;
				this->counter->Text = System::Convert::ToString(i);
			}
		}
	}


		   //private: System::Void counter_Clic(System::Object^ sender, System::EventArgs^ e)//счетчик
		   //{
			   //dna_action('A');



		  // }
		  // private: System::Void counter_Click(System::Object^ sender, System::EventArgs^ e)
		   //{
			   //int k = 0;
			   //Button^ button1 = safe_cast<Button^>(sender);

			   //if (this->reset_label->Text == " ")
			   //{
				   //k++;
				  //this->counter->Text = System::Convert::ToString(k);

			   //}

		  // }


	};
}
