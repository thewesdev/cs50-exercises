#ifndef MYCS50LIB_H
#define MYCS50LIB_H

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

typedef char* string;

int get_int(string format, ...);
float get_float(string format, ...);
string get_string(string format, ...);

#ifdef _WIN32
long long get_long(string format, ...);
#else
long get_long(string format, ...);
#endif

#endif
