#include "car.h"

car::car() {
	this->maker = "";
	this->model = "";
	this->year = 1886;
	this->vinNum = "";
	this->price = 0;
	this->category = "";
}

car::~car() {
	delete this;
}

car::car(string make, string model, int year) {
	this->maker = make;
	this->model = model;
	this->year = year;
}

void car::registerNonexistentCar() {
	askUserForCarAttributesThatAreStrings(maker, model, vinNum);
	askUserForcarAttributesThatAreNumbers(year, price);
}

void car::printCarInformation() {
	const int COLMN1 = 10;
	const int COLMN2 = 15;
	cout << setw(COLMN2) << left << maker << setw(COLMN2) << left << model
		<< setw(COLMN1) << left << year << setw(25) << left << vinNum << setw(COLMN1)
		<< left << price << endl;
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
