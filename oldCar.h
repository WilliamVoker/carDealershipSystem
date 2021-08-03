#include "car.h"

class oldCar : public car{
public:
	oldCar();
	void registerNonexistentCar();
	oldCar(string model, string make, int mileage);
	string setCategory();
private:
	int carMileage;
};
