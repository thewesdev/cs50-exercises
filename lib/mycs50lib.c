#include "mycs50lib.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

int cton(char s) {
	return s - '0';
}

int get_int(char* answer) {
	bool is_valid_int;
	bool is_negative;
	char s[12];
	int n = 0, len;

	do {
		is_valid_int = true;

		printf("%s", answer);
		scanf("%11s", s);

		is_negative = s[0] == '-';

		for(int i = is_negative ? 1 : 0; i < strlen(s); i++) {
			if(s[i] < '0' || s[i] > '9') {
				is_valid_int = false;
				break;
			}
		}
	} while(is_valid_int == false);

	len = strlen(s);

	for(int i = is_negative ? 1 : 0; i < strlen(s); i++) {
		n = n * 10 + cton(s[i]);
	}

	return is_negative ? -n : n;
}

long long get_long(char* answer) {
	bool is_valid_long;
	bool is_negative;
	char s[21];
	int len;
	long long n = 0;

	do {
		is_valid_long = true;

		printf("%s", answer);
		scanf("%20s", s);

		is_negative = s[0] == '-';

		for(int i = is_negative ? 1 : 0; i < strlen(s); i++) {
			if(s[i] < '0' || s[i] > '9') {
				is_valid_long = false;
				break;
			}
		}
	} while(is_valid_long == false);

	len = strlen(s);

	for(int i = is_negative ? 1 : 0; i < len; i++) {
		n = n * 10 + cton(s[i]);
	}

	return is_negative ? -n : n;
}

float get_float(char* answer) {
	bool is_valid_float;
	bool is_negative;
	char s[42];
	char* dot_ptr;
	int len, dot_idx;
	float n = 0, dp = 0;

	do {
		int dot_count = 0;
		is_valid_float = true;
		
		printf("%s", answer);
		scanf("%41s", s);
		
		is_negative = s[0] == '-';

		for(int i = is_negative ? 1 : 0; i < strlen(s); i++) {
			if(s[i] == '.') {
				dot_count++;

				if(dot_count > 1) {
					is_valid_float = false;
					break;
				}
			} else if((s[i] < '0' || s[i] > '9') && s[i] != '.') {
				is_valid_float = false;
				break;
			}
		}
	} while(is_valid_float == false);

	len = strlen(s);
	dot_ptr = strchr(s, '.');
	dot_idx = (dot_ptr != NULL) ? dot_ptr - s : len;

	float f = 0.1;
	for(int i = is_negative ? 1 : 0; i < len; i++) {
		if(s[i] != '.') {
			if (i < dot_idx) n = n * 10 + cton(s[i]);
			else {
				dp += cton(s[i]) * f;
				f /= 10;
			}
		}
	}

	return (is_negative) ? -(n + dp) : n + dp;
}
