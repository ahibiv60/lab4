#include "pch.h"
#include "iostream"
#include <string>
#include "autorally.h"
using namespace std;
void separation() {
	cout << "**************************************************" << endl;
}
int main() {
	autorally number1("Great Britian", 14, 3000, 3587, 5, "great", 6); //autorally #1
	cout << "Country: " << number1.getCountry() 
		<< "\nDuration(in days): " << number1.getDuration() 
		<< "\nPrice(in euro): " << number1.getPrice() 
		<< "\nLenth is: " << number1.getLenth() 
		<< "\nNumber of cities: " << number1.getNumOfCity() 
		<< "\nQuality of road is: " << number1.getQualityOfRoad() 
		<< "\nNumber of cultures: " << number1.getNumberOfCult() << endl;
	separation();
	autorally number2("USA", 10, 2000, 2464, 4, "good", 5); //autorally #2
	cout << "Country: " << number2.getCountry() 
		<< "\nDuration(in days): " << number2.getDuration() 
		<< "\nPrice(in euro): " << number2.getPrice() 
		<< "\nLenth is: " << number2.getLenth() 
		<< "\nNumber of cities: " << number2.getNumOfCity() 
		<< "\nQuality of road is: " << number2.getQualityOfRoad() 
		<< "\nNumber of cultures: " << number2.getNumberOfCult() << endl;
	separation();
	autorally number3("Germany", 7, 1000, 1436, 3, "bad", 4); //autorally #3
	cout << "Country: " << number3.getCountry() 
		<< "\nDuration(in days): " << number3.getDuration() 
		<< "\nPrice(in euro): " << number3.getPrice() 
		<< "\nLenth is: " << number3.getLenth() 
		<< "\nNumber of cities: " << number3.getNumOfCity() 
		<< "\nQuality of road is: " << number3.getQualityOfRoad() 
		<< "\nNumber of cultures: " << number3.getNumberOfCult() << endl;
	separation();
	return 0;
}