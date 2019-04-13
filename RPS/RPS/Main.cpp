#include <iostream>;
#include <cstdlib>;
#include <ctime>;
using namespace std;

int main() 
{
	srand(time(0));
	int Player = 0;
	int Bot = 0;
	int Term = true;
	static int i = 1;
	cout << "Welcome to the game of Rock, Paper, Scissors!" << endl;
	cout << "First to win 3 rounds wins the game!" << endl;
	cout << "You will be playing against the AI named 'Bot.'" << endl;
	cout << "\n1 = Rock\n" << "2 = Paper\n" << "3 = Scissors\n" << endl;
	cout << "Please enter a number between 1 and 3\n" << endl;
	while (Term) 
	{
		cout << "Round " << i << endl;
		int Rand = (rand() % 3) + 1;
		int Num;
	//	cin >> Num;
	if(!(cin >> Num))//I copied this from elsewhere. It means that if cin does not read
	{                               //the expected type, it will cause an error
		std::cout << "Please enter numbers only: ";
		std::cin.clear(); //resets the error flag
		std::cin.ignore(10000, '\n'); //clears the stream buffer
	}

		cout << endl;
		if (Num == 1 | Num == 2 | Num == 3) 
		{
			switch (Num) {
			case 1:
				cout << "You chose Rock. ";
				break;
			case 2:
				cout << "You chose Paper. ";
				break;
			case 3:
				cout << "You chose Scissors. ";
				break;
			default:
				break;
			}
			switch (Rand) {
			case 1:
				cout << "\nBot chose Rock." << endl;
				cout <<endl;
				if (Num == 1) { cout << "DRAW" << endl; }
				if (Num == 2) { cout << /*"Paper beats rock.*/ "Player scores!" << endl; Player++; }
				if (Num == 3) { cout << /*"Rock beats paper.*/ "Bot scores!" << endl; Bot++; }
				i++;
				cout <<endl;
				break;
			case 2:
				cout << "\nBot chose paper." << endl;
				cout <<endl;
				if (Num == 1) { cout << /*"Paper beats rock.*/ "Bot scores!" << endl; Bot++; }
				if (Num == 2) { cout << "DRAW" << endl; }
				if (Num == 3) { cout << /*"Scissors beats paper.*/ "Player scores!" << endl; Player++; }
				i++;
				cout <<endl;
				break;
			case 3:
				cout << "\nBot chose scissors." << endl;
				cout <<endl;
				if (Num == 1) { cout << /*"Rock beats scissors.*/ "Player scores!" << endl; Player++; }
				if (Num == 2) { cout << /*"Scisscors beats paper.*/ "Bot scores!" << endl; Bot++; }
				if (Num == 3) { cout << "DRAW" << endl; }
				i++;
				cout <<endl;
				break;
			default:
				cout << "Bot can't make up it's mind" << endl;
				break;
			}
			//Score is displayed here after each round the switch is executed
				cout << "Score" << endl;
				cout << "Player: " << Player << " Bot: " << Bot << "\n";
				cout << "=====================================================================================================================" <<endl;
		
		}
		else { cout << "Invalid entry. Please try again.\n" << endl; }
		if ((Player == 3) | (Bot == 3 )) 
		{
			if (Player > Bot) { cout << "Player is the winner of the game!" <<endl;
			cout << "\nScore:\n" << Player << " to " << Bot << endl; }
			else if (Bot > Player) { cout << "Bot is the winner of the game!\n" << "\nScore:\n" << Bot << " to " << Player << endl; }
			cout<< endl;
			Term = false;
		}
	}
	system("Pause");
	return 0;
}
