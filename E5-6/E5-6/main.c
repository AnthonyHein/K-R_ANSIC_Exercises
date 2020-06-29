//
//  main.c
//  E5-6
//
//  Created by Anthony Hein on 7/4/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>
#include <String.h>

void reverses(char *s);

int main(int argc, const char * argv[]) {
    
    reverses(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}

// Reverse string, pointer version.
void reverses(char *s) {
    
    char *pn;
    pn = &*s;

    while (*s)
        *s++;
    
    *s--;
    
    while (s != pn) {
        char temp = *pn;
        *pn = *s;
        *s = temp;
        *s--;
        if(s == pn) break;
        *pn++;
    }
}
