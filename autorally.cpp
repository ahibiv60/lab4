#include "pch.h"
#include "autorally.h"
#include "iostream"
#include <string>
using namespace std;

autorally::autorally() {
	cout << "constructor" << endl;
}
autorally::autorally(string provisional_country, int provisional_duration, int provisional_price, int provisional_lenth, int provisional_numberOfCity, string provisional_qualityOfRoad, string provisional_dateOfAutorally) {
	country = provisional_country;
	duration = provisional_duration;
	price = provisional_price;
	lenth = provisional_lenth;
	numberOfCity = provisional_numberOfCity;
	qualityOfRoad = provisional_qualityOfRoad;
	dateOfAutorally = provisional_dateOfAutorally;
	cout << "Result:\n" << endl;
}
autorally::~autorally() {
	cout << "destructor" << endl;
}

string autorally::getCountry() {
	return country;
}
int autorally::getDuration() {
	return duration;
}
int autorally::getPrice() {
	return price;
}

string autorally::getQualityOfRoad() {
	return qualityOfRoad;
}
int autorally::getNumberOfCity() {
	return numberOfCity;
}

string autorally::getDateOfAutorally() {
	return dateOfAutorally;
}
int autorally::getLenth() {
	return lenth;
}