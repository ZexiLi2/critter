// JuanTheHorse.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Zexi Li Li
#include <iostream>
#include "Critter.h"

using namespace std;
int main()
{
	Critter juan;
	

	int choice;
	do
	{
		cout << "\nCritter Caretaker\n\n";
		cout << "0 - Leave Juan alone\n";
		cout << "1 - Listen to Juan\n";
		cout << "2 - Feed Juan\n";
		cout << "3 - Play with Juan\n";
		cout << "4 - Study with Juan\n";
		cout << "5 - Get Mood\n\n";
		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 0:
			cout << "Good-bye.\n";
			break;
		case 1:
			juan.Talk();
			break;
		case 2:
			juan.Eat();
			break;
		case 3:
			juan.Play();
			break;
		case 4:
			juan.Study();
			break;
		/*case 5:
			juan.GetMood();
			break;*/

		default:
			cout << "\nSorry, but " << choice << " isn't a valid choice. \n";
		}
		
		} while (choice != 0);
		return 0;
	}
