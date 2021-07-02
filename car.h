
#ifndef CAR_H
#define CAR_H
#include<string>
#include <iostream> 
#include <vector> 
#include <cstdlib> 
#include <fstream> 
using namespace std;

class car {
public:
	car();
	~car();
	//car(string make, string model, int year);
	void registerNonexistentCar();
	void setCategory(string cat);
private:
	string carMaker;
	string carModel;
	int carYear;
	float carPrice;
	string carVinNum;
	string category;
};
#endif