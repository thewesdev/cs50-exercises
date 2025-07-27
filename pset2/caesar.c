#include "mycs50lib.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

void ceasar_cipher(string plaintext, int key) {
    int len = strlen(plaintext), mod_key = key % 26;

    if(mod_key < 0) mod_key += 26;

    for(int i = 0; i < len; i++) {
        char ch = plaintext[i];
        
        if(isupper(ch)) plaintext[i] = ((ch - 'A' + mod_key) % 26) + 'A';
        else if(islower(ch)) plaintext[i] = ((ch - 'a' + mod_key) % 26) + 'a';
        else plaintext[i] = ch;
    }
}

int main(int argc, string argv[]) {
    if(argc == 1) {
        printf("Usage: ./caesar key\n");
        exit(1);
    } else if(argc >= 3) {
        printf("Usage: ./caesar key\n");
        exit(1);
    } else {
        for(int i = (argv[1][0] == '-') ? 1 : 0; i < strlen(argv[1]); i++) {
            if(!isdigit(argv[1][i])) {
                printf("Usage: ./caesar key\n");
                exit(1);
            }
        }
    }

    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext: ");
    ceasar_cipher(plaintext, key);

    printf("ciphertext: %s\n", plaintext);
}