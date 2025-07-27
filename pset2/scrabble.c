#include "mycs50lib.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word) {
	int p = 0;

	for(int i = 0; i < strlen(word); i++) {
		int ch = word[i];

		if(isalpha(ch)) p += POINTS[tolower(ch) - 'a'];
	}

	return p;
}

int main() {
	string p1_word, p2_word;
	int p1_points, p2_points;

	p1_word = get_string("Player 1: ");
	p2_word = get_string("Player 2: ");

	p1_points = compute_score(p1_word);
	p2_points = compute_score(p2_word);

	if(p1_points > p2_points) {
		printf("Player 1 wins!");
	} else if(p2_points > p1_points) {
		printf("Player 2 wins!");
	} else {
		printf("Tie!");
	}

	return 0;
}
