#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.c"

int main(){
    enum tokens{CAD, SEP, FDT};
    char *caracter;
    int token;
    char lexema [30] = "";

    do{
        caracter = getchar();
        token = get_token(caracter);
        if (token == CAD){
            if(!isspace(caracter))strcat(lexema, &caracter);
        } else if (token == SEP){
            if (strcmp(lexema, "") != 0) write(lexema, CAD);
            write(",", SEP);
            strcpy(lexema, "");
        } else if (token == FDT){
            if (strcmp(lexema, "") != 0) write(lexema, CAD);
            write("", FDT);
        }
    }while(token != FDT);
}
