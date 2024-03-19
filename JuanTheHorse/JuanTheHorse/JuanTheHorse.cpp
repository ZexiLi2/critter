// JuanTheHorse.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Zexi Li Li
#include <iostream>
#include "Critter.h"
#include "farm.h"

using namespace std;

int main()
{
	cout << R"(
   d888888P                                                dP            dP       oo 
      88                                                   88            88          
      88  .d8888b. 88d8b.d8b. .d8888b. .d8888b. .d8888b. d8888P .d8888b. 88d888b. dP 
      88  88'  `88 88'`88'`88 88'  `88 88'  `88 88'  `88   88   88'  `"" 88'  `88 88 
      88  88.  .88 88  88  88 88.  .88 88.  .88 88.  .88   88   88.  ... 88    88 88 
      dP  `88888P8 dP  dP  dP `88888P8 `8888P88 `88888P'   dP   `88888P' dP    dP dP 
                                            .88                                      
                                        d8888P
)" << endl; //title
	Critter juan;
	Farm granja;

	int switchcoice;
	cout << "0 - Leave\n";
	cout << "1 - Add Critter\n";
	cout << "2 - JUAN\n";
	cin >> switchcoice;
	switch (switchcoice) {
	case 0:
		cout << "Good-bye.\n";
		break;
	case 1:
		Farm();
		granja.Add();
		break;
	case 2:
		int choice;
		Critter();
		do
		{
			cout << "\nCritter Caretaker\n\n";
			cout << "0 - Leave Juan alone\n";
			cout << "1 - Listen to Juan\n";
			cout << "2 - Feed Juan\n";
			cout << "3 - Play with Juan\n";
			cout << "4 - Study with Juan\n";
			cout << "Choice: \n";
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
		break;
	default:
		cout << "\nSorry, but " << choice << " isn't a valid choice. \n";
	}
	return 0;
}
