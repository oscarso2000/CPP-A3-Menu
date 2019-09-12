//CS 2024 -- A3
//Written by Oscar So (ons4) 
//September 12, 2019


#include <iostream>
#include "MenuH.h"
using namespace std;

void Menu::showMenu(){
	cout << "---- MENU ----" << endl;
	cout << "(" << MenuItemCode::cPrintMyNameItem << ") Print My Name 3 Times" << endl;
	cout << "(" << MenuItemCode::cSquareANumberItem << ") Square a Number" << endl;
	cout << "(" << MenuItemCode::cQuitItem << ") Quit" << endl;		
}

MenuItemCode Menu::promptUser(){
	cout << "Enter Choice> ";
	int choice;
	cin >> choice;
	return (MenuItemCode) choice;
}

