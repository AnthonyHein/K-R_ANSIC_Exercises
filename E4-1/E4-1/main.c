//
//  main.c
//  E4-1
//
//  Created by Anthony Hein on 7/1/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

int strrindex(char s[], char t);

int main(int argc, const char * argv[]) {
    
    printf("%d", strrindex(argv[1], argv[2][0]));
    return 0;
}

int  strrindex(char s[], char t) {
    
    int r = -1;
    
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == t)
            r = i;
    
    return r;
}
