#include "oldCar.h"

oldCar::oldCar() {
	this->carMileage = 0;
	this->setCategory("old");
}

void oldCar::registerNonexistentCar() {
	car::registerNonexistentCar();
	askUserForCarMileage(carMileage);
}

void askUserForCarMileage(int cm) {
	cout << "Car Mileage: ";
	cin >> cm;
}