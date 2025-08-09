#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "hangman.h"

int main(){

    srand(time(NULL));

    char secret[11];

    int result = get_word(secret);

    if(result){
        return 1;
    }

    printf("%s\n", secret);

    return 0;
}