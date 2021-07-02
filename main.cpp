#include<iostream>
using namespace std;

int main(){
	//pullInventoryFromTextFile();

	while (true) {
		displayTheDealershipMenu();
		pickMenuOption();
	}

	//pushInventoryToTextFile();
}

void displayTheDealershipMenu() {
	cout << "1. Search Inventory\n";
	cout << "2. Sell/Lease Car\n";
	cout << "3. Return a leased Car\n";
	cout << "4. Add Cars to Inventory\n";
	cout << "5. Exit\n";
}

int pickMenuOption() {
	int option = askUserForOption();
	switch (option) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5: 
			break;
	}
	return option;
}

int askUserForOption() {
	int option;
	cout << "\nEnter an option(1-5): ";
	cin >> option;
	return option;
}

void searchCarInventoryByAttribute(vector <car>) {
}

void sellCar() {
}

void leaseCar() {
}

void returnLeasedCar() {
}

void addCarToInventory() {
}

void pushInventoryToTextFile() {
}

void pullInventoryFromTextFile() {
}