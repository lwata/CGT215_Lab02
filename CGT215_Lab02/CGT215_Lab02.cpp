#include <iostream>
using namespace std;
int main() {
	float A;
	float B;
	float X;
	float temp;

	cout << "Hello, my name is Lauryn and I'm going to solve the equation: Ax + B = 0 for x" << endl;
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << endl << "Please enter a value for B: ";
	cin >> B;
	cout << "Solving " << A << "x + " << B << " = 0 for x..." << endl;

	temp = -1 * B;
	X = temp / A;

	cout << "The answer is:\n x = " << X;

}