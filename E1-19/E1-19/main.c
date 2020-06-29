//
//  main.c
//  E1-19
//
//  Created by Anthony Hein on 6/30/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // Reverse input one line at a time.
    char rev[100];
    char c;
    int i;
    
    while ( (c = getchar()) != EOF) {
        i = 99;
        while (c != '\n' && c != EOF) {
            rev[i] = c;
            c = getchar();
            i--;
        }
        
        if (i < 99)
            for (i += 1; i < 100; i++)
                putchar(rev[i]);
        
        putchar('\n');
        
    }
}
