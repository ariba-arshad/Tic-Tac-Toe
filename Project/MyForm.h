#pragma once
#include <cstdlib>

namespace ProjectPF
{

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
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;



	private: System::Windows::Forms::RadioButton^ PvP;

	private: System::Windows::Forms::RadioButton^ PvComp;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button10;	// for reseting the game
	private: System::Windows::Forms::Label^ label2;		// to show which players turn it is

	private: System::Windows::Forms::Label^ label4;		// score of player 1
	private: System::Windows::Forms::Label^ label3;		// score of player 2 / computer
	private: System::Windows::Forms::Button^ button11;	// to restart the game
	private: System::Windows::Forms::Label^ label5;		// number of games draw



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 

		bool player_vs_player = true;
		bool player1_turn = true;		// to check if it is turn of player_1 or player_2 / computer
		bool game_over = false;
		bool computer_turn = false;

		char butt_1_text = '\0';
		char butt_2_text = '\0';
		char butt_3_text = '\0';
		char butt_4_text = '\0';
		char butt_5_text = '\0';
		char butt_6_text = '\0';
		char butt_7_text = '\0';
		char butt_8_text = '\0';
		char butt_9_text = '\0';

		int player_1_games_won = 0;
		int player_2_comp_games_won = 0;
		int games_draw = 0;

		char current_symbol = 'X';		// symbol for player 1

		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PvComp = (gcnew System::Windows::Forms::RadioButton());
			this->PvP = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(27, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 73);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(135, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 73);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(243, 48);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 73);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(27, 127);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 73);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(135, 127);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 73);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(243, 127);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 73);
			this->button6->TabIndex = 3;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(27, 206);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(102, 73);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(135, 206);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(102, 73);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Stencil", 20.25F, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(243, 206);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(102, 73);
			this->button9->TabIndex = 6;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox1->Location = System::Drawing::Point(12, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(349, 261);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Firebrick;
			this->label1->Location = System::Drawing::Point(371, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Player vs Player";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->PvComp);
			this->groupBox2->Controls->Add(this->PvP);
			this->groupBox2->Controls->Add(this->panel1);
			this->groupBox2->Location = System::Drawing::Point(367, 34);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(190, 261);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(17, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Draw: 00";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(17, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Player 2: 00";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(17, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Player 1: 00";
			// 
			// PvComp
			// 
			this->PvComp->AutoSize = true;
			this->PvComp->BackColor = System::Drawing::Color::Aqua;
			this->PvComp->Location = System::Drawing::Point(32, 233);
			this->PvComp->Name = L"PvComp";
			this->PvComp->Size = System::Drawing::Size(116, 17);
			this->PvComp->TabIndex = 4;
			this->PvComp->Text = L"Player vs Computer";
			this->PvComp->UseVisualStyleBackColor = false;
			this->PvComp->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// PvP
			// 
			this->PvP->AutoSize = true;
			this->PvP->BackColor = System::Drawing::Color::Aqua;
			this->PvP->Checked = true;
			this->PvP->Location = System::Drawing::Point(40, 211);
			this->PvP->Name = L"PvP";
			this->PvP->Size = System::Drawing::Size(100, 17);
			this->PvP->TabIndex = 3;
			this->PvP->TabStop = true;
			this->PvP->Text = L"Player vs Player";
			this->PvP->UseVisualStyleBackColor = false;
			this->PvP->CheckedChanged += gcnew System::EventHandler(this, &MyForm::pvp_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Green;
			this->panel1->Location = System::Drawing::Point(0, 198);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(190, 63);
			this->panel1->TabIndex = 5;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Red;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(482, 298);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 33);
			this->button10->TabIndex = 12;
			this->button10->Text = L"RESET";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(209, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Player 1 Turn";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(367, 298);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 33);
			this->button11->TabIndex = 14;
			this->button11->Text = L"RESTART";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 333);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"MyForm";
			this->Text = L"TIC TAC TOE";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// restart button
		reset_form();
	}

	private: System::Void reset_form()
	{
		button1->Text = "";
		button2->Text = "";
		button3->Text = "";
		button4->Text = "";
		button5->Text = "";
		button6->Text = "";
		button7->Text = "";
		button8->Text = "";
		button9->Text = "";

		butt_1_text = '\0';
		butt_2_text = '\0';
		butt_3_text = '\0';
		butt_4_text = '\0';
		butt_5_text = '\0';
		butt_6_text = '\0';
		butt_7_text = '\0';
		butt_8_text = '\0';
		butt_9_text = '\0';

		current_symbol = 'X';
		player1_turn = true;
		label2->Text = "PLAYER 1 TURN";
		game_over = false;
		computer_turn = false;
	}

	private: System::Void pvp_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// Player vs Player Radio Button
		reset_form();
		player_vs_player = true;
		label1->Text = "Player vs Player";

		label3->Text = "Player 1: 00";
		label4->Text = "Player 2: 00";
		label5->Text = "Draw: 00";

	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// Player vs Computer Radio Button
		reset_form();
		player_vs_player = false;
		label1->Text = "Player vs Comp";

		label3->Text = "Player 1: 00";
		label4->Text = "Computer: 00";
		label5->Text = "Draw: 00";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// game reset button
		reset_form();
		player_1_games_won = 0;
		player_2_comp_games_won = 0;
		games_draw = 0;

		label3->Text = "Player 1: 00";
		if (player_vs_player)
		{
			label4->Text = "Player 2: 00";
		}
		else
		{
			label4->Text = "Computer: 00";
		}
		label5->Text = "Draw: 00";

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_1_function();
		if (!player_vs_player)
		{
			computer_steps();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_2_function();
		if (!player_vs_player)
		{
			computer_steps();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_3_function();
		if (!player_vs_player)
		{
			computer_steps();
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_4_function();
		if (!player_vs_player)
		{
			computer_steps();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_5_function();
		if (!player_vs_player)
		{
			computer_steps();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_6_function();
		if (!player_vs_player)
		{
			computer_steps();
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_7_function();
		if (!player_vs_player)
		{
			computer_steps();
		}
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_8_function();
		if (!player_vs_player)
		{
			computer_steps();
		}
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_9_function();
		if (!player_vs_player)
		{
			computer_steps();
		}
	}

		   void button_1_function()
		   {
			   if (butt_1_text == '\0' && !game_over)
			   {
				   computer_turn = !computer_turn;
				   if (current_symbol == 'X')
				   {
					   button1->Text = "X";
					   butt_1_text = current_symbol;
					   current_symbol = 'O';
				   }
				   else if (current_symbol == 'O')
				   {
					   button1->Text = "O";
					   butt_1_text = current_symbol;
					   current_symbol = 'X';
				   }

				   // Updating text to indicate whose turn is this...
				   if (player1_turn)
				   {
					   if (player_vs_player)
					   {
						   label2->Text = "PLAYER 2 TURN";
					   }
					   else
					   {
						   label2->Text = "COMPUTER TURN";
					   }
				   }
				   else
				   {
					   label2->Text = "PLAYER 1 TURN";
				   }
				   player1_turn = !player1_turn;
				   check_game_win();
			   }
		   }


		   void button_2_function()
		   {
			   if (butt_2_text == '\0' && !game_over)
			   {
				   computer_turn = !computer_turn;
				   if (current_symbol == 'X')
				   {
					   button2->Text = "X";
					   butt_2_text = current_symbol;
					   current_symbol = 'O';
				   }
				   else if (current_symbol == 'O')
				   {
					   button2->Text = "O";
					   butt_2_text = current_symbol;
					   current_symbol = 'X';
				   }

				   // Updating text to indicate whose turn is this...
				   if (player1_turn)
				   {
					   if (player_vs_player)
					   {
						   label2->Text = "PLAYER 2 TURN";
					   }
					   else
					   {
						   label2->Text = "COMPUTER TURN";
					   }
				   }
				   else
				   {
					   label2->Text = "PLAYER 1 TURN";
				   }
				   player1_turn = !player1_turn;
				   check_game_win();
			   }
		   }


		   void button_3_function()
		   {
			   if (butt_3_text == '\0' && !game_over)
			   {
				   computer_turn = !computer_turn;
				   if (current_symbol == 'X')
				   {
					   button3->Text = "X";
					   butt_3_text = current_symbol;
					   current_symbol = 'O';
				   }
				   else if (current_symbol == 'O')
				   {
					   button3->Text = "O";
					   butt_3_text = current_symbol;
					   current_symbol = 'X';
				   }

				   // Updating text to indicate whose turn is this...
				   if (player1_turn)
				   {
					   if (player_vs_player)
					   {
						   label2->Text = "PLAYER 2 TURN";
					   }
					   else
					   {
						   label2->Text = "COMPUTER TURN";
					   }
				   }
				   else
				   {
					   label2->Text = "PLAYER 1 TURN";
				   }
				   player1_turn = !player1_turn;
				   check_game_win();
			   }
		   }


		   void button_4_function()
		   {
			   if (butt_4_text == '\0' && !game_over)
			   {
				   computer_turn = !computer_turn;
				   if (current_symbol == 'X')
				   {
					   button4->Text = "X";
					   butt_4_text = current_symbol;
					   current_symbol = 'O';
				   }
				   else if (current_symbol == 'O')
				   {
					   button4->Text = "O";
					   butt_4_text = current_symbol;
					   current_symbol = 'X';
				   }

				   // Updating text to indicate whose turn is this...
				   if (player1_turn)
				   {
					   if (player_vs_player)
					   {
						   label2->Text = "PLAYER 2 TURN";
					   }
					   else
					   {
						   label2->Text = "COMPUTER TURN";
					   }
				   }
				   else
				   {
					   label2->Text = "PLAYER 1 TURN";
				   }
				   player1_turn = !player1_turn;
				   check_game_win();
			   }
		   }


		   void button_5_function()
		   {
			   if (butt_5_text == '\0' && !game_over)
			   {
				   computer_turn = !computer_turn;
				   if (current_symbol == 'X')
				   {
					   button5->Text = "X";
					   butt_5_text = current_symbol;
					   current_symbol = 'O';
				   }
				   else if (current_symbol == 'O')
				   {
					   button5->Text = "O";
					   butt_5_text = current_symbol;
					   current_symbol = 'X';
				   }

				   // Updating text to indicate whose turn is this...
				   if (player1_turn)
				   {
					   if (player_vs_player)
					   {
						   label2->Text = "PLAYER 2 TURN";
					   }
					   else
					   {
						   label2->Text = "COMPUTER TURN";
					   }
				   }
				   else
				   {
					   label2->Text = "PLAYER 1 TURN";
				   }
				   player1_turn = !player1_turn;
				   check_game_win();
			   }
		   }

		   void button_6_function()
		   {
			   if (butt_6_text == '\0' && !game_over)
			   {
				   computer_turn = !computer_turn;
				   if (current_symbol == 'X')
				   {
					   button6->Text = "X";
					   butt_6_text = current_symbol;
					   current_symbol = 'O';
				   }
				   else if (current_symbol == 'O')
				   {
					   button6->Text = "O";
					   butt_6_text = current_symbol;
					   current_symbol = 'X';
				   }

				   // Updating text to indicate whose turn is this...
				   if (player1_turn)
				   {
					   if (player_vs_player)
					   {
						   label2->Text = "PLAYER 2 TURN";
					   }
					   else
					   {
						   label2->Text = "COMPUTER TURN";
					   }
				   }
				   else
				   {
					   label2->Text = "PLAYER 1 TURN";
				   }
				   player1_turn = !player1_turn;
				   check_game_win();
			   }
		   }

		   void button_7_function()
		   {
			   if (butt_7_text == '\0' && !game_over)
			   {
				   computer_turn = !computer_turn;
				   if (current_symbol == 'X')
				   {
					   button7->Text = "X";
					   butt_7_text = current_symbol;
					   current_symbol = 'O';
				   }
				   else if (current_symbol == 'O')
				   {
					   button7->Text = "O";
					   butt_7_text = current_symbol;
					   current_symbol = 'X';
				   }

				   // Updating text to indicate whose turn is this...
				   if (player1_turn)
				   {
					   if (player_vs_player)
					   {
						   label2->Text = "PLAYER 2 TURN";
					   }
					   else
					   {
						   label2->Text = "COMPUTER TURN";
					   }
				   }
				   else
				   {
					   label2->Text = "PLAYER 1 TURN";
				   }
				   player1_turn = !player1_turn;
				   check_game_win();
			   }
		   }

		   void button_8_function()
		   {
			   if (butt_8_text == '\0' && !game_over)
			   {
				   computer_turn = !computer_turn;
				   if (current_symbol == 'X')
				   {
					   button8->Text = "X";
					   butt_8_text = current_symbol;
					   current_symbol = 'O';
				   }
				   else if (current_symbol == 'O')
				   {
					   button8->Text = "O";
					   butt_8_text = current_symbol;
					   current_symbol = 'X';
				   }

				   // Updating text to indicate whose turn is this...
				   if (player1_turn)
				   {
					   if (player_vs_player)
					   {
						   label2->Text = "PLAYER 2 TURN";
					   }
					   else
					   {
						   label2->Text = "COMPUTER TURN";
					   }
				   }
				   else
				   {
					   label2->Text = "PLAYER 1 TURN";
				   }
				   player1_turn = !player1_turn;
				   check_game_win();
			   }
		   }

		   void button_9_function()
		   {
			   if (butt_9_text == '\0' && !game_over)
			   {
				   computer_turn = !computer_turn;
				   if (current_symbol == 'X')
				   {
					   button9->Text = "X";
					   butt_9_text = current_symbol;
					   current_symbol = 'O';
				   }
				   else if (current_symbol == 'O')
				   {
					   button9->Text = "O";
					   butt_9_text = current_symbol;
					   current_symbol = 'X';
				   }

				   // Updating text to indicate whose turn is this...
				   if (player1_turn)
				   {
					   if (player_vs_player)
					   {
						   label2->Text = "PLAYER 2 TURN";
					   }
					   else
					   {
						   label2->Text = "COMPUTER TURN";
					   }
				   }
				   else
				   {
					   label2->Text = "PLAYER 1 TURN";
				   }
				   player1_turn = !player1_turn;
				   check_game_win();
			   }
		   }


	private: System::Void check_game_win()
	{
		if ((butt_1_text == 'X' && butt_2_text == 'X' && butt_3_text == 'X') ||
			(butt_4_text == 'X' && butt_5_text == 'X' && butt_6_text == 'X') ||
			(butt_7_text == 'X' && butt_8_text == 'X' && butt_9_text == 'X') ||
			(butt_1_text == 'X' && butt_4_text == 'X' && butt_7_text == 'X') ||
			(butt_2_text == 'X' && butt_5_text == 'X' && butt_8_text == 'X') ||
			(butt_3_text == 'X' && butt_6_text == 'X' && butt_9_text == 'X') ||
			(butt_1_text == 'X' && butt_5_text == 'X' && butt_9_text == 'X') ||
			(butt_3_text == 'X' && butt_5_text == 'X' && butt_7_text == 'X')) {
			// PLAYER 1 WON
			label2->Text = "PLAYER 1 WON!!!";
			game_over = true;
			player_1_games_won += 1;
			if (player_1_games_won < 10)
			{
				label3->Text = "Player 1: 0" + player_1_games_won;
			}
			else
			{
				label3->Text = "Player 1: " + player_1_games_won;
			}
		}
		else if ((butt_1_text == 'O' && butt_2_text == 'O' && butt_3_text == 'O') ||
			(butt_4_text == 'O' && butt_5_text == 'O' && butt_6_text == 'O') ||
			(butt_7_text == 'O' && butt_8_text == 'O' && butt_9_text == 'O') ||
			(butt_1_text == 'O' && butt_4_text == 'O' && butt_7_text == 'O') ||
			(butt_2_text == 'O' && butt_5_text == 'O' && butt_8_text == 'O') ||
			(butt_3_text == 'O' && butt_6_text == 'O' && butt_9_text == 'O') ||
			(butt_1_text == 'O' && butt_5_text == 'O' && butt_9_text == 'O') ||
			(butt_3_text == 'O' && butt_5_text == 'O' && butt_7_text == 'O'))
		{
			// PLAYER 2 / COMPUTER WON
			player_2_comp_games_won += 1;
			if (player_vs_player)
			{
				label2->Text = "PLAYER 2 WON!!!";
				if (player_2_comp_games_won < 10)
				{
					label4->Text = "Player 2: 0" + player_2_comp_games_won;
				}
				else
				{
					label4->Text = "Player 2: " + player_2_comp_games_won;
				}
			}
			else
			{
				label2->Text = "COMPUTER WON!!!";
				if (player_2_comp_games_won < 10)
				{
					label4->Text = "Computer: 0" + player_2_comp_games_won;
				}
				else
				{
					label4->Text = "Computer: " + player_2_comp_games_won;
				}
			}
			game_over = true;
		}
		else if (butt_1_text != '\0' && butt_2_text != '\0' && butt_3_text != '\0' &&
			butt_4_text != '\0' && butt_5_text != '\0' && butt_6_text != '\0' &&
			butt_7_text != '\0' && butt_8_text != '\0' && butt_9_text != '\0')
		{
			// GAME DRAW
			label2->Text = "GAME DRAW!!!";
			game_over = true;
			games_draw += 1;

			if (games_draw < 10)
			{
				label5->Text = "Draw: 0" + games_draw;
			}
			else
			{
				label5->Text = "Draw: " + games_draw;
			}

		}
	}

		   // This function is for computer to mark its box
		   void computer_steps()
		   {
			   if (computer_turn)
			   {
				   int remaining_boxes = 0;
				   if (butt_1_text == '\0')
				   {
					   remaining_boxes += 1;
				   }
				   if (butt_2_text == '\0')
				   {
					   remaining_boxes += 1;
				   }
				   if (butt_3_text == '\0')
				   {
					   remaining_boxes += 1;
				   }
				   if (butt_4_text == '\0')
				   {
					   remaining_boxes += 1;
				   }
				   if (butt_5_text == '\0')
				   {
					   remaining_boxes += 1;
				   }
				   if (butt_6_text == '\0')
				   {
					   remaining_boxes += 1;
				   }
				   if (butt_7_text == '\0')
				   {
					   remaining_boxes += 1;
				   }
				   if (butt_8_text == '\0')
				   {
					   remaining_boxes += 1;
				   }
				   if (butt_9_text == '\0')
				   {
					   remaining_boxes += 1;
				   }

				   int random_number = (double)rand() / (double)((unsigned)RAND_MAX + 1) * (remaining_boxes + 1);
				   if (random_number == 0 && remaining_boxes != 0)
				   {
					   random_number = 1;
				   }
				   if (random_number > remaining_boxes)
				   {
					   random_number = remaining_boxes;
				   }

				   int count_empty_boxes = 0;

				   if (butt_1_text == '\0')
				   {
					   count_empty_boxes += 1;
					   if (random_number == count_empty_boxes)
					   {
						   button_1_function();
					   }
				   }
				   if (butt_2_text == '\0')
				   {
					   count_empty_boxes += 1;
					   if (random_number == count_empty_boxes)
					   {
						   button_2_function();
					   }
				   }
				   if (butt_3_text == '\0')
				   {
					   count_empty_boxes += 1;
					   if (random_number == count_empty_boxes)
					   {
						   button_3_function();
					   }
				   }
				   if (butt_4_text == '\0')
				   {
					   count_empty_boxes += 1;
					   if (random_number == count_empty_boxes)
					   {
						   button_4_function();
					   }
				   }
				   if (butt_5_text == '\0')
				   {
					   count_empty_boxes += 1;
					   if (random_number == count_empty_boxes)
					   {
						   button_5_function();
					   }
				   }
				   if (butt_6_text == '\0')
				   {
					   count_empty_boxes += 1;
					   if (random_number == count_empty_boxes)
					   {
						   button_6_function();
					   }
				   }
				   if (butt_7_text == '\0')
				   {
					   count_empty_boxes += 1;
					   if (random_number == count_empty_boxes)
					   {
						   button_7_function();
					   }
				   }
				   if (butt_8_text == '\0')
				   {
					   count_empty_boxes += 1;
					   if (random_number == count_empty_boxes)
					   {
						   button_8_function();
					   }
				   }
				   if (butt_9_text == '\0')
				   {
					   count_empty_boxes += 1;
					   if (random_number == count_empty_boxes)
					   {
						   button_9_function();
					   }
				   }
			   }
		   }
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
