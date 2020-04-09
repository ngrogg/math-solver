#include "quadratic.h"

#include <cmath>
#include <iostream>

using namespace std;

// Empty constructor
quadForm::quadForm()
{}

// Function to set the array values
void quadForm::setInputs(double a, double b, double c){
	input_a = a;
	input_b = b;
	input_c = c;
}

// Function to calculate the quadratic function(s)
void quadForm::calculate(){

	// Instantiate variables to hold +- quadratic values
	double plus, minus, d;
	d = (input_b * input_b) - (4*input_a*input_c);
	
	// check if d is negative 
	if (d >= 0){
		plus  = (-input_b+sqrt(d))/(2.0*input_a);
		minus = (-input_b-sqrt(d))/(2.0*input_a);
		cout << "+ = " << plus << endl;
		cout << "- = " << minus << endl;
	}
	else {
		cout << "Cannot take square root of a negative" << endl;
		d = d*(-1);
		plus  = (-input_b+sqrt(d))/(2.0*input_a);
		minus = (-input_b-sqrt(d))/(2.0*input_a);
		cout << "+ = " << plus << "i" << endl;
		cout << "- = " << minus << "i" << endl;
	}
}
