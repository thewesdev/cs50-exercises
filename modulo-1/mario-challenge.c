#include <stdio.h>
#include "mycs50lib.h"

int main() {
	int h;

	do {
		h = get_int("Digite a altura da pirâmide: ");
	} while(h > 8 || h < 1);

	for(int i = 1; i <= h; i++) {
		for(int j = 0; j < h-i; j++) {
			printf(" ");
		}
		for(int k = 0; k < i; k++) {
			printf("#");
		}
		printf(" ");
		for(int l = 0; l < i; l++) {
			printf("#");
		}
		printf("\n");
	}

	return 0;
}
