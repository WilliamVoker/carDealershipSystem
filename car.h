
#ifndef CAR_H
#define CAR_H
#include<string>
#include <iostream> 
#include <vector> 
#include <cstdlib> 
#include <fstream> 
#include <iomanip>
using namespace std;

class car {
public:
	car();
	~car();
	car(string make, string model, int year);
	void registerNonexistentCar();
	virtual string setCategory();
	void printCarInformation();
private:
	string maker;
	string model;
	int year;
	float price;
	string vinNum;
	string category;
};
#endif