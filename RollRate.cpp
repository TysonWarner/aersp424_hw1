#include <iostream>
#include "RollRate.h"
using namespace std;
double RollRate()
{
	double delta;
	double deltat = 0.01, Lp = -0.7, Ld = 0.3;
	double p[502], pdot[501];
	p[0] = 1;

	for (int i = 0; i < 501; i++)
	{
		if (deltat * i > 2.0)
		{
			delta = 0.0;
		}
		else
		{
			delta = 1.0;
		}
		pdot[i] = Lp * p[i] + Ld * delta;
		p[i + 1] = p[i] + pdot[i] * deltat;
		cout << deltat * i << "\t" << p[i] << endl;
	}
	return 0;
}