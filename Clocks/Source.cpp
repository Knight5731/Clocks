/*
Name: Logan Teske
Date: 1/27/2024
Class: cs-210-R3200
Description: A 12-hour and 24-hour clock
Assignment: Module 3 Project 1: Chada Tech Clocks
*/

#include <iostream>
using namespace std;

//Putting variables before main so they that are Global Variables
int hour = -1;
int minute = -1;
int second = -1;
int hour24; //Need a second variable for the 24 hour clock to make checking when the clock needs to go to 0 easier.
int menuInput; //Using int to make reading it easier and using the switch later will be easier.
bool exitCheck = true; //When the user enters 4 in the menu, this will become false to exit the program.
int displaySet = 0; //When the 12 hour clock would go above, this will switch to 1 and cause the 12 hour clock to display properly.


void PrintTime12() {

	if (second == 60) {
		second = 0;
		minute++;
	}
	//to make sure that when the user is printing, the time is possible.

	if (minute == 60) {
		minute = 0;
		hour++;
	}
	//To ensure that the time printed is actually possible.

	if (hour > 24) {
		hour = 1;
	}
	//I found that the clock could go over 24, so i am adding this to ensure that doesn't happen.

	if (hour > 12) {
		displaySet = 1;
	}
	else if (hour < 13) {
		displaySet = 0;
	}
	//To determine if the clock needs to reset every time the function is called.

	if (displaySet == 0 && hour < 10) {
		cout << "0" << hour << ":";
	}
	else if (displaySet == 0 && hour < 13) {
		cout << hour << ":";
	}
	else if (displaySet == 1 && hour < 22) {
		cout << "0" << hour - 12 << ":";
	}
	else {
		cout << hour - 12 << ":";
	}
	//The above code determines what should be put for the hour slot when displaying the 12 hour clock.

	if (minute < 10) {
		cout << "0" << minute << ":";
	}
	else {
		cout << minute << ":";
	}
	//The above code determines if the 0 is needed in front of the minute to ensure spacing.

	if (second < 10) {
		cout << "0" << second << " ";
	}
	else {
		cout << second << " ";
	}
	//The above code determines if the 0 is needed in front of the second to ensure spacing.

	if (displaySet == 0) {
		cout << "A M ";
	}
	else {
		cout << "P M ";
	}
}

void PrintTime24() {

	if (second == 60) {
		second = 0;
		minute++;
	}
	//to make sure that when the user is printing, the time is possible.

	if (minute == 60) {
		minute = 0;
		hour++;
	}
	//To ensure that the time printed is actually possible.

	if (hour < 10) {
		cout << "   0" << hour << ":";
	}
	else {
		cout << "   " << hour << ":";
	}
	//The 24 hour clock doesn't need more checks for hour after this as it doesn't need AM or PM.

	if (minute < 10) {
		cout << "0" << minute << ":";
	}
	else {
		cout << minute << ":";
	}
	//To ensure proper spacing, the program will check if the 0 is needed.

	if (second < 10) {
		cout << "0" << second << "  ";
	}
	else {
		cout << second << "  ";
	}
	//The Spaces are to ensure proper spacing with the rest of the clock.
}

	//Displays the time with both Clocks
void PrintClocks() {
	cout << "*************************   ************************* " << endl;
	cout << "*     12-Hour Clock     *   *     24-Hour Clock     * " << endl;
	cout << "*     "; PrintTime12(); cout << "     *   *     "; PrintTime24(); cout << "     * " << endl; //If I wanted to use functions to print the Time, this was the only way it would work. 
	cout << "*************************   ************************* " << endl;
	//I did it this way to ensure even spacing when displayed and to visualize it easier.
}

	//Displays the Menu
void PrintMenu() {
	cout << "*************************" << endl;
	cout << "* 1 - Add One Hour      *" << endl;
	cout << "* 2 - Add One Minute    *" << endl;
	cout << "* 3 - Add One Second    *" << endl;
	cout << "* 4 - Quit Program      *" << endl;
	cout << "*************************" << endl;
	//The spacing was chossen to line up with the 12 hour clock when it is goint to be displayed.
}

	//How the user interacts with the menu
void MenuInteract() {

	switch(menuInput) {
	case 1:
		++hour;
		break;
	case 2:
		++minute;
		break;
	case 3:
		++second;
		break;
	case 4:
		cout << "Exiting Program. Thank you for allowing me to tell time." << endl;
		exitCheck = false;
		break;
	default:
		cout << "That is not a valid input, please enter 1, 2, 3, or 4." << endl;
		break;
	}
	//The switch case ends up being very simple as it is mainly just changing variables.
}


int main() {

	while (hour < 0 || minute < 0 || second < 0) {
		//The loop doesn't allow the user to continue until they input a valid starting time.
		cout << "Please enter your starting time as 'hour minute second' with the spaces to have correct timing." << endl;

		cin >> hour;
		cin >> minute;
		cin >> second;

		if (hour > 24 || hour < 0) {
			cout << "Please enter a valid number of hours" << endl;
			hour = -1;
		}
		else if (minute > 60 || minute < 0) {
			cout << "Please enter a valid number of minutes" << endl;
			minute = -1;
		}
		else if (second > 60 || second < 0) {
			cout << "Please enter a valid number of seconds" << endl;
			second = -1;
		}
		//Checking to ensure that the time they enter is possible on an actual clock.

	}

	while (exitCheck) {
		PrintClocks();
		PrintMenu();
		cin >> menuInput;
		MenuInteract();
	}


	return 0;
}