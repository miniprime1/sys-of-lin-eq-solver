#include <iostream>
#include <stdexcept>
using namespace std;

struct answer {
	double x;
	double y;
};

double input(string prompt) {
	double input;
	cout << prompt;
	cin >> input;
	return input;
}

int main() {
	double a, b, c, d, e, f, x, y;

	cout << "System of Linear Equation Solver v1.0" << endl;
	cout << endl;

	cout << "Equation: {ax+by=c, dx+ey=f}" << endl;
	cout << "Input: a, b, c, d, e, f" << endl;
	cout << "Output: x, y" << endl;
	cout << endl;

	a = input("Enter a: ");
	b = input("Enter b: ");
	c = input("Enter c: ");
	d = input("Enter d: ");
	e = input("Enter e: ");
	f = input("Enter f: ");
	cout << endl;

	cout << "Result: ";

	if (a * e - b * d == 0) {
		if ((a / d == b / e) || (b / e == c / f) || (c / f == a / d)) {
			cout << "There is infinite solutions";
		}
		else {
			cout << "There is no solution";
		}
	}
	else {
		x = (e * f - b * c) / (a * e - b * d);
		y = (a * f - c * d) / (a * e - b * d);
		cout << "x = " << x << ", y = " << y << endl;
	}

	return 0;
}