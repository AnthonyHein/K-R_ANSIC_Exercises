//
//  main.c
//  E4-14
//
//  Created by Anthony Hein on 7/4/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

#define swap(t, x, y)   {t _z;\
                        _z = x;\
                        x = y;\
                        y = _z;}

int main(int argc, const char * argv[]) {
    
    swap(char *, *++argv, *++argv);
    printf("%s\n%s\n", argv[-1], argv[0]);
    return 0;
}
