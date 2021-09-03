#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum token{CAD, SEP, FDT};

int get_token (char caracter){
    if (caracter == ','){
        return SEP;
    }
    else if (caracter == 'E'){
        return FDT;
    }
    else {
        return CAD;
    }
}

void write(char lexema[30], int token){
    if(token == CAD){
        printf("Cadena: %s\n", lexema);
    } else if(token == SEP){
        printf("Separacion: %s\n", lexema);
    } else if(token == FDT){
        printf("Fin De Texto:");
    }
}
