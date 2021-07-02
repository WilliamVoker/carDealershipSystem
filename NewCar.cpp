#include "newCar.h"

newCar::newCar() {
	this->carWarrantyProvider = "none";
	this->setCategory("new");
}

void newCar::registerANonexistentCar(){
	car::registerNonexistentCar();
	askUserForWarrantyProvider(carWarrantyProvider);
}

void askUserForWarrantyProvider(string wp) {
	cout << "Warranty Provider: ";
	cin >> wp;
}