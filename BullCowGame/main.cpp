#include <iostream>
#include <string>

using namespace std;

int main()
{
	// intro to game
	constexpr int WORD_LENGTH = 5;

	cout << "Welcome to Bulls and Cows\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;

	//get a guess from user
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	//repeat the guess back
	cout << "Your guess was: " << Guess << endl;

	//get a guess from user
	cout << "Enter your guess: ";
	getline(cin, Guess);
	//repeat the guess back
	cout << "Your guess was: " << Guess << endl;

	cout << endl;
	return 0;
}