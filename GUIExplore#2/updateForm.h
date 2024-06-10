#pragma once

namespace GUIExplore2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for updateForm
	/// </summary>
	public ref class updateForm : public System::Windows::Forms::Form
	{
	public:
		updateForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panel2->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~updateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ updateDataGrid;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::NumericUpDown^ nudUpdateAge;
	private: System::Windows::Forms::TextBox^ txtUpdateBirthDate;


	private: System::Windows::Forms::TextBox^ txtUpdatePhoneNum;

	private: System::Windows::Forms::TextBox^ txtUpdateLastName;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtUpdateName;
	private: System::Windows::Forms::Button^ btnUpdte;









	protected:





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(updateForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnUpdte = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->nudUpdateAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtUpdateBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdatePhoneNum = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdateLastName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateName = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->updateDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudUpdateAge))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->updateDataGrid))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(746, 446);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->updateDataGrid);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(738, 420);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Insert Information";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->Controls->Add(this->btnUpdte);
			this->panel2->Controls->Add(this->tableLayoutPanel1);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(7, 49);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(600, 220);
			this->panel2->TabIndex = 2;
			// 
			// btnUpdte
			// 
			this->btnUpdte->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnUpdte->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdte->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdte->Location = System::Drawing::Point(483, 181);
			this->btnUpdte->Name = L"btnUpdte";
			this->btnUpdte->Size = System::Drawing::Size(110, 32);
			this->btnUpdte->TabIndex = 5;
			this->btnUpdte->Text = L"Update";
			this->btnUpdte->UseVisualStyleBackColor = false;
			this->btnUpdte->Click += gcnew System::EventHandler(this, &updateForm::btnUpdte_Click);
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
			this->tableLayoutPanel1->Controls->Add(this->nudUpdateAge, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->txtUpdateBirthDate, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->txtUpdatePhoneNum, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->txtUpdateLastName, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label5, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->txtUpdateName, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(1, 27);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(599, 151);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// nudUpdateAge
			// 
			this->nudUpdateAge->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->nudUpdateAge->BackColor = System::Drawing::SystemColors::Window;
			this->nudUpdateAge->Location = System::Drawing::Point(103, 64);
			this->nudUpdateAge->Name = L"nudUpdateAge";
			this->nudUpdateAge->Size = System::Drawing::Size(185, 22);
			this->nudUpdateAge->TabIndex = 4;
			// 
			// txtUpdateBirthDate
			// 
			this->txtUpdateBirthDate->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtUpdateBirthDate->Location = System::Drawing::Point(103, 114);
			this->txtUpdateBirthDate->Name = L"txtUpdateBirthDate";
			this->txtUpdateBirthDate->Size = System::Drawing::Size(185, 22);
			this->txtUpdateBirthDate->TabIndex = 8;
			// 
			// txtUpdatePhoneNum
			// 
			this->txtUpdatePhoneNum->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtUpdatePhoneNum->Location = System::Drawing::Point(407, 64);
			this->txtUpdatePhoneNum->Name = L"txtUpdatePhoneNum";
			this->txtUpdatePhoneNum->Size = System::Drawing::Size(185, 22);
			this->txtUpdatePhoneNum->TabIndex = 7;
			// 
			// txtUpdateLastName
			// 
			this->txtUpdateLastName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtUpdateLastName->Location = System::Drawing::Point(407, 14);
			this->txtUpdateLastName->Name = L"txtUpdateLastName";
			this->txtUpdateLastName->Size = System::Drawing::Size(185, 22);
			this->txtUpdateLastName->TabIndex = 6;
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
			// txtUpdateName
			// 
			this->txtUpdateName->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtUpdateName->Location = System::Drawing::Point(103, 14);
			this->txtUpdateName->Name = L"txtUpdateName";
			this->txtUpdateName->Size = System::Drawing::Size(185, 22);
			this->txtUpdateName->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(600, 25);
			this->panel3->TabIndex = 3;
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
			this->pictureBox4->Click += gcnew System::EventHandler(this, &updateForm::pictureBox4_Click);
			// 
			// updateDataGrid
			// 
			this->updateDataGrid->AllowUserToAddRows = false;
			this->updateDataGrid->AllowUserToDeleteRows = false;
			this->updateDataGrid->AllowUserToResizeColumns = false;
			this->updateDataGrid->AllowUserToResizeRows = false;
			this->updateDataGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->updateDataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->updateDataGrid->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->updateDataGrid->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->updateDataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->updateDataGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->updateDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->updateDataGrid->Location = System::Drawing::Point(3, 44);
			this->updateDataGrid->MultiSelect = false;
			this->updateDataGrid->Name = L"updateDataGrid";
			this->updateDataGrid->ReadOnly = true;
			this->updateDataGrid->Size = System::Drawing::Size(732, 373);
			this->updateDataGrid->TabIndex = 1;
			this->updateDataGrid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &updateForm::updateDataGrid_CellClick);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->btnUpdate);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(732, 40);
			this->panel1->TabIndex = 0;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(0, 10);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(118, 27);
			this->btnUpdate->TabIndex = 2;
			this->btnUpdate->Text = L"Update Information";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &updateForm::btnUpdate_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(708, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(23, 27);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &updateForm::pictureBox1_Click);
			// 
			// updateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 450);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"updateForm";
			this->Text = L"updateForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &updateForm::updateForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudUpdateAge))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->updateDataGrid))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = dbstudent; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void loadTable() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ updateAdapter = gcnew MySqlDataAdapter("SELECT * FROM tblstudent", conn);
		DataTable^ updateTable = gcnew DataTable();
		
		updateAdapter->Fill(updateTable);
		updateDataGrid->DataSource = updateTable;

		conn->Close();
	}
	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Loading In The Data In Data Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}	
}

