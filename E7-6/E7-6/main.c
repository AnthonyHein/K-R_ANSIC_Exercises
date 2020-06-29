//
//  main.c
//  E7-6
//
//  Created by Anthony Hein on 7/13/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *fopen(const char *path, const char *mode);
int getc(FILE *stream);
void *malloc(size_t size);
size_t strlen(const char *str);

int main(int argc, const char * argv[]) {
    
    /* Command line arguments are file names. */
    FILE *fp1, *fp2;
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");
    
    char ch1, ch2, line[100], dif1[100], dif2[100];
    int running = 0;
    int run1 = 1;
    int run2 = 1;
    
    ch1 = getc(fp1);
    ch2 = getc(fp2);
    
    while (ch1 != EOF && ch2 != EOF && ch1 == ch2) {
        if (running == 100 || ch1 == '\n')
            running = 0;
        else
            line[running++] = ch1;
        ch1 = getc(fp1);
        ch2 = getc(fp2);
    }
    
    dif1[0] = ch1;
    dif2[0] = ch2;
    line[running] = '\0';
    
    /* Find difference */
    while ((ch1 = getc(fp1)) != '\n'  && ch1 != EOF)
        dif1[run1++] = ch1;
    dif1[run1] = '\0';
    
    while ((ch2 = getc(fp2)) != '\n'  && ch1 != EOF)
        dif2[run2++] = ch2;
    dif2[run2] = '\0';
    
    char *new_str1, *new_str2;
    new_str1 = malloc(strlen(line)+strlen(dif1)+1);
    new_str2 = malloc(strlen(line)+strlen(dif2)+1);
    
    new_str1[0] = '\0';
    strcat(new_str1, line);
    strcat(new_str1, dif1);
    
    new_str2[0] = '\0';
    strcat(new_str2, line);
    strcat(new_str2, dif2);
    
    printf("Two files differ on these line: \n%s\n%s\n", new_str1, new_str2);
    
    fclose(fp1);
    fclose(fp2);
    
    return 0;
}
