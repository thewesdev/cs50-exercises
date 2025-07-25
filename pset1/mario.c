#include "mycs50lib.h"
#include <stdio.h>

int main() {
	int h;

	h = get_int("Digite a altura da pirâmide: ");

	for(int i = 1; i <= h; i++) {
		for(int j = 1; j <= h-i; j++) {
			printf(" ");
		}
		for(int k = 1; k <= i; k++) {
			printf("#");
		}
		printf("\n");
	}

	return 0;
}