private: System::Void updateForm_Load(System::Object^ sender, System::EventArgs^ e) {

	loadTable();
}

private: System::Void updateDataGrid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ currentID = updateDataGrid->Rows[updateDataGrid->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ updateAdapter = gcnew MySqlDataAdapter("SELECT * FROM tblstudent WHERE student_id = " + currentID , conn);
		DataTable^ updateTable = gcnew DataTable();

		updateAdapter->Fill(updateTable);

		txtUpdateName->Text = updateTable->Rows[0]->ItemArray[1]->ToString();
		txtUpdateLastName->Text = updateTable->Rows[0]->ItemArray[2]->ToString();
		nudUpdateAge->Value = Convert::ToInt16(updateTable->Rows[0]->ItemArray[3]->ToString());
		txtUpdatePhoneNum->Text = updateTable->Rows[0]->ItemArray[4]->ToString();
		txtUpdateBirthDate->Text = updateTable->Rows[0]->ItemArray[5]->ToString();

		conn->Close();

	}
	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void btnUpdte_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentID = updateDataGrid->Rows[updateDataGrid->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ updateName = txtUpdateName->Text;
	String^ updateLastName = txtUpdateLastName->Text;
	int updateAge = Convert::ToInt16(nudUpdateAge->Value);
	String^ updatePhoneNumber = txtUpdatePhoneNum->Text;
	String^ updateBirthDate = txtUpdateBirthDate->Text;

	try
	{
		conn->Open();

		MySqlCommand^ command = gcnew MySqlCommand("UPDATE tblstudent SET student_name = @studentName, student_last_name = @studentLastName, student_age = @studentAge, student_phone_number = @studentPhoneNumber, student_birth_date = @studentBirthDate WHERE student_id =" + currentID, conn);

		command->Parameters->AddWithValue("@studentName", updateName);
		command->Parameters->AddWithValue("@studentLastName", updateLastName);
		command->Parameters->AddWithValue("@studentAge", updateAge);
		command->Parameters->AddWithValue("@studentPhoneNumber", updatePhoneNumber);
		command->Parameters->AddWithValue("@studentBirthDate", updateBirthDate);
		command->ExecuteNonQuery();

		MessageBox::Show("Student Information Has Been Updated");

		conn->Close();

		loadTable();
	}
	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Error Has Occured While Updating The Information In Database", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

	panel2->Show();
}

private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	panel2->Hide();
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	updateForm::Close();
}

};

}
