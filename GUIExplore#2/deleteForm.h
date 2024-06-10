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
	/// Summary for deleteForm
	/// </summary>
	public ref class deleteForm : public System::Windows::Forms::Form
	{
	public:
		deleteForm(void)
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
		~deleteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ deleteDataGrid;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btDelete;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(deleteForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->deleteDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deleteDataGrid))->BeginInit();
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
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->deleteDataGrid);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(738, 420);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Delete Information";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// deleteDataGrid
			// 
			this->deleteDataGrid->AllowUserToAddRows = false;
			this->deleteDataGrid->AllowUserToDeleteRows = false;
			this->deleteDataGrid->AllowUserToResizeColumns = false;
			this->deleteDataGrid->AllowUserToResizeRows = false;
			this->deleteDataGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->deleteDataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->deleteDataGrid->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->deleteDataGrid->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->deleteDataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->deleteDataGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->deleteDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->deleteDataGrid->Location = System::Drawing::Point(3, 44);
			this->deleteDataGrid->MultiSelect = false;
			this->deleteDataGrid->Name = L"deleteDataGrid";
			this->deleteDataGrid->ReadOnly = true;
			this->deleteDataGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->deleteDataGrid->Size = System::Drawing::Size(732, 373);
			this->deleteDataGrid->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->btDelete);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(732, 40);
			this->panel1->TabIndex = 0;
			// 
			// btDelete
			// 
			this->btDelete->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btDelete->FlatAppearance->BorderSize = 0;
			this->btDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDelete->Location = System::Drawing::Point(0, 10);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(118, 27);
			this->btDelete->TabIndex = 2;
			this->btDelete->Text = L"Delete Information";
			this->btDelete->UseVisualStyleBackColor = false;
			this->btDelete->Click += gcnew System::EventHandler(this, &deleteForm::btDelete_Click);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &deleteForm::pictureBox1_Click);
			// 
			// deleteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 450);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"deleteForm";
			this->Text = L"deleteForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &deleteForm::deleteForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deleteDataGrid))->EndInit();
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

		MySqlDataAdapter^ deleteAdapter = gcnew MySqlDataAdapter("SELECT * FROM tblstudent", conn);
		DataTable^ deleteTable = gcnew DataTable();

		deleteAdapter->Fill(deleteTable);
		deleteDataGrid->DataSource = deleteTable;

		conn->Close();
	}
	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Error Has Occured While Loading In The Data In Data Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void deleteForm_Load(System::Object^ sender, System::EventArgs^ e) {

	loadTable();
}

private: System::Void btDelete_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentID = deleteDataGrid->Rows[deleteDataGrid->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	Windows::Forms::DialogResult deleteDialogResult = MessageBox::Show("Are You Sure You Want To Delete This Student Information?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

	if (deleteDialogResult == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ command = gcnew MySqlCommand("DELETE FROM tblstudent WHERE student_id =" + currentID, conn);

			command->ExecuteNonQuery();

			MessageBox::Show("Student Information Has Been Deleted");

			conn->Close();

			loadTable();
		}
		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Occured While Deleting The Information In Database", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	deleteForm::Close();
}

};

}
