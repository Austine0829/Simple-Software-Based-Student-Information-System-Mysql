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
	/// Summary for readForm
	/// </summary>
	public ref class readForm : public System::Windows::Forms::Form
	{
	public:
		readForm(void)
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
		~readForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::DataGridView^ readDataGrid;
	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(readForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->readDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->readDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->txtSearch);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(750, 40);
			this->panel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(156, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(24, 21);
			this->button1->TabIndex = 5;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &readForm::button1_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(3, 13);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(151, 20);
			this->txtSearch->TabIndex = 4;
			this->txtSearch->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &readForm::txtSearch_KeyDown);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(725, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(23, 26);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &readForm::pictureBox1_Click);
			// 
			// readDataGrid
			// 
			this->readDataGrid->AllowUserToAddRows = false;
			this->readDataGrid->AllowUserToDeleteRows = false;
			this->readDataGrid->AllowUserToResizeColumns = false;
			this->readDataGrid->AllowUserToResizeRows = false;
			this->readDataGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->readDataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->readDataGrid->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->readDataGrid->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->readDataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->readDataGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->readDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->readDataGrid->Location = System::Drawing::Point(3, 39);
			this->readDataGrid->Name = L"readDataGrid";
			this->readDataGrid->ReadOnly = true;
			this->readDataGrid->Size = System::Drawing::Size(744, 419);
			this->readDataGrid->TabIndex = 2;
			// 
			// readForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 462);
			this->ControlBox = false;
			this->Controls->Add(this->readDataGrid);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"readForm";
			this->Text = L"readForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &readForm::readForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->readDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = dbstudent; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	readForm::Close();
}

private: System::Void readForm_Load(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		conn->Open();

		MySqlDataAdapter^ readAdapter = gcnew MySqlDataAdapter("SELECT * FROM tblstudent", conn);
		DataTable^ readTable = gcnew DataTable();

		readAdapter->Fill(readTable);
		readDataGrid->DataSource = readTable;
				
		conn->Close();
	}
	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Error Has Occured While Loading In The Data In Data Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ searchBar = txtSearch->Text;

	if (txtSearch->Text->Trim()->Length != 0)
	{
		try
		{
			conn->Open();

			MySqlDataAdapter^ readAdapter = gcnew MySqlDataAdapter("SELECT * FROM tblstudent WHERE student_name = '" + searchBar + "' OR student_last_name = '" + searchBar + "'", conn);
			DataTable^ readTable = gcnew DataTable();

			readAdapter->Fill(readTable);
			readDataGrid->DataSource = readTable;

			conn->Close();
		}
		catch (Exception^ e)
		{
			(void)e;
		}
	}

	else
	{
		try
		{
			conn->Open();

			MySqlDataAdapter^ readAdapter = gcnew MySqlDataAdapter("SELECT * FROM tblstudent", conn);
			DataTable^ readTable = gcnew DataTable();

			readAdapter->Fill(readTable);
			readDataGrid->DataSource = readTable;

			conn->Close();
		}
		catch (Exception^ e)
		{
			(void)e;
		}
	}
}

private: System::Void txtSearch_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
	if (e->KeyValue == (int)Keys::Enter)
	{
		button1->PerformClick();
	}
}

};

}
