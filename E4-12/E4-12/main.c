//
//  main.c
//  E4-12
//
//  Created by Anthony Hein on 7/2/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

void itos(int a, char s[]);
int i = 0;

int main(int argc, const char * argv[]) {
    
    char s[20];
    extern int i;
    
    itos(35173124, s);
    s[i] = '\0';
    
    printf("%s\n", s);
    return 0;
}

// integer to string, recursively
void itos(int a, char s[]) {
    
    extern int i;
    
    if (a == 0) return;
    itos(a/10, s);
    s[i++] = '0' + (a % 10);
    
}
