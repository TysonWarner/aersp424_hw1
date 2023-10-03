#include <iostream>
#include <vector>
#include <cmath>
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
double sigmoid(double z)
{
	double sigma = 1 / (1 + exp(-z));
	return sigma;
}
double gradient_sigmoid(double sigma)
{
	double sigmaprime = sigma * (1 - sigma);
	return sigmaprime;
}
double gradient_cost(double y_predict, double y)
{
	double dC = 2 * (y_predict - y);
	return dC;
}
vector<double> gradient_weights(double sigma, double sigmaprime, double y, vector<double> x)
{
	vector<double> dw(x.size());
	for (int i = 0; i < x.size(); i++)
	{
		dw[i] = (2 * (sigma - y)) * (sigmaprime) * x[i];
	}
	return dw;
}
vector<double> update_weights(double alpha, vector<double> w, vector<double> dw)
{
	for (int i = 0; i < w.size(); i++)
	{
		w[i] = w[i] - alpha * dw[i];
	}
	return w;
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
#endif
	// QUESTION 4
	vector<double> w, x;
	w = { 0.0001,0.0001,0.0001 };
	x = { 124,31.89,20.945 };
	double z = dotproduct(w, x);

	// QUESTION 5
	double sigma = sigmoid(z);
	double sigmaprime = gradient_sigmoid(sigma);

	// QUESTION 6
	double y_predict = 0.504421, y = 1.0;
	double dC = gradient_cost(y_predict, y);

	// QUESTION 7
	double alpha = 0.001;
	vector<double> dw = gradient_weights(sigma, sigmaprime, y, x);
	w = update_weights(alpha, w, dw);

	// QUESTION 8











	return 0;
}