//
//  main.c
//  E7-1
//
//  Created by Anthony Hein on 7/10/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define CASE_DIF 'a' - 'A'

void toLower(void);
void toUpper(void);

char input[1000];

int main(int argc, const char * argv[]) {
    
    extern char input[1000], c;
    int pos = 0;
    
    // Read all input.
    while ((c = getchar()) != EOF)
           input[pos++] = c;
    input[pos] = '\0';
    
    ++argv;
    
    switch ((*argv)[1]) {
    case 'u' :
        toUpper();
        break;
    case 'l' :
        toLower();
        break;
    default : printf("Error: expected -u or -l");
    }
    
    return 0;
}

/* Lowercase to uppercase */
void toUpper(void) {
    extern char input[1000];
    int pos = 0;
    
    while (input[pos]) {
        if (input[pos] >= 'a' && input[pos] <= 'z')
            input[pos]= input[pos] - CASE_DIF;
        pos++;
    }
}

/* Uppercase to lowercase */
void toLower(void) {
    extern char input[1000];
    int pos = 0;
    
    while (input[pos]) {
        if (input[pos] >= 'A' && input[pos] <= 'Z')
            input[pos]= input[pos] + CASE_DIF;
        pos++;
    }
}
