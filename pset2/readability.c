#include "mycs50lib.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int get_total_letters(string text) {
	int c = 0, len = strlen(text);

	for(int i = 0; i < len; i++) {
		if(isalpha(text[i])) c++;
	}

	return c;
}

int get_total_words(string text) {
	int c = 0, len = strlen(text);

	for(int i = 0; i < len; i++) {
		if(text[i] == ' ') c++;
	}

	c++;

	return c;
}

int get_total_sentences(string text) {
	int c = 0, len = strlen(text);

	for(int i = 0; i < len; i++) {
		if(text[i] == '.' || text[i] == '!' || text[i] == '?') c++;
	}

	return c;
}

int main() {
	int letters = 0, words = 0, sentences = 0, rounded_index;
	float index, l, s;
	string text;

	text = get_string("Texto: ");

	letters = get_total_letters(text);
	words = get_total_words(text);
	sentences = get_total_sentences(text);

	l = ((float)letters / words) * 100;
	s = ((float)sentences / words) * 100;
	index = (0.0588 * l) - (0.296 * s) - 15.8;
	rounded_index = round(index);

	if(rounded_index > 16) printf("Grade 16+");
	else printf("Grade %d", rounded_index);

	return 0;
}
