//
//  main.c
//  E1-12
//
//  Created by Anthony Hein on 6/30/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char c;
    
    while ((c = getchar()) != EOF) {
        while (c != ' ' && c != '\t' && c != '\n') {
            putchar(c);
            c = getchar();
        }
        putchar('\n');
    }
    return 0;
}
