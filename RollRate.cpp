#include <iostream>
#include "RollRate.h"
using namespace std;
double RollRate(int question)
{
	double deltat = 0.01, Lp = -0.7, Ld = 0.3, alpha = -0.065;
	double p[502], pdot[501], delta[501], K[502];
	p[0] = 1.0;
	K[0] = 2.0;

	for (int i = 0; i < 501; i++)
	{
		if (question == 1)
		{
			if (deltat * i > 2.0)
			{
				delta[i] = 0.0;
			}
			else
			{
				delta[i] = 1.0;
			}
		}
		else if (question == 2)
		{
			K[i] = 2.0;
			delta[i] = -K[i] * p[i];
		}
		else
		{
			delta[i] = -K[i] * p[i];
			K[i + 1] = K[i] + alpha * p[i] * p[i];
		}

		pdot[i] = Lp * p[i] + Ld * delta[i];
		p[i + 1] = p[i] + pdot[i] * deltat;
		cout << deltat * i << "\t\t" << p[i] << endl;
	}
	return 0;
}