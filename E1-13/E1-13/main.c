//
//  main.c
//  E1-13
//
//  Created by Anthony Hein on 6/30/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0

int main(int argc, const char * argv[]) {
    
    char c;
    BOOL in = FALSE;
    int curr = 0;
    int lengths[10] = {0, 0, 0, 0, 0, 0, 0, 0 ,0 ,0};
    
    while ( (c = getchar()) != EOF) {
        if (in && (c == '\t' || c == '\n' || c == ' ')) {
            lengths[curr]++;
            in = FALSE;
            curr = 0;
            while ( (c = getchar()) == '\t' || c == '\n' || c == ' ');
            }
        
        if (c != EOF && in) curr++;
        
        else if (c != EOF) {
            in = TRUE;
            curr = 1;
        }
    }
    
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < lengths[i]; j++)
            printf("X");
        putchar('\n');
    }
    return 0;
}
