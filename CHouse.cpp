#include "CHouse.h"
CHouse::CHouse(void) {
	adress = "Not found ";
	price = 0.00;
	nRoom = 0;
}
CHouse::CHouse(string adress, float price, int nRoom) {
	this->adress = adress;
	this->price = price;
	this->nRoom = nRoom;
}
void CHouse::getData() {
	cin.ignore();
	cout << "enter adress of the house "; getline(cin, adress);
	cout << "enter the price for house "; cin >> price;
	cout << "enter number of rooms "; cin >> nRoom;
}
void CHouse::displayData() {
	cout << "Adress of the house is " << adress << endl;
	cout << "Price for the house is " << price << endl;
	cout << "With " << nRoom << " rooms";

}
void CHouse::housesWithMoreThan10() {
	if (nRoom >= 10)
	{
		displayData();
	}
}
