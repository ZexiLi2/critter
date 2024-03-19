#include "farm.h"
Farm::Farm(int space) {
	cout << "Animals in the barn: 0 (Juan is not an animal, he is a divine being)\n";

}
struct granga {
	string name;
	string specie;
};
void Farm::Add() {
	const int MAX_PETS = 5; //nombre màxim de mascotes
	granga pets[MAX_PETS];
	int numPets = 0;        //nombre actual mascotes (juan no conte)

	char morePet;
	do {
		// Check if there is space for more pets
		if (numPets < MAX_PETS) {
			granga newPet;
			cout << "Enter the name of the pet: ";
			cin >> newPet.name;
			cout << "Enter the specie of the pet: ";
			cin >> newPet.specie;
			pets[numPets] = newPet;
			numPets++;
			cout << "A new friend has been added\n";
			cout <<newPet.name<<": \\(^o^)/, " << newPet.name << " is happy to meet you!" << endl;
			cout << "Do you want to add another pet? (y/n/d to display animals): ";
			cin >> morePet;
			if (morePet == 'd' || morePet =='D')
			{
				// Display all pets
				cout << "List of Pets:" << endl;
				for (int i = 0; i < numPets; ++i) {
					cout << "Pet " << i + 1 << ": " << pets[i].name << ", Species: " << pets[i].specie << endl;
				}
				cout << "Do you want to add another pet? (y/n/d to display animals): ";
				cin >> morePet;
			}
		}
		else {
			cout << "Maximum number of pets reached." << endl;
			morePet = 'n';
		} //el usuari pot afegir animals mentre hi hagi menys de 5 animals
	} while (morePet == 'y' || morePet == 'Y' || morePet == 'd' || morePet == 'D');

	// Display all pets
	cout << "List of Pets:" << endl;
	for (int i = 0; i < numPets; ++i) {
		cout << "Pet " << i + 1 << ": " << pets[i].name << ", Species: " << pets[i].specie << endl;
	}
	
}

void Farm::RollCall() const { //no se que és això

}
