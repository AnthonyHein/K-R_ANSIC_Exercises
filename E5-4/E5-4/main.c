//
//  main.c
//  E5-4
//
//  Created by Anthony Hein on 7/4/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL strend(char *s, char *t);

int main(int argc, const char * argv[]) {
    
    printf("%d\n", strend(argv[1], argv[2]));
    return 0;
}

BOOL strend(char *s, char *t) {
    
    char * pn;
    pn = &*t;
    
    while (*s != '\0') {
        
        while (*s != *t && *s)
            *s++;
        
        while (*s == *t && *s && *t) {
            *s++;
            *t++;
        }
        
        if (!*s && !*t)
            return TRUE;
        
        t = &*pn;
    }
    
    return FALSE;
}
