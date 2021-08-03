#include "newCar.h"

newCar::newCar() {
	this->carWarrantyProvider = "none";
}

void newCar::registerANonexistentCar(){
	car::registerNonexistentCar();
	askUserForWarrantyProvider(carWarrantyProvider);
}

newCar::newCar(string warrantyProvider) {
	this->carWarrantyProvider = warrantyProvider;
}

string newCar::setCategory() {
	return "new";
}

void askUserForWarrantyProvider(string wp) {
	cout << "Warranty Provider: ";
	cin >> wp;
}