#include "car.h"

car::car() {
	this->carMaker = "none";
	this->carModel = "none";
	this->carPrice = 0;
	this->carVinNum = "none";
	this->carYear = 0;
	this->category = "none";
}

car::~car() {
	delete this;
}

void car::registerNonexistentCar() {
	askUserForCarAttributesThatAreStrings(carMaker, carModel, carVinNum);
	askUserForcarAttributesThatAreNumbers(carYear, carPrice);
}

void car::setCategory(string cat) {
	this->category = cat;
}

bool car::isCarAttributes(string attribute) {
	if (this->carModel == attribute)
		return true;
	else if (this->carMaker == attribute)
		return true;
	else if (this->carModel == attribute)
		return true;
	else if (to_string(this->carYear) == attribute)
		return true;
	//else
}

//void car::printCarInformation() {
//	cout << "Make: " + carMaker + "\n";
//	cout << "Model: " + carModel + "\n";
//	cout << "Year: ";
//	cout << carYear + "\n";
//}

void askUserForCarAttributesThatAreStrings(string maker,string model,string vinNum) {
	cout << "Car make: ";
	cin >> maker;
	cout << "Car model: ";
	cin >> model;
	cout << "Car vin number: ";
	cin >> vinNum;
}

void askUserForcarAttributesThatAreNumbers(int year, float price) {
	cout << "Car year: ";
	cin >> year;
	cout << "Car price: $";
	cin >> price;
}
