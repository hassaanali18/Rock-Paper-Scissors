#include<iostream>
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

void menu();
void play();
void rules();
void credits();
void single();
void tournament();
void PVP();
void PVC();
void CVC();
void TPVP();
void TPVC();
void TCVC();
int  BestOf(int&);
void shape(char);
char YourOption();
char CompOption();
void PVCBegins(char, char, string);
void PVPBegins(char, char, string, string);
void CVCBegins(char, char);

void TPVPBegins(char, char, int, string, string);
void TPVCBegins(char, char, int, string);
void TCVCBegins(char, char, int);

char Rock = 'R';
char Scissors = 'S';
char Paper = 'P';

//.................................................................................................................


void shape(char choice)
{

	if (choice == 'R')
	{
		SetConsoleTextAttribute(hStdOut, 1);

		cout << "      ______" << endl;
		cout << " ----'  ____)" << endl;
		cout << "       (_____)" << endl;
		cout << "       (_____)" << endl;
		cout << "       (____)" << endl;
		cout << " ---.__(___)" << endl;
		cout << " Rock" << endl;
	}
	if (choice == 'S')
	{
		SetConsoleTextAttribute(hStdOut, 6);
		cout << "     _______" << endl;
		cout << " ---'   ____)____" << endl;
		cout << "           ______)" << endl;
		cout << "        __________)" << endl;
		cout << "       (____)" << endl;
		cout << " ---.__(___)" << endl;
		cout << " Scissors" << endl;
	}
	if (choice == 'P')
	{
		SetConsoleTextAttribute(hStdOut, 4);
		cout << "     _______" << endl;
		cout << " ---'   ____)____" << endl;
		cout << "           ______)" << endl;
		cout << "           _______)" << endl;
		cout << "          _______)" << endl;
		cout << " ---.__________)" << endl;
		cout << " Paper" << endl;
	}

}



//.................................................................................................................



void menu()
{

	cout << " ==================================================" << endl;
	cout << " Please Choose Any One Of The Following : " << endl << " 1 : Play" << endl << " 2 : Rules" << endl << " 3 : Credits" << endl << " 4 : Exit" << endl;
	cout << " ==================================================" << endl;
	int Enter;
	cin >> Enter;
	while (Enter != 0)
	{
		switch (Enter)
		{
		case 1:
			system("cls");
			play();
			break;
		case 2:
			system("cls");
			rules();
			break;
		case 3:
			system("cls");
			credits();
			break;
		case 4:
			exit(1);
			break;
		case 5:
			cout << "Invalid Input" << endl;
			break;
		}
		cout << " ==================================================" << endl;
		cout << " Please Choose Any One Of The Following : " << endl << " 1 : Play" << endl << " 2 : Rules" << endl << " 3 : Credits" << endl << " 4 : Exit" << endl;
		cout << " ==================================================" << endl;
		cin >> Enter;
	}

	system("pause");
	system("cls");
}

//.................................................................................................................



void rules()
{
	cout << "It Is A Simple Game Of Rock, Paper And Scissors With Following Rules: " << endl;
	cout << "(1) Rock Beats Scissors!!! " << endl << "(2) Scissors Beats Paper!!! " << endl << "(3) Paper Beats Rock!!! " << endl << "Please! Do Not Take This Seriously And Beat Each Other With Real Rock or Paper or cut each other's throat with Scissors" << endl << endl << endl;

	system("pause");
	system("cls");
}


void credits()
{
	cout << "DEVELOPED BY : " << endl;
	cout << "            " << "1. Syed Muhammad Hassaan Ali" << endl << "            " << "2. Saad Aamer" << endl << "            " << "3. Abdullah Saeed" << endl << "            " << "4. Muda Bhao" << endl;
	system("pause");
	system("cls");
}

void play()
{
	int choose;
	cout << " ==================================================" << endl;
	cout << " Please Choose Any One Of The Following : " << endl << " 1 : Singles Match" << endl << " 2 : Tournament" << endl;
	cout << " ==================================================" << endl;
	cin >> choose;
	switch (choose)
	{
	case 1:
		system("cls");
		single();
		break;
	case 2:
		system("cls");
		tournament();
		break;
	default:
		cout << " Invalid Input" << endl;
		break;
	}
}

