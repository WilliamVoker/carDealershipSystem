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
