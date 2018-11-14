#ifndef LAB4_AUTORALLY_H
#define LAB4_AUTORALLY_H
#include "pch.h"
#include "iostream"
#include <string>
using namespace std;

class autorally {
public:
	autorally();
	autorally(string, int, int, int, int, string, string);
	~autorally();
	string getCountry();
	int getDuration();
	int getPrice();
	string getQualityOfRoad();
	string getDateOfAutorally();
	int getLenth();
	int getNumberOfCity();

	string qualityOfRoad;
	int numberOfCity;
protected:
	int lenth;
	string dateOfAutorally;
private:
	string country;
	int duration;
	int price;
};
#endif