//.................................................................................................................



void single()
{
	int choice;
	cout << " ==================================================" << endl;
	cout << " Please Choose Any One Of The Following : " << endl << " 1 : Player Vs Player" << endl << " 2 : Player Vs Computer" << endl << " 3 : Computer Vs Computer" << endl;
	cout << " ==================================================" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		system("cls");
		PVP();
		break;
	case 2:
		system("cls");
		PVC();
		break;
	case 3:
		system("cls");
		CVC();
		break;
	default:
		cout << " Invalid Input" << endl;
		break;
	}
}

//.................................................................................................................



void tournament()
{
	int choice;
	cout << endl;
	cout << " ==================================================" << endl;
	cout << " Please Choose Any One Of The Following : " << endl << " 1 : Player Vs Player" << endl << " 2 : Player Vs Computer" << endl << " 3 : Computer Vs Computer" << endl;
	cout << " ==================================================" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		system("cls");
		TPVP();
		break;
	case 2:
		system("cls");
		TPVC();
		break;
	case 3:
		system("cls");
		TCVC();
		break;
	default:
		cout << " Invalid Input" << endl;
		break;
	}
}


//.................................................................................................................


char YourOption()
{
	char choice;
	cout << " ==================================================" << endl;
	cout << " Choose Any One Of The Following: " << endl;
	cout << " Press (R) For Rock " << endl << " Press (P) For Paper " << endl << " Press (S) For Scissors" << endl;
	cout << " ==================================================" << endl;
	cin >> choice;

	while (choice != 'R' && choice != 'S' && choice != 'P')
	{
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " Choose Any One Of The Following: " << endl << endl << endl;
		cout << " Press (R) For Rock " << endl << " Press (P) For Paper " << endl << " Press (S) For Scissors" << endl;
		cout << " ==================================================" << endl;
		cin >> choice;
	}


	system("cls");
	return choice;
}




char CompOption()
{
	int choice = (rand() % 3) + 1;

	if (choice == 1)
	{
		return 'R';
	}
	else if (choice == 2)
	{
		return 'P';
	}
	else if (choice == 3)
	{
		return 'S';
	}
	return 0;
}

//..........................................................................................................................................


void PVC()
{
	char YourChoice, CompChoice;
	string pln1;
	cout << " Enter Your GamerTag : ";
	cin >> pln1;

	YourChoice = YourOption();
	CompChoice = CompOption();


	PVCBegins(YourChoice, CompChoice, pln1);
}




void PVCBegins(char YourChoice, char CompChoice, string pln1)
{

	if (YourChoice == Paper && CompChoice == Scissors)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << "'s Choice : " << YourChoice << endl;
		shape(YourChoice);
		cout << " ==================================================" << endl;
		cout << " Computer's Choice : " << CompChoice << endl;
		shape(CompChoice);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " Computer Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (YourChoice == Paper && CompChoice == Rock)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << "'s Choice : " << YourChoice << endl;
		shape(YourChoice);
		cout << " ==================================================" << endl;
		cout << " Computer's Choice : " << CompChoice << endl;
		shape(CompChoice);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (YourChoice == Paper && CompChoice == Paper)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << "'s Choice : " << YourChoice << endl;
		shape(YourChoice);
		cout << " ==================================================" << endl;
		cout << " Computer's Choice : " << CompChoice << endl;
		shape(CompChoice);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " It Is A Tie" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (YourChoice == Scissors && CompChoice == Paper)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << "'s Choice : " << YourChoice << endl;
		shape(YourChoice);
		cout << " ==================================================" << endl;
		cout << " Computer's Choice : " << CompChoice << endl;
		shape(CompChoice);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (YourChoice == Scissors && CompChoice == Rock)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << "'s Choice : " << YourChoice << endl;
		shape(YourChoice);
		cout << " ==================================================" << endl;
		cout << " Computer's Choice : " << CompChoice << endl;
		shape(CompChoice);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " Computer Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (YourChoice == Scissors && CompChoice == Scissors)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << "'s Choice : " << YourChoice << endl;
		shape(YourChoice);
		cout << " ==================================================" << endl;
		cout << " Computer's Choice : " << CompChoice << endl;
		shape(CompChoice);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " It Is A Tie!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (YourChoice == Rock && CompChoice == Scissors)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << "'s Choice : " << YourChoice << endl;
		shape(YourChoice);
		cout << " ==================================================" << endl;
		cout << " Computer's Choice : " << CompChoice << endl;
		shape(CompChoice);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (YourChoice == Rock && CompChoice == Paper)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << "'s Choice : " << YourChoice << endl;
		shape(YourChoice);
		cout << " ==================================================" << endl;
		cout << " Computer's Choice : " << CompChoice << endl;
		shape(CompChoice);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " Computer Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (YourChoice == Rock && CompChoice == Rock)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << "'s Choice : " << YourChoice << endl;
		shape(YourChoice);
		cout << " ==================================================" << endl;
		cout << " Computer's Choice : " << CompChoice << endl;
		shape(CompChoice);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " It Is A Tie" << endl << endl;
		cout << " ==================================================" << endl;
	}

	system("pause");
	system("cls");
	Sleep(1000);
	menu();
}




