#include "car.h"

class newCar : public car {
public:
	newCar();
	void registerANonexistentCar();
	newCar(string warrantyProvider);
	string setCategory();
private:
	string carWarrantyProvider;
};

