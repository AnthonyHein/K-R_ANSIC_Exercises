//
//  main.c
//  E5-10
//
//  Created by Anthony Hein on 7/4/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

struct stack {
    int nitems;
    int *s;
};

// Return top.
int pop(struct stack *stac) {
    stac->s[stac->nitems--] = '\0';
    return stac->s[stac->nitems];
}

// Look at top without returning top.
int peek(struct stack *stac) {
    return stac->s[stac->nitems - 1];
}

// Add to stack.
void push(struct stack *stac, int c) {
    stac->s[stac->nitems++] = c;
}

// Return number of items.
int size(struct stack *stac) {
    return stac->nitems;
}

// Check if digit.
BOOL isDigit (char c) {
    if (c != '\0' && c >= '0' && c <= '9')
        return TRUE;
    else
        return FALSE;
}


int main(int argc, const char * argv[]) {
    
    int nums[20];
    *argv++;        // Skip program name.
    
    struct stack myStack = {0, nums};
    
    // Begin calculation.
    while (--argc) {
        
        int num = 0;
        int op1 = 0;
        int op2 = 0;
        char c = '+';
        
        c = **argv;
        
        switch (c) {
                
            case '+':   op2 = pop(&myStack);
                        op1 = pop(&myStack);
                        push(&myStack, op1 + op2);
                        break;
                
            case '-':   op2 = pop(&myStack);
                        op1 = pop(&myStack);
                        push(&myStack, op1 - op2);
                        break;
                
            case 'x':   op2 = pop(&myStack);
                        op1 = pop(&myStack);
                        push(&myStack, op1 * op2);
                        break;
                
            case '/':   op2 = pop(&myStack);
                        op1 = pop(&myStack);
                        push(&myStack, op1 / op2);
                        break;
                
            default:    while (**argv != '\0') {
                            num = (num * 10) + (**argv - '0');
                            *++*argv;
                        }
                        printf("%d\n", num);
                        push(&myStack, num);
                        break;
        }
        
        *argv++;
    }
    
    printf("%d\n", pop(&myStack));
    
    return 0;
}
