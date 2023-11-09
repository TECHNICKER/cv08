#include "Logr.h"

int intersection(double* set1, double* set2, double* result)
{
	if (set1[0] > set1[1]) 
	{
		double proxy = set1[0];
		set1[0] = set1[1];
		set1[1] = proxy;
	}
	if (set2[0] > set2[1])
	{
		double proxy2 = set2[0];
		set2[0] = set2[1];
		set2[1] = proxy2;
	}


	if ((set1[0] < set2[0]) && (set2[0] < set1[1]))
	{
		if (set1[1] < set2[1])
		{
			result[0] = set2[0];
			result[1] = set1[1];
			return 1;

		} else {

			result[0] = set2[0];
			result[1] = set2[1];
			return 1;
		}

	} else {

		if ((set2[0] < set1[0]) && (set1[0] < set2[1]))
		{
			if (set2[1] < set1[1])
			{
				result[0] = set1[0];
				result[1] = set2[1];
				return 1;

			} else {

				result[0] = set1[0];
				result[1] = set1[1];
				return 1;
			}

		} else {

			return 0;
		}
	}

}
