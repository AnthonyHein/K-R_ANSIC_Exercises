//
//  main.c
//  E1-9
//
//  Created by Anthony Hein on 6/30/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char c;
    
    while ( (c = getchar()) != EOF) {
        int i = 0;
        while  (c == ' ') { c = getchar(); i++;}
        if (i > 0) putchar(' ');
        putchar(c);
    }
    return 0;
}
