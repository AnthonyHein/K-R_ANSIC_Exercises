//
//  main.c
//  E5-3
//
//  Created by Anthony Hein on 7/4/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

void strcat2(char *s, char *t);

int main(int argc, const char * argv[]) {
    
    strcat2(argv[1], argv[2]);
    printf("%s\n", argv[1]);
    return 0;
}

// Concatenate strings using pointers.
void strcat2(char *s, char *t) {
    
    for (; *s != '\0'; *s++)
        ;
    
    for (; *t != '\0'; *t++, *s++) {
        *s = *t;
    }
    
    *s = '\0';
}
