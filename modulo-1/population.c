#include "mycs50lib.h"
#include <stdio.h>

int main() {
	int initial_population, population, end_population;

	do {
		initial_population = get_int("Start size: ");
	} while(initial_population < 9);

	do {
		end_population = get_int("End size: ");
	} while(end_population < initial_population);

	population = initial_population;

	int temp = 0, n = 0;
	while(population < end_population) {
		temp = population;
		population += temp / 3;
		population -= temp / 4;

		n++;
	}

	printf("Years: %d\n", n);

	return 0;
}
