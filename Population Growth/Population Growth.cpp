/*
Asignment Chapter 5
Population Growth
Program that produces a bar chart showing the population growth of Prairieville for 100 years

Include Libraries
*/
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//Declare Main Function
int main()
{	
	//Introduction
	cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
	cout << "(each * represents 1000 people)\n" << endl;
	string code_creator = "\nCode created by: \nAndres Rodriguez Toca\n";

	//Declare variables and values
	int QTY_STAR, counter, value, star;
	int years[] = { 1910, 1930, 1950, 1970, 1990, 2010 };

	//Read the file
	ifstream inputFile;
	inputFile.open("People.txt");
	
	//Validate if exist People.txt. Otherwise create a new one.
	if (!inputFile) {
		ofstream outputFile;
		outputFile.open("People.txt");

		outputFile << 2000 << endl;
		outputFile << 4000 << endl;
		outputFile << 5000 << endl;
		outputFile << 9000 << endl;
		outputFile << 14000 << endl;
		outputFile << 18000 << endl;

		outputFile.close();
	}
	else {
		//Display each year
		for (counter = 0; counter <= 5; counter++) {
			inputFile >> value;
			//Divide the population by 1000 in order to know tha amount of "*" needed.
			QTY_STAR = value/1000;
			//Use the array to retrieve each year using "counter"
			cout << years[counter] << "  ";
			//Disaply "*" as QTY_STAR value is.
			for (star = 0; star < QTY_STAR; star++) {
				cout << '*';
			}
			//When star it's equal to the amount of QTY_STAR end line and continue looping until "counter" it's <= 5.
			if (star = QTY_STAR) {
				cout << endl;
			}
		}
	}
	//Close File
	inputFile.close();
	//Why not?
	cout << code_creator;
	return 0;
}
