#include "car.h"

class newCar : public car {
public:
	newCar();
	void registerANonexistentCar();
	//newCar(string model, string make, string warrantyProvider);
private:
	string carWarrantyProvider;
};

