#include "mycs50lib.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

bool check_key(string key) {
    if(strlen(key) != 26) {
        printf("A chave deve conter 26 caracteres.\n");
        return false;
    }

    for(int i = 0; i < 26; i++) {
        if(!isalpha(key[i])) {
            printf("A chave não pode conter caracteres especiais, somente letras.\n");
            return false;
        } else {
            for(int j = i+1; j < 26; j++) {
                if(tolower(key[i]) == tolower(key[j])) {
                    printf("A chave não pode ter letras repetidas.\n");
                    return false;
                }
            }
        }
    }

    return true;
}

void cipher_text(string plaintext, string key) {
    int len = strlen(plaintext);

    for(int i = 0; i < len; i++) {
        if(islower(plaintext[i])) {
            int idx = plaintext[i] - 'a';
            plaintext[i] = tolower(key[idx]);
        } else if(isupper(plaintext[i])) {
            int idx = plaintext[i] - 'A';
            plaintext[i] = toupper(key[idx]);
        }
    }
}

int main(int argc, char** argv) {
    if(argc != 2) {
        printf("Uso: ./substitution key\n");
        return 1;
    }

    if(!check_key(argv[1])) return 1;

    string plaintext = get_string("texto simples: ");
    cipher_text(plaintext, argv[1]);

    printf("texto cifrado: %s\n", plaintext);
}