//CS 2024 -- A3
//Written by Oscar So (ons4) 
//September 12, 2019

#include <iostream>
using namespace std;

enum MenuItemCode{cUnknownItem = 0, cPrintMyNameItem, cSquareANumberItem, cQuitItem};


class Menu{
	public:
		void showMenu();
		MenuItemCode promptUser();
};


