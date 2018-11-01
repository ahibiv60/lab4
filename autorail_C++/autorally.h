#ifndef LAB4_AUTORALLY_H
#define LAB4_AUTORALLY_H
#include "pch.h"
#include "iostream"
#include <string>
using namespace std;

class autorally {
public:
	autorally();
	autorally(string, int, int, int, int, string, int);
	~autorally();
	void setCountry(string x);
	void setDuration(int x);
	void setPrice(int x);
	void setQualityOfRoad(string x);
	void setNumOfCity(int x);
	string getCountry();
	int getDuration();
	int getPrice();
	string getQualityOfRoad();
	int getNumberOfCult();
	int getLenth();
	int getNumOfCity();
	string qualityOfRoad;
	int numOfCity;
protected:
	int lenth;
	int numberOfCult;
private:
	string country;
	int duration;
	int price;
};
#endif
