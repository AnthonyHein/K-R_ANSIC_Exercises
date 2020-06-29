//
//  main.c
//  E1-8
//
//  Created by Anthony Hein on 6/30/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char c;
    int nl, bl, t;
    
    while ( (c = getchar()) != EOF) {
        if (c == '\n') nl++;
        else if (c == '\t') t++;
        else if (c == ' ') bl++;
    }
    
    printf("%d newline characters.", nl);
    printf("%d tab characters.", t);
    printf("%d blank spaces.", bl);
    
    return 0;
}
