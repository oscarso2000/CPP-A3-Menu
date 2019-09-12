//CS 2024 -- A3
//Written by Oscar So (ons4) 
//September 12, 2019


#include <iostream>
#include "MenuH.h"

using namespace std;

//Print your name 3 times: printMyName
void printMyName(){
	string name = "Oscar";
	for (int i = 0; i<3; i++){
		cout << name << endl;
	}
}

//Prompt the user for an integer and then print out the square of
//that number: squareANumber.
void squareANumber(){
	cout << "Enter a number to be squared> ";
	int square;
	cin >> square;
	int total = square * square;
	cout << square << " squared is " << total << endl;
}

int main(int argc, char *argv[]){
	Menu menu;
	bool cont = true;
	while (cont  == true){
		menu.showMenu();
		switch(menu.promptUser()){
			case cPrintMyNameItem:
				printMyName();
				break;
			case cSquareANumberItem:
				squareANumber();
				break;
			case cQuitItem:
				cout << "Quitting" << endl;
				cont = false;
				break;
			case cUnknownItem:
				cout << "Unknown Selection" << endl;
				break;
		}
	}
}
