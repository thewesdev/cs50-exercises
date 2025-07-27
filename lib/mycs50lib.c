#include "mycs50lib.h"

int get_int(string format, ...) {
	bool is_valid_int;
	bool is_negative;
	char s[12];
	int n = 0, len;

	do {
		is_valid_int = true;

		printf("%s", format);
		scanf("%11s", s);

		is_negative = s[0] == '-';

		len = strlen(s);

		for(int i = is_negative ? 1 : 0; i < len; i++) {
			if(s[i] < '0' || s[i] > '9') {
				is_valid_int = false;
				break;
			}
		}
	} while(is_valid_int == false);

	for(int i = is_negative ? 1 : 0; i < len; i++) {
		n = n * 10 + (s[i] - '0');
	}

	return is_negative ? -n : n;
}

#ifdef _WIN32
long long get_long(string format, ...)
#else
long get_long(string format, ...)
#endif
{
	bool is_valid_long;
	bool is_negative;
	char s[21];
	int len;

	#ifdef _WIN32
	long long n = 0;
	#else
	long n = 0;
	#endif

	do {
		is_valid_long = true;

		printf("%s", format);
		scanf("%20s", s);

		is_negative = s[0] == '-';

		len = strlen(s);

		for(int i = is_negative ? 1 : 0; i < len; i++) {
			if(s[i] < '0' || s[i] > '9') {
				is_valid_long = false;
				break;
			}
		}
	} while(is_valid_long == false);

	for(int i = is_negative ? 1 : 0; i < len; i++) {
		n = n * 10 + (s[i] - '0');
	}

	return is_negative ? -n : n;
}

float get_float(string format, ...) {
	bool is_valid_float;
	bool is_negative;
	char s[42];
	string dot_ptr;
	int len, dot_idx;
	float n = 0, dp = 0, f = 0.1;

	do {
		int dot_count = 0;
		is_valid_float = true;

		printf("%s", format);
		scanf("%41s", s);

		is_negative = s[0] == '-';

		len = strlen(s);

		for(int i = is_negative ? 1 : 0; i < len; i++) {
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

	dot_ptr = strchr(s, '.');
	dot_idx = (dot_ptr != NULL) ? dot_ptr - s : len;

	for(int i = is_negative ? 1 : 0; i < len; i++) {
		if(s[i] != '.') {
			if (i < dot_idx) n = n * 10 + (s[i] - '0');
			else {
				dp += (s[i] - '0') * f;
				f /= 10;
			}
		}
	}

	return (is_negative) ? -(n + dp) : n + dp;
}

string get_string(string format, ...) {
	int ch, length = 0, buffer_size = 64;
	string buffer = malloc(buffer_size);

	if(buffer == NULL) {
		fprintf(stderr, "Erro de alocação de memória\n");
		return NULL;
	}

	printf("%s", format);

	while((ch = getchar()) != '\n' && ch != EOF) { 
		if(length + 1 >= buffer_size) {
			string temp = realloc(buffer, buffer_size *= 2);
			if(temp == NULL) {
				fprintf(stderr, "Erro de alocação de memória\n");
				free(buffer);
				return NULL;
			}
			buffer = temp;
		}
		
		buffer[length++] = (char)ch;
	}
	
	buffer[length] = '\0';

	string temp = realloc(buffer, length+1);
	if(temp == NULL) {
		fprintf(stderr, "Erro de alocação de memória\n");
		free(buffer);
		return NULL;
	}
	buffer = temp;

	return buffer;
}