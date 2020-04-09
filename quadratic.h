#ifndef QUADRATIC_h
#define QUADRATIC_h

#include <cmath>

class quadForm{
	private:
		// double values for input
		double input_a;
		double input_b;
		double input_c;
	public:
		// Quadratic function default constructor, empty
		quadForm();

		// Function to set the array values
		void setInputs(double a, double b, double c);

		// Function to calculate the quadratic function(s)
		void calculate();
};

#endif
