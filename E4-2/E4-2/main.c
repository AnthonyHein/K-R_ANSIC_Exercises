//
//  main.c
//  E4-2
//
//  Created by Anthony Hein on 7/2/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define BOOL int
#define TRUE 1
#define FALSE 0


double atofloat(void);

int main(int argc, const char * argv[]) {
    
    printf("%f", atofloat());
    return 0;
}

double atofloat() {
    
    char c;
    double n = 0;
    int count = 0;
    BOOL flag = FALSE;
    BOOL negexp = FALSE;
    int exp = 0;
    
    while ( (c = getchar()) != 'e') {
        if (flag) count++;
        if (c == '.') { flag = TRUE; continue; }
        n *= 10;
        n += c - '0';
    }
    
    if ( (c = getchar()) == '-')
        negexp = TRUE;

    else exp += c - '0';
        
    while ( (c = getchar()) != EOF && c != '\n') {
        exp *= 10;
        exp += c - '0';
    }
    
    double result = (negexp) ? n / (pow(10, count)) / (pow(10, exp)) : n / (pow(10, count)) * (pow(10, exp));
    
    return result;
}
