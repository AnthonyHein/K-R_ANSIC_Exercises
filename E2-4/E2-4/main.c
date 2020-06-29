//
//  main.c
//  E2-4
//
//  Created by Anthony Hein on 7/1/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

void squeeze(char s1[], char s2[]);
char res[30];

int main(int argc, const char * argv[]) {
    
    squeeze(argv[1], argv[2]);
    printf("%s", res);
    return 0;
}

// Remove all characters from s1[] that are found in s2[].
void squeeze(char s1[], char s2[]) {
    
    BOOL flag = 0;
    extern char res[30];
    int count = 0;
    
    for (int i = 0; s1[i] != '\0'; i++) {
        flag = FALSE;
        
        for (int j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j])
                flag = TRUE;
        
        if (!flag) {
            res[count] = s1[i];
            count++;
        }
    }
    
    s1 = res;
    
}
