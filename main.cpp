#include "pch.h"
#include "iostream"
#include <string>
#include "autorally.h"
using namespace std;
void division() {
	cout << "**************************************************" << endl;
}
int main() {
	autorally autorally1("Great Britian", 14, 3000, 3587, 5, "great", "04.06.2018"); //autorally #1
	cout << "Country: " << autorally1.getCountry() 
		<< "\nDuration(in days): " << autorally1.getDuration() 
		<< "\nPrice(in euro): " << autorally1.getPrice() 
		<< "\nLenth is: " << autorally1.getLenth() 
		<< "\nNumber of cities: " << autorally1.getNumberOfCity() 
		<< "\nQuality of road is: " << autorally1.getQualityOfRoad() 
		<< "\nDate of autorally: " << autorally1.getDateOfAutorally() << endl;
	division();
	autorally autorally2("USA", 10, 2000, 2464, 4, "good", "12.05.2018"); //autorally #2
	cout << "Country: " << autorally2.getCountry() 
		<< "\nDuration(in days): " << autorally2.getDuration() 
		<< "\nPrice(in euro): " << autorally2.getPrice() 
		<< "\nLenth is: " << autorally2.getLenth() 
		<< "\nNumber of cities: " << autorally2.getNumberOfCity() 
		<< "\nQuality of road is: " << autorally2.getQualityOfRoad() 
		<< "\nDate of autorally: " << autorally2.getDateOfAutorally() << endl;
	division();
	autorally autorally3("Germany", 7, 1000, 1436, 3, "bad", "25.02.2018"); //autorally #3
	cout << "Country: " << autorally3.getCountry() 
		<< "\nDuration(in days): " << autorally3.getDuration() 
		<< "\nPrice(in euro): " << autorally3.getPrice() 
		<< "\nLenth is: " << autorally3.getLenth() 
		<< "\nNumber of cities: " << autorally3.getNumberOfCity() 
		<< "\nQuality of road is: " << autorally3.getQualityOfRoad() 
		<< "\nDate of autorally: " << autorally3.getDateOfAutorally() << endl;
	division();
	return 0;
}