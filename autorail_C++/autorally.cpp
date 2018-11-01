#include "pch.h"
#include "autorally.h"
#include "iostream"
#include <string>
using namespace std;

autorally::autorally() {
	cout << "constructor" << endl;
}
autorally::autorally(string tp_country, int tp_duration, int tp_price, int tp_lenth, int tp_numOfCity, string tp_qualityOfRoad, int tp_numberOfCult) {
	country = tp_country;
	duration = tp_duration;
	price = tp_price;
	lenth = tp_lenth;
	numOfCity = tp_numOfCity;
	qualityOfRoad = tp_qualityOfRoad;
	numberOfCult = tp_numberOfCult;
	cout << "Result\n" << endl;
}
autorally::~autorally() {
	cout << "destructor" << endl;
}
/////////////////////////////PRIVATE///////////////////////////////////
void autorally::setCountry(string x) {
	country = x;
}
void autorally::setDuration(int x) {
	duration = x;
}
void autorally::setPrice(int x) {
	price = x;
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
////////////////////////////PROTECTED//////////////////////////////////
void autorally::setQualityOfRoad(string x) {
	qualityOfRoad = x;
}
void autorally::setNumOfCity(int x) {
	numOfCity = x;
}
string autorally::getQualityOfRoad() {
	return qualityOfRoad;
}
int autorally::getNumOfCity() {
	return numOfCity;
}
//////////////////////////////PUBLIC//////////////////////////////////
int autorally::getNumberOfCult() {
	return numberOfCult;
}
int autorally::getLenth() {
	return lenth;
}
