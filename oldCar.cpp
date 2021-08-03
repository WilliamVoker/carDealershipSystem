#include "oldCar.h"

oldCar::oldCar() {
	this->carMileage = 0;
}

oldCar::oldCar(string model, string make, int mileage) {
}

void askUserForCarMileage(int cm) {
	cout << "Car Mileage: ";
	cin >> cm;
}

void oldCar::registerNonexistentCar() {
	car::registerNonexistentCar();
	askUserForCarMileage(carMileage);
}

string oldCar:: setCategory() {
	return "old";
}
