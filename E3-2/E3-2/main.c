//
//  main.c
//  E3-2
//
//  Created by Anthony Hein on 7/1/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

void escape(char s[], char t[]);

int main(int argc, const char * argv[]) {
    
    char res[30];
    escape(res, argv[1]);
    printf("%s", res);
    return 0;
}

// Copy t to s while replacing newlines and others with escape seq.
void escape(char s[], char t[]) {
    
    int i, k;
    
    for (i = k = 0; t[i] != '\0'; i++)
        switch (t[i]) {
            case '\t':
                s[k++] = '\\';
                s[k++] = 't';
                break;
            case '\n':
                s[k++] = '\\';
                s[k++] = 'n';
                break;
            default:
                s[k++] = t[i];
                break;
        }
    s[k] = '\0';
}
