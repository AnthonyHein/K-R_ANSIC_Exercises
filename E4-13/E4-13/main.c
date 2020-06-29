//
//  main.c
//  E4-13
//
//  Created by Anthony Hein on 7/2/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void reverse(char s[], int a, int b);


int main(int argc, const char * argv[]) {
    
    
    char s[] = "racecar";
    char t[] = "Anthony";
    
    reverse(s, 0, (int) strlen(s) - 1);
    reverse(t, 0, (int) strlen(t) - 1);
    
    printf("%s\n%s", s, t);
    return 0;
}

// Reverse a string recursively in place.
void reverse(char s[], int lt, int gt) {
    printf("lt: %d, gt: %d\n", lt, gt);
    if (lt >= gt) return;
    reverse(s, lt + 1, gt - 1);
    char x = s[lt];
    char y = s[gt];
    s[lt] = y;
    s[gt] = x;
    
}
