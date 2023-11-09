#include "cv08.h"
#include "Logr.h"

int main()
{
	double set_boundaries_1[2] = {};
	double set_boundaries_2[2] = {};
	double result[2] = {};
	bool intersection_exists = false;

	while (1)
	{
		printf("zadejte hranice prvniho intervalu, ve tvaru 'v, w':\n");
		scanf("%lf, %lf", &set_boundaries_1[0], &set_boundaries_1[1]);

		printf("zadejte hranice druheho intervalu, ve tvaru 'x, y':\n");
		scanf("%lf, %lf", &set_boundaries_2[0], &set_boundaries_2[1]);

		intersection_exists = intersection(set_boundaries_1, set_boundaries_2, result);

		if (intersection_exists == true)
		{
			printf("prunik zadanych intervalu je (%lf; %lf)\n\n", result[0], result[1]);
		}
		else {
			printf("prunik zadanych intervalu neexistuje\n\n");
		}
	}

	return 0;
}