//...................................................................................................................



void PVP()
{

	char Player1, Player2;
	string pln1, pln2;
	cout << " Enter Your GamerTag.....(Player 1) : ";
	cin >> pln1;
	cout << " Enter Your GamerTag.....(Player 2) : ";
	cin >> pln2;
	cout << endl;
	cout << " ==================================================" << endl;
	cout << " Player 1 Please Select Your Option : " << endl;
	Player1 = YourOption();
	cout << " ==================================================" << endl;
	cout << " Player 2 Please Select Your Option : " << endl;
	Player2 = YourOption();

	PVPBegins(Player1, Player2, pln1, pln2);

	system("cls");
}



void PVPBegins(char Player1, char Player2, string pln1, string pln2)

{

	if (Player1 == Paper && Player2 == Scissors)
	{
		cout << " ==================================================" << endl;

		cout << " " << pln1 << " Choice : " << Player1 << endl;
		shape(Player1);
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Choice : " << Player2 << endl;
		shape(Player2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Wins!!!" << endl;
		cout << " ==================================================" << endl;

	}
	else if (Player1 == Paper && Player2 == Rock)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Choice : " << Player1 << endl;
		shape(Player1);
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Choice : " << Player2 << endl;
		shape(Player2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Wins!!!" << endl;
		cout << " ==================================================" << endl;

	}
	else if (Player1 == Paper && Player2 == Paper)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Choice : " << Player1 << endl;
		shape(Player1);
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Choice : " << Player2 << endl;
		shape(Player2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " It Is A Tie" << endl;
		cout << " ==================================================" << endl;

	}
	else if (Player1 == Scissors && Player2 == Paper)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Choice : " << Player1 << endl;
		shape(Player1);
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Choice : " << Player2 << endl;
		shape(Player2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Wins!!!" << endl;
		cout << " ==================================================" << endl;

	}
	else if (Player1 == Scissors && Player2 == Rock)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Choice : " << Player1 << endl;
		shape(Player1);
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Choice : " << Player2 << endl;
		shape(Player2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Wins!!!" << endl;
		cout << " ==================================================" << endl;

	}
	else if (Player1 == Scissors && Player2 == Scissors)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Choice : " << Player1 << endl;
		shape(Player1);
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Choice : " << Player2 << endl;
		shape(Player2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " It Is A Tie!!!" << endl;
		cout << " ==================================================" << endl;

	}
	else if (Player1 == Rock && Player2 == Scissors)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Choice : " << Player1 << endl;
		shape(Player1);
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Choice : " << Player2 << endl;
		shape(Player2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Wins!!!" << endl;
		cout << " ==================================================" << endl;

	}
	else if (Player1 == Rock && Player2 == Paper)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Choice : " << Player1 << endl;
		shape(Player1);
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Choice : " << Player2 << endl;
		shape(Player2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Wins!!!" << endl;
		cout << " ==================================================" << endl;

	}
	else if (Player1 == Rock && Player2 == Rock)
	{
		cout << " ==================================================" << endl;
		cout << " " << pln1 << " Choice : " << Player1 << endl;
		shape(Player1);
		cout << " ==================================================" << endl;
		cout << " " << pln2 << " Choice : " << Player2 << endl;
		shape(Player2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " It Is A Tie" << endl;
		cout << " ==================================================" << endl;

	}

	system("pause");
	system("cls");
	Sleep(1000);
	menu();
}




//...........................................................................................................


void CVC()
{
	char Comp1, Comp2;

	Comp1 = CompOption();
	Comp2 = CompOption();

	CVCBegins(Comp1, Comp2);
}



void CVCBegins(char Comp1, char Comp2)
{
	if (Comp1 == Paper && Comp2 == Scissors)
	{
		cout << " ==================================================" << endl;
		cout << " Computer 1's Choice: " << Comp1 << endl;
		shape(Comp1);
		cout << " ==================================================" << endl;
		cout << " Computer 2's Choice: " << Comp2 << endl;
		shape(Comp2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " Computer 2 Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (Comp1 == Paper && Comp2 == Rock)
	{
		cout << " ==================================================" << endl;
		cout << " Computer 1's Choice: " << Comp1 << endl;
		shape(Comp1);
		cout << " ==================================================" << endl;
		cout << " Computer 2's Choice: " << Comp2 << endl;
		shape(Comp2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " Computer 1 Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (Comp1 == Paper && Comp2 == Paper)
	{
		cout << " ==================================================" << endl;
		cout << " Computer 1's Choice: " << Comp1 << endl;
		shape(Comp1);
		cout << " ==================================================" << endl;
		cout << " Computer 2's Choice: " << Comp2 << endl;
		shape(Comp2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " It Is A Tie" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (Comp1 == Scissors && Comp2 == Paper)
	{
		cout << " ==================================================" << endl;
		cout << " Computer 1's Choice: " << Comp1 << endl;
		shape(Comp1);
		cout << " ==================================================" << endl;
		cout << " Computer 2's Choice: " << Comp2 << endl;
		shape(Comp2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " Computer 1 Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (Comp1 == Scissors && Comp2 == Rock)
	{
		cout << " ==================================================" << endl;
		cout << " Computer 1's Choice: " << Comp1 << endl;
		shape(Comp1);
		cout << " ==================================================" << endl;
		cout << " Computer 2's Choice: " << Comp2 << endl;
		shape(Comp2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " Computer 2 Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (Comp1 == Scissors && Comp2 == Scissors)
	{
		cout << " ==================================================" << endl;
		cout << " Computer 1's Choice: " << Comp1 << endl;
		shape(Comp1);
		cout << " ==================================================" << endl;
		cout << " Computer 2's Choice: " << Comp2 << endl;
		shape(Comp2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " It Is A Tie!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (Comp1 == Rock && Comp2 == Scissors)
	{
		cout << " ==================================================" << endl;
		cout << " Computer 1's Choice: " << Comp1 << endl;
		shape(Comp1);
		cout << " ==================================================" << endl;
		cout << " Computer 2's Choice: " << Comp2 << endl;
		shape(Comp2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " Computer 1 Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (Comp1 == Rock && Comp2 == Paper)
	{
		cout << " ==================================================" << endl;
		cout << " Computer 1's Choice: " << Comp1 << endl;
		shape(Comp1);
		cout << " ==================================================" << endl;
		cout << " Computer 2's Choice: " << Comp2 << endl;
		shape(Comp2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " Computer 2 Wins!!!" << endl << endl;
		cout << " ==================================================" << endl;
	}
	else if (Comp1 == Rock && Comp2 == Rock)
	{
		cout << " ==================================================" << endl;
		cout << " Computer 1's Choice: " << Comp1 << endl;
		shape(Comp1);
		cout << " ==================================================" << endl;
		cout << " Computer 2's Choice: " << Comp2 << endl;
		shape(Comp2);
		cout << endl;
		cout << " ==================================================" << endl;
		cout << " It Is A Tie" << endl << endl;
		cout << " ==================================================" << endl;
	}
	system("pause");
	system("cls");
}


//.................................................................................................


int BestOf(int& rounds)
{
	int choice;
	cout << " ==================================================" << endl;
	cout << " Choose Any One Of The Following: " << endl;
	cout << " 1 : Best Of 3 " << endl << " 2 : Best Of 5 " << endl << " 3 : Best Of 7" << endl;
	cout << " ==================================================" << endl;
	cin >> choice;
	while (choice != 0)
	{
		switch (choice)
		{
		case 1:
			rounds = 3;
			system("cls");
			return rounds;
			break;
		case 2:
			rounds = 5;
			system("cls");
			return rounds;
			break;
		case 3:
			rounds = 7;
			system("cls");
			return rounds;
			break;
		}
	}
}


//............................................................................................


void TPVP()
{
	int rounds;
	string pln1, pln2;
	cout << " Enter Your GamerTag....(Player 1)  : ";
	cin >> pln1;
	cout << " Enter Your GamerTag....(Player 2)  : ";
	cin >> pln2;


	BestOf(rounds);

	char Player1, Player2;
	cout << endl;
	cout << " ==================================================" << endl;
	cout << " Player 1 Please Select Your Option : " << endl;
	Player1 = YourOption();
	cout << endl;
	cout << " ==================================================" << endl;
	cout << " Player 2 Please Select Your Option : " << endl;;
	Player2 = YourOption();

	TPVPBegins(Player1, Player2, rounds, pln1, pln2);

	system("cls");
}

void TPVPBegins(char Player1, char Player2, int rounds, string pln1, string pln2)
{
	int j, count = 0, count1 = 0, Tie = 0;
	for (j = 0; j < rounds; j++)
	{
		if (Player1 == Paper && Player2 == Scissors)
		{
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Choice : " << Player1 << endl;
			shape(Player1);
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Choice : " << Player2 << endl;
			shape(Player2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count++;
		}
		else if (Player1 == Paper && Player2 == Rock)
		{
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Choice : " << Player1 << endl;
			shape(Player1);
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Choice : " << Player2 << endl;
			shape(Player2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count1++;
		}
		else if (Player1 == Paper && Player2 == Paper)
		{
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Choice : " << Player1 << endl;
			shape(Player1);
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Choice : " << Player2 << endl;
			shape(Player2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " It Is A Tie" << endl << endl;
			cout << " ==================================================" << endl;
			Tie++;
		}
		else if (Player1 == Scissors && Player2 == Paper)
		{
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Choice : " << Player1 << endl;
			shape(Player1);
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Choice : " << Player2 << endl;
			shape(Player2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count1++;
		}
		else if (Player1 == Scissors && Player2 == Rock)
		{
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Choice : " << Player1 << endl;
			shape(Player1);
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Choice : " << Player2 << endl;
			shape(Player2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count++;
		}
		else if (Player1 == Scissors && Player2 == Scissors)
		{
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Choice : " << Player1 << endl;
			shape(Player1);
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Choice : " << Player2 << endl;
			shape(Player2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " It Is A Tie!!!" << endl << endl;
			cout << " ==================================================" << endl;
			Tie++;
		}
		else if (Player1 == Rock && Player2 == Scissors)
		{
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Choice : " << Player1 << endl;
			shape(Player1);
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Choice : " << Player2 << endl;
			shape(Player2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count1++;
		}
		else if (Player1 == Rock && Player2 == Paper)
		{
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Choice : " << Player1 << endl;
			shape(Player1);
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Choice : " << Player2 << endl;
			shape(Player2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count++;
		}
		else if (Player1 == Rock && Player2 == Rock)
		{
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Choice : " << Player1 << endl;
			shape(Player1);
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Choice : " << Player2 << endl;
			shape(Player2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " It Is A Tie" << endl << endl;
			cout << " ==================================================" << endl;
			Tie++;
		}
		system("pause");
		system("cls");

		cout << "==================================================" << endl;
		cout << "==================================================" << endl;
		cout << pln1 << " = " << count1 << "                          " << endl;
		cout << "                                                                            " << endl;
		cout << pln2 << " = " << count << "                            " << endl;
		cout << "                                                                            " << endl;
		cout << "Tie = " << Tie << "                        " << endl;
		cout << "==================================================" << endl;
		cout << "==================================================" << endl;
		cout << endl;

		if (count1 == count)
		{
			cout << " Next Match Will Decide Who Takes The Lead So Be Careful" << endl << endl;
		}

		if (j <= (rounds - 2))
		{
			cout << " ==================================================" << endl;
			cout << " " << pln1 << " Please Select Your Next Option : " << endl;
			Player1 = YourOption();
			cout << " ==================================================" << endl;
			cout << " " << pln2 << " Please Select Your Next Option : " << endl;
			Player2 = YourOption();
		}

	}


	if (count1 > count)
	{
		cout << " " << pln1 << " Wins!!!" << endl;
		cout << " ==================================================" << endl;
		cout << endl;
	}
	else if (count1 < count)
	{
		cout << " " << pln2 << " Wins!!!" << endl;
		cout << " ==================================================" << endl;
		cout << endl;
	}
	else if (count1 == count)
	{
		cout << " Well Played! But It Seems You Share The Same Power" << endl;
	}




	menu();
}


//............................................................................................


void TPVC()
{
	string pln;
	cout << " Enter Your GamerTag : ";
	cin >> pln;
	int rounds;

	BestOf(rounds);
	char YourChoice, CompChoice;

	YourChoice = YourOption();
	CompChoice = CompOption();


	TPVCBegins(YourChoice, CompChoice, rounds, pln);
}

void TPVCBegins(char YourChoice, char CompChoice, int rounds, string pln)
{
	int j, count1 = 0, count = 0, Tie = 0;
	for (j = 0; j < rounds; j++)
	{
		if (YourChoice == Paper && CompChoice == Scissors)
		{
			cout << " ==================================================" << endl;
			cout << " Your Choice : " << YourChoice << endl;
			shape(YourChoice);
			cout << " ==================================================" << endl;
			cout << " Computer's Choice : " << CompChoice << endl;
			shape(CompChoice);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " Computer Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count1++;
		}
		else if (YourChoice == Paper && CompChoice == Rock)
		{
			cout << " ==================================================" << endl;
			cout << " Your Choice : " << YourChoice << endl;
			shape(YourChoice);
			cout << " ==================================================" << endl;
			cout << " Computer's Choice : " << CompChoice << endl;
			shape(CompChoice);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " " << pln << " Win!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count++;
		}
		else if (YourChoice == Paper && CompChoice == Paper)
		{
			cout << " ==================================================" << endl;
			cout << " Your Choice : " << YourChoice << endl;
			shape(YourChoice);
			cout << " ==================================================" << endl;
			cout << " Computer's Choice : " << CompChoice << endl;
			shape(CompChoice);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " It Is A Tie" << endl << endl;
			cout << " ==================================================" << endl;
			Tie++;
		}
		else if (YourChoice == Scissors && CompChoice == Paper)
		{
			cout << " ==================================================" << endl;
			cout << " Your Choice : " << YourChoice << endl;
			shape(YourChoice);
			cout << " ==================================================" << endl;
			cout << " Computer's Choice : " << CompChoice << endl;
			shape(CompChoice);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " " << pln << " Win!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count++;
		}
		else if (YourChoice == Scissors && CompChoice == Rock)
		{
			cout << " ==================================================" << endl;
			cout << " Your Choice : " << YourChoice << endl;
			shape(YourChoice);
			cout << " ==================================================" << endl;
			cout << " Computer's Choice : " << CompChoice << endl;
			shape(CompChoice);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " Computer Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count1++;
		}
		else if (YourChoice == Scissors && CompChoice == Scissors)
		{
			cout << " ==================================================" << endl;
			cout << " Your Choice : " << YourChoice << endl;
			shape(YourChoice);
			cout << " ==================================================" << endl;
			cout << " Computer's Choice : " << CompChoice << endl;
			shape(CompChoice);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " It Is A Tie!!!" << endl << endl;
			cout << " ==================================================" << endl;
			Tie++;
		}
		else if (YourChoice == Rock && CompChoice == Scissors)
		{
			cout << " ==================================================" << endl;
			cout << " Your Choice : " << YourChoice << endl;
			shape(YourChoice);
			cout << " ==================================================" << endl;
			cout << " Computer's Choice : " << CompChoice << endl;
			shape(CompChoice);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " " << pln << " Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count++;
		}
		else if (YourChoice == Rock && CompChoice == Paper)
		{
			cout << " ==================================================" << endl;
			cout << " Your Choice : " << YourChoice << endl;
			shape(YourChoice);
			cout << " ==================================================" << endl;
			cout << " Computer's Choice : " << CompChoice << endl;
			shape(CompChoice);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " Computer Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count1++;
		}
		else if (YourChoice == Rock && CompChoice == Rock)
		{
			cout << " ==================================================" << endl;
			cout << " Your Choice : " << YourChoice << endl;
			shape(YourChoice);
			cout << " ==================================================" << endl;
			cout << " Computer's Choice : " << CompChoice << endl;
			shape(CompChoice);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " It Is A Tie" << endl << endl;
			cout << " ==================================================" << endl;
			Tie++;
		}

		system("pause");
		system("cls");
		cout << "==================================================" << endl;
		cout << "==================================================" << endl;
		cout << pln << " = " << count << "                        " << endl;
		cout << "                                                                            " << endl;
		cout << "Computer = " << count1 << "                           " << endl;
		cout << "                                                                            " << endl;
		cout << "Tie = " << Tie << "                        " << endl;
		cout << "==================================================" << endl;
		cout << "==================================================" << endl;
		cout << endl;
		if (count1 == count)
		{
			cout << " Next Match Will Decide Who Takes The Lead So Be Careful" << endl << endl;
		}

		if (j <= (rounds - 2))
		{
			YourChoice = YourOption();
			CompChoice = CompOption();
		}
	}

	if (count > count1)
	{
		cout << pln << " Wins!!!" << endl;
		cout << "==================================================" << endl;
	}
	else if (count < count1)
	{
		cout << "Computer Wins!!!" << endl;
		cout << "==================================================" << endl;
	}

	else if (count1 == count)
	{
		cout << " Well Played! But It Seems You Share The Same Power" << endl;
	}


	system("pause");
	system("cls");

	menu();
}


//................................................................................................


void TCVC()
{
	int rounds;
	BestOf(rounds);
	char Comp1, Comp2;

	Comp1 = CompOption();
	Comp2 = CompOption();

	TCVCBegins(Comp1, Comp2, rounds);
}

void TCVCBegins(char Comp1, char Comp2, int rounds)
{
	int j, count = 0, count1 = 0, Tie = 0;

	for (j = 0; j < rounds; j++)
	{
		if (Comp1 == Paper && Comp2 == Scissors)
		{
			cout << " ==================================================" << endl;
			cout << " Computer 1's Choice: " << Comp1 << endl;
			shape(Comp1);
			cout << " ==================================================" << endl;
			cout << " Computer 2's Choice: " << Comp2 << endl;
			shape(Comp2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " Computer 2 Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count++;
		}
		else if (Comp1 == Paper && Comp2 == Rock)
		{
			cout << " ==================================================" << endl;
			cout << " Computer 1's Choice: " << Comp1 << endl;
			shape(Comp1);
			cout << " ==================================================" << endl;
			cout << " Computer 2's Choice: " << Comp2 << endl;
			shape(Comp2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " Computer 1 Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count1++;
		}
		else if (Comp1 == Paper && Comp2 == Paper)
		{
			cout << " ==================================================" << endl;
			cout << " Computer 1's Choice: " << Comp1 << endl;
			shape(Comp1);
			cout << " ==================================================" << endl;
			cout << " Computer 2's Choice: " << Comp2 << endl;
			shape(Comp2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " It Is A Tie" << endl << endl;
			cout << " ==================================================" << endl;
			Tie++;
		}
		else if (Comp1 == Scissors && Comp2 == Paper)
		{
			cout << " ==================================================" << endl;
			cout << " Computer 1's Choice: " << Comp1 << endl;
			shape(Comp1);
			cout << " ==================================================" << endl;
			cout << " Computer 2's Choice: " << Comp2 << endl;
			shape(Comp2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " Computer 1 Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count1++;
		}
		else if (Comp1 == Scissors && Comp2 == Rock)
		{
			cout << " ==================================================" << endl;
			cout << " Computer 1's Choice: " << Comp1 << endl;
			shape(Comp1);
			cout << " ==================================================" << endl;
			cout << " Computer 2's Choice: " << Comp2 << endl;
			shape(Comp2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " Computer 2 Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count++;
		}
		else if (Comp1 == Scissors && Comp2 == Scissors)
		{
			cout << " ==================================================" << endl;
			cout << " Computer 1's Choice: " << Comp1 << endl;
			shape(Comp1);
			cout << " ==================================================" << endl;
			cout << " Computer 2's Choice: " << Comp2 << endl;
			shape(Comp2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " It Is A Tie!!!" << endl << endl;
			cout << " ==================================================" << endl;
			Tie++;
		}
		else if (Comp1 == Rock && Comp2 == Scissors)
		{
			cout << " ==================================================" << endl;
			cout << " Computer 1's Choice: " << Comp1 << endl;
			shape(Comp1);
			cout << " ==================================================" << endl;
			cout << " Computer 2's Choice: " << Comp2 << endl;
			shape(Comp2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " Computer 1 Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count1++;
		}
		else if (Comp1 == Rock && Comp2 == Paper)
		{
			cout << " ==================================================" << endl;
			cout << " Computer 1's Choice: " << Comp1 << endl;
			shape(Comp1);
			cout << " ==================================================" << endl;
			cout << " Computer 2's Choice: " << Comp2 << endl;
			shape(Comp2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " Computer 2 Wins!!!" << endl << endl;
			cout << " ==================================================" << endl;
			count++;
		}
		else if (Comp1 == Rock && Comp2 == Rock)
		{
			cout << " ==================================================" << endl;
			cout << " Computer 1's Choice: " << Comp1 << endl;
			shape(Comp1);
			cout << " ==================================================" << endl;
			cout << " Computer 2's Choice: " << Comp2 << endl;
			shape(Comp2);
			cout << endl;
			cout << " ==================================================" << endl;
			cout << " It Is A Tie" << endl << endl;
			cout << " ==================================================" << endl;
			Tie++;
		}
		system("pause");
		system("cls");
		cout << "==================================================" << endl;
		cout << "==================================================" << endl;
		cout << "Computer 1 = " << count1 << "                        " << endl;
		cout << "                                                                            " << endl;
		cout << "Computer 2 = " << count << "                           " << endl;
		cout << "                                                                            " << endl;
		cout << "Tie = " << Tie << "                        " << endl;
		cout << "==================================================" << endl;
		cout << "==================================================" << endl;
		cout << endl;


		if (count1 == count)
		{

			cout << " Next Match Will Decide Who Takes The Lead So Be Careful" << endl << endl;
		}



		if (j < (rounds - 2))
		{
			Comp1 = CompOption();
			Comp2 = CompOption();
		}


	}

	if (count1 > count)
	{
		cout << "Computer 1 Wins!!!" << endl;
		cout << "==================================================" << endl;
	}
	else if (count1 < count)
	{
		cout << "Computer 2 Wins!!!" << endl;
		cout << "==================================================" << endl;
	}
	else if (count1 == count)
	{
		cout << " Well Played! But It Seems You Share The Same Power" << endl;
	}



	menu();
}
