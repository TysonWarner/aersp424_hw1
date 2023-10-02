#include <iostream>
#include <vector>
#include "print.h"
#include "RollRate.h"

using namespace std;

double dotproduct(vector<double> w, vector<double> x)
{
	double z = 0;
	for (int i = 0; i < w.size(); i++)
	{
		z = z + w[i] * x[i];
	}
	return z;
}
int main()
{
#if 0
	// I used an int "question" to adjust the aileron deflection angle (delta) that was being used.
	// I made a separate .cpp and .h file (RollRate.cpp/.h) to get the results for questions 1-3
	// There are separate notes in those files as well

	// QUESTION 1 
	int question = 1;
	cout << RollRate(question) << endl;

	// QUESTION 2
	question = 2;
	cout << "\n\n\n" << RollRate(question) << endl;

	// QUESTION 3
	question = 3;
	cout << "\n\n\n" << RollRate(question) << endl;

	// QUESTION 4
	vector<double> w, x;
	w = { 0.0001,0.0001,0.0001 };
	x = { 124,31.89,20.945 };
	double z = dotproduct(w, x);
	cout << z << endl;
#endif






	return 0;
}