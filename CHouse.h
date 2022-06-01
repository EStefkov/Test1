#pragma once
#include <string>
#include <iostream>
#include <conio.h>
using namespace std;
class CHouse
{
private:
	string adress;
	float price;
	int nRoom;
public:
	CHouse(void);
	CHouse(string adress, float price, int nRoom);
	void getData();
	void displayData();
	void housesWithMoreThan10();
	
};

