#include "CHouse.h"
#include <string>
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	CHouse house[100];
	int menu,infH=0;
	do {
		cout << "------Menu for adding employee\n" <<
			"1 - add new house\n" <<
			"2 - Show all house with more than 10 rooms\n";
		cin >> menu;
		switch (menu) {
		case 0: break;
		case 1: house[infH++].getData();
		case 2: for (int i = 0; i < infH; i++) {
			house[i].housesWithMoreThan10();
		}

		}
	
	
	} while (menu!= 0);
}