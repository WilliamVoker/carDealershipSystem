#include "car.h"

class oldCar : public car {
public:
	oldCar();
	void registerNonexistentCar();
	//oldCar(string model, string make, int mileage);
private:
	int carMileage;
};
