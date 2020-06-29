//
//  main.c
//  E2-3
//
//  Created by Anthony Hein on 6/30/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    char c;
    char hex[100];
    
    for (int i = 0; i < 100; i++)
        hex[i] = 0;
    
    // Enter this loop at start of each new line of hex number.
    while ( (c = getchar()) != EOF) {
        
        // Uses 0x format.
        if (c == '0')
            c = getchar();
        
        int i = 0;
        int num = 0;
        
        while ((c = getchar())  != '\n') {
            hex[i] = (c >= '0' && c <= '9') ? c - '0' : c - 'A' + 10;
            i++;
        }
        
        i--;
        
        for (int j = 0; j <= i; j++)
            num += pow(16, i - j) * hex[j];
        printf("%d\n", num);
        
        
    }
    
    return 0;
}
