//
//  main.c
//  E7-1
//
//  Created by Anthony Hein on 7/10/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

#define CASE_DIF 'a' - 'A'

void toLower(char s[]);
void toUpper(char s[]);

int main(int argc, const char * argv[]) {
    
    char input[1000], c;
    int pos = 0;
    
    // Read all input.
    while ((c = getchar()) != EOF)
        input[pos++] = c;
    input[pos] = '\0';
    printf("\n");
    
    ++argv;
    
    switch ((*argv)[1]) {
        case 'u' :
            toUpper(input);
            break;
        case 'l' :
            toLower(input);
            break;
        default : printf("Error: expected -u or -l");
    }
    
    pos = 0;
    while (input[pos])
        putchar(input[pos++]);
    
    return 0;
}

/* Lowercase to uppercase */
void toUpper(char s[]) {
    int pos = 0;
    char c;
    
    while ((c = s[pos])) {
        if (c >= 'a' && s[pos] <= 'z')
            s[pos]= c - (CASE_DIF);
        pos++;
    }
}

/* Uppercase to lowercase */
void toLower(char s[]) {
    int pos = 0;
    char c;
    
    while ((c = s[pos])) {
        if (c >= 'A' && s[pos] <= 'Z')
            s[pos]= c + (CASE_DIF);
        pos++;
    }
}
