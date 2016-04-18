#pragma once

namespace VisitorsLog {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  visitorNameInput;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  date;
	private: System::Windows::Forms::Label^  time;
	private: System::Windows::Forms::Label^  visitorName;
	private: System::Windows::Forms::Label^  professorName;
	private: System::Windows::Forms::Label^  reasonForVisit;
	private: System::Windows::Forms::TextBox^  professorNameInput;
	private: System::Windows::Forms::TextBox^  reasonInput;



	private: System::Windows::Forms::NumericUpDown^  minuteUpDown;
	private: System::Windows::Forms::ComboBox^  chooseAmPm;




	private: System::Windows::Forms::NumericUpDown^  hourUpDown;

	private: System::Windows::Forms::ListViewItem^ listViewItem1;
	private: System::Windows::Forms::Button^  submitButton;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  dateView;
	private: System::Windows::Forms::ColumnHeader^  timeView;
	private: System::Windows::Forms::ColumnHeader^  visitorView;
	private: System::Windows::Forms::ColumnHeader^  professorView;
	private: System::Windows::Forms::ColumnHeader^  reasonView;
	private: System::Windows::Forms::NumericUpDown^  yearUpDown;

	private: System::Windows::Forms::NumericUpDown^  dayUpDown;

	private: System::Windows::Forms::NumericUpDown^  monthUpDown;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->visitorNameInput = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->date = (gcnew System::Windows::Forms::Label());
			this->time = (gcnew System::Windows::Forms::Label());
			this->visitorName = (gcnew System::Windows::Forms::Label());
			this->professorName = (gcnew System::Windows::Forms::Label());
			this->reasonForVisit = (gcnew System::Windows::Forms::Label());
			this->professorNameInput = (gcnew System::Windows::Forms::TextBox());
			this->reasonInput = (gcnew System::Windows::Forms::TextBox());
			this->minuteUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->chooseAmPm = (gcnew System::Windows::Forms::ComboBox());
			this->hourUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->dateView = (gcnew System::Windows::Forms::ColumnHeader());
			this->timeView = (gcnew System::Windows::Forms::ColumnHeader());
			this->visitorView = (gcnew System::Windows::Forms::ColumnHeader());
			this->professorView = (gcnew System::Windows::Forms::ColumnHeader());
			this->reasonView = (gcnew System::Windows::Forms::ColumnHeader());
			this->yearUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->dayUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->monthUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minuteUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hourUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yearUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dayUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->monthUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// visitorNameInput
			// 
			this->visitorNameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->visitorNameInput->Location = System::Drawing::Point(14, 334);
			this->visitorNameInput->Name = L"visitorNameInput";
			this->visitorNameInput->Size = System::Drawing::Size(225, 22);
			this->visitorNameInput->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(197, 200);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// date
			// 
			this->date->AutoSize = true;
			this->date->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date->Location = System::Drawing::Point(10, 218);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(42, 19);
			this->date->TabIndex = 2;
			this->date->Text = L"Date";
			// 
			// time
			// 
			this->time->AutoSize = true;
			this->time->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time->Location = System::Drawing::Point(10, 265);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(43, 19);
			this->time->TabIndex = 3;
			this->time->Text = L"Time";
			// 
			// visitorName
			// 
			this->visitorName->AutoSize = true;
			this->visitorName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->visitorName->Location = System::Drawing::Point(10, 312);
			this->visitorName->Name = L"visitorName";
			this->visitorName->Size = System::Drawing::Size(152, 19);
			this->visitorName->TabIndex = 4;
			this->visitorName->Text = L"Student/Visitor Name";
			// 
			// professorName
			// 
			this->professorName->AutoSize = true;
			this->professorName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->professorName->Location = System::Drawing::Point(10, 359);
			this->professorName->Name = L"professorName";
			this->professorName->Size = System::Drawing::Size(129, 19);
			this->professorName->TabIndex = 5;
			this->professorName->Text = L"Professor/Advisor";
			// 
			// reasonForVisit
			// 
			this->reasonForVisit->AutoSize = true;
			this->reasonForVisit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reasonForVisit->Location = System::Drawing::Point(10, 406);
			this->reasonForVisit->Name = L"reasonForVisit";
			this->reasonForVisit->Size = System::Drawing::Size(154, 19);
			this->reasonForVisit->TabIndex = 6;
			this->reasonForVisit->Text = L"Reason For Your Visit";
			// 
			// professorNameInput
			// 
			this->professorNameInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->professorNameInput->Location = System::Drawing::Point(14, 381);
			this->professorNameInput->Name = L"professorNameInput";
			this->professorNameInput->Size = System::Drawing::Size(225, 22);
			this->professorNameInput->TabIndex = 7;
			// 
			// reasonInput
			// 
			this->reasonInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reasonInput->Location = System::Drawing::Point(14, 428);
			this->reasonInput->Name = L"reasonInput";
			this->reasonInput->Size = System::Drawing::Size(225, 22);
			this->reasonInput->TabIndex = 8;
			// 
			// minuteUpDown
			// 
			this->minuteUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minuteUpDown->Location = System::Drawing::Point(85, 287);
			this->minuteUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->minuteUpDown->Name = L"minuteUpDown";
			this->minuteUpDown->Size = System::Drawing::Size(68, 22);
			this->minuteUpDown->TabIndex = 10;
			// 
			// chooseAmPm
			// 
			this->chooseAmPm->FormattingEnabled = true;
			this->chooseAmPm->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->chooseAmPm->Location = System::Drawing::Point(159, 288);
			this->chooseAmPm->Name = L"chooseAmPm";
			this->chooseAmPm->Size = System::Drawing::Size(80, 21);
			this->chooseAmPm->TabIndex = 12;
			// 
			// hourUpDown
			// 
			this->hourUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hourUpDown->Location = System::Drawing::Point(14, 287);
			this->hourUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->hourUpDown->Name = L"hourUpDown";
			this->hourUpDown->Size = System::Drawing::Size(65, 22);
			this->hourUpDown->TabIndex = 14;
			// 
			// submitButton
			// 
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitButton->Location = System::Drawing::Point(14, 456);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(91, 47);
			this->submitButton->TabIndex = 15;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &MyForm::submitButton_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->dateView, this->timeView,
					this->visitorView, this->professorView, this->reasonView
			});
			this->listView1->Location = System::Drawing::Point(257, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(790, 563);
			this->listView1->TabIndex = 16;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged);
			// 
			// dateView
			// 
			this->dateView->Text = L"Date";
			this->dateView->Width = 86;
			// 
			// timeView
			// 
			this->timeView->Text = L"Time";
			this->timeView->Width = 91;
			// 
			// visitorView
			// 
			this->visitorView->Text = L"Student/Visitor Name";
			this->visitorView->Width = 181;
			// 
			// professorView
			// 
			this->professorView->Text = L"Professor/Advisor";
			this->professorView->Width = 196;
			// 
			// reasonView
			// 
			this->reasonView->Text = L"Reason For Your Visit";
			this->reasonView->Width = 199;
			// 
			// yearUpDown
			// 
			this->yearUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yearUpDown->Location = System::Drawing::Point(159, 240);
			this->yearUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->yearUpDown->Name = L"yearUpDown";
			this->yearUpDown->Size = System::Drawing::Size(80, 22);
			this->yearUpDown->TabIndex = 17;
			// 
			// dayUpDown
			// 
			this->dayUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dayUpDown->Location = System::Drawing::Point(88, 240);
			this->dayUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->dayUpDown->Name = L"dayUpDown";
			this->dayUpDown->Size = System::Drawing::Size(65, 22);
			this->dayUpDown->TabIndex = 18;
			// 
			// monthUpDown
			// 
			this->monthUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthUpDown->Location = System::Drawing::Point(14, 240);
			this->monthUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->monthUpDown->Name = L"monthUpDown";
			this->monthUpDown->Size = System::Drawing::Size(65, 22);
			this->monthUpDown->TabIndex = 19;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Dock = System::Windows::Forms::DockStyle::Left;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(209, 20);
			this->dateTimePicker1->TabIndex = 20;
			this->dateTimePicker1->Value = System::DateTime(2016, 4, 18, 0, 0, 0, 0);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1059, 587);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->monthUpDown);
			this->Controls->Add(this->dayUpDown);
			this->Controls->Add(this->yearUpDown);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->hourUpDown);
			this->Controls->Add(this->chooseAmPm);
			this->Controls->Add(this->minuteUpDown);
			this->Controls->Add(this->reasonInput);
			this->Controls->Add(this->professorNameInput);
			this->Controls->Add(this->reasonForVisit);
			this->Controls->Add(this->professorName);
			this->Controls->Add(this->visitorName);
			this->Controls->Add(this->time);
			this->Controls->Add(this->date);
			this->Controls->Add(this->visitorNameInput);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Visitor\'s Log";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minuteUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hourUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yearUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dayUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->monthUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void bindingSource1_CurrentChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void hourUpDown_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void submitButton_Click(System::Object^  sender, System::EventArgs^  e) {
	listViewItem1 = gcnew System::Windows::Forms::ListViewItem( this->monthUpDown->Text + "/" + this->dayUpDown->Text + "/" + this->yearUpDown->Text );
	listViewItem1->SubItems->Add(this->hourUpDown->Text + ":" + this->minuteUpDown->Text + " " + this->chooseAmPm->Text);
	listViewItem1->SubItems->Add(this->visitorNameInput->Text);
	listViewItem1->SubItems->Add(this->professorNameInput->Text);
	listViewItem1->SubItems->Add(this->reasonInput->Text);
	//listView1->Items[0]->SubItems->Add(this->professorNameInput->Text); old
	//listView1->Items[2]->SubItems->Add(this->reasonInput->Text); old
	this->listView1->Items->Add(this->listViewItem1);
}
};
}
