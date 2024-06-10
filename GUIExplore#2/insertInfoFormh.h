#pragma once

namespace GUIExplore2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for insertInfoFormh
	/// </summary>
	public ref class insertInfoFormh : public System::Windows::Forms::Form
	{
	public:
		insertInfoFormh(void)
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
		~insertInfoFormh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtPhoneNum;
	private: System::Windows::Forms::TextBox^ txtBirthDate;
	private: System::Windows::Forms::NumericUpDown^ nudAge;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


















	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(insertInfoFormh::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNum = (gcnew System::Windows::Forms::TextBox());
			this->txtBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->nudAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAge))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 25);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(573, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(26, 22);
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &insertInfoFormh::pictureBox4_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(516, 182);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(78, 32);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"Add ";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &insertInfoFormh::btnAdd_Click);
			// 
			// txtName
			// 
			this->txtName->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtName->Location = System::Drawing::Point(103, 14);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(185, 22);
			this->txtName->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(306, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Phone Number";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(319, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Birth Date";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Age";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// txtLastName
			// 
			this->txtLastName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtLastName->Location = System::Drawing::Point(407, 14);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(185, 22);
			this->txtLastName->TabIndex = 6;
			// 
			// txtPhoneNum
			// 
			this->txtPhoneNum->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPhoneNum->Location = System::Drawing::Point(407, 64);
			this->txtPhoneNum->Name = L"txtPhoneNum";
			this->txtPhoneNum->Size = System::Drawing::Size(185, 22);
			this->txtPhoneNum->TabIndex = 7;
			// 
			// txtBirthDate
			// 
			this->txtBirthDate->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtBirthDate->Location = System::Drawing::Point(103, 114);
			this->txtBirthDate->Name = L"txtBirthDate";
			this->txtBirthDate->Size = System::Drawing::Size(185, 22);
			this->txtBirthDate->TabIndex = 8;
			// 
			// nudAge
			// 
			this->nudAge->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->nudAge->BackColor = System::Drawing::SystemColors::Window;
			this->nudAge->Location = System::Drawing::Point(103, 64);
			this->nudAge->Name = L"nudAge";
			this->nudAge->Size = System::Drawing::Size(185, 22);
			this->nudAge->TabIndex = 4;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				200)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				199)));
			this->tableLayoutPanel1->Controls->Add(this->nudAge, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->txtBirthDate, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->txtPhoneNum, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->txtLastName, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->txtName, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 26);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(599, 151);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// insertInfoFormh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 220);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"insertInfoFormh";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"insertInfoFormh";
			this->Load += gcnew System::EventHandler(this, &insertInfoFormh::insertInfoFormh_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAge))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = dbstudent; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void resetForm() {
	txtName->Text = "";
	txtLastName->Text = "";
	nudAge->Value = 0;
	txtPhoneNum->Text = "";
	txtBirthDate->Text = "";
}

private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {

	insertInfoFormh::Close();
}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ insertName = txtName->Text;
	String^ insertLastName = txtLastName->Text;
	int insertAge = Convert::ToInt32(nudAge->Value);
	String^ insertPhoneNum = txtPhoneNum->Text;
	String^ insertBirthDate = txtBirthDate->Text;
	bool isValid = true;

	if (txtName->Text->Trim()->Length <= 0 || txtLastName->Text->Trim()->Length <= 0 || nudAge->Value <= 0 || txtBirthDate->Text->Trim()->Length <= 0)
	{
		isValid = false;
	}

	try
	{
		if (isValid == true)
		{
			conn->Open();

			String^ commandString = "INSERT INTO tblstudent(student_name, student_last_name, student_age, student_phone_number, student_birth_date) VALUES(@student_name, @student_last_name, @student_age, @student_phone_number, @student_birth_date)";
			MySqlCommand^ command = gcnew MySqlCommand(commandString, conn);

			command->Parameters->AddWithValue("@student_name", insertName);
			command->Parameters->AddWithValue("@student_last_name", insertLastName);
			command->Parameters->AddWithValue("@student_age", insertAge);
			command->Parameters->AddWithValue("@student_phone_number", insertPhoneNum);
			command->Parameters->AddWithValue("@student_birth_date", insertBirthDate);
			command->ExecuteNonQuery();

			MessageBox::Show("Student Information Has Been Added In Database");
			
			conn->Close();
			resetForm();
		}
		
		else
		{
			MessageBox::Show("Please, Fill Out The Form Before Adding It In Database", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Adding The Information In Database", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void insertInfoFormh_Load(System::Object^ sender, System::EventArgs^ e) {
}
};

}
