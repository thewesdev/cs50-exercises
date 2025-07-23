#include "mycs50lib.h"
#include <string.h>
#include <stdio.h>

void print_card_brand(char* s) {
	if(s[0] == '3' && (s[1] == '4' || s[1] == '7')) {
		printf("AMEX\n");
	} else if((cton(s[0]) * 10 + cton(s[1])) >= 51 && (cton(s[0] * 10) + cton(s[1])) <= 55) {
		printf("MASTERCARD\n");
	} else if(s[0] == '4') {
		printf("VISA\n");
	}
}

int is_valid_number_card(char* s) {
	int sum = 0;
	for(int i = strlen(s) - 2; i >= 0; i -= 2) {
		int t = cton(s[i]) * 2;
		if (t >= 10) sum += t % 10 + 1;
		else sum += t;
	}

	for(int j = strlen(s) - 1; j >= 1; j -= 2) {
		int t = cton(s[j]);
		sum += t;
	}

	return (sum % 10 == 0) ? 1 : 0;
}

int main() {
	long number_card;
	char s[16];

	number_card = get_long("Numero: ");

	sprintf(s, "%ld", number_card);

	if(is_valid_number_card(s) == 1) {
		print_card_brand(s);
	} else {
		printf("INVALID\n");
	}

	return 0;
}
