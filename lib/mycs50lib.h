#ifndef MYCS50LIB_H
#define MYCS50LIB_H

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

typedef char* string;

int get_int(string answer);
long long get_long(string answer);
float get_float(string answer);
string get_string(string answer);

#endif
