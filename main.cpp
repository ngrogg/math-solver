// Libraries to include
#include <cmath>
#include <cstdlib>
#include <iostream>

// Files to include
//#include "derivative.h"
//#include "quadratic.h"
#include "derivative.cpp"
#include "quadratic.cpp"

using namespace std;

// Enter user input 
char input(){
	char inVal;
	cout << "Enter 'd' to take a derivative" << endl;
	cout << "Enter 'q' to enter a quadratic formula" << endl;
	cout << "Enter 'x' to quit the program" << endl;
	cout << "Enter option: ";
	cin >> inVal;
	return inVal;
}

// Functions
void menu(){
	quadForm quadratic;
	char value = input();
	while(value != 'x'){
		if(value == 'd'){
			cout << "Work in progress" << endl;
		}
		else if(value == 'q'){
			double a, b, c;
			cout << "Enter values for a, b and c" << endl;
			cin >> a >> b >> c;
			quadratic.setInputs(a,b,c);
			quadratic.calculate();
		}
		else{
			cout << "Invalid option" << endl;
		}
		value = input();
	}
};

int main(){
	menu();
	return 0;
}
