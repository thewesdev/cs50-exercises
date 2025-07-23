#include "mycs50lib.h"
#include <stdio.h>
#include <math.h>

int main() {
	int c = 0, cents;
	float d;

	do {
		d = get_float("Troca devida: ");
	} while(d < 0);

	if(d == 0.0) {
		printf("0\n");

		return 0;
	}

	cents = round(d * 100);

	for(; cents > 0; c++) {
		if(cents >= 25) {
			cents -= 25;
		} else if(cents >= 10) {
			cents -= 10;
		} else if(cents >= 5) {
			cents -= 5;
		} else {
			cents -= 1;
		}
	}

	printf("%d", c);

	return 0;
}
