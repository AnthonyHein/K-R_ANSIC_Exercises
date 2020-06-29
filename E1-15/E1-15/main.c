//
//  main.c
//  E1-15
//
//  Created by Anthony Hein on 6/30/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

double FtoC (int f);

int main(int argc, const char * argv[]) {
    printf("%f", FtoC(32));
    return 0;
}

double FtoC (int f) {
    return (f -32) * 5.0 / 9;
}
