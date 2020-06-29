//
//  main.c
//  E1-23
//
//  Created by Anthony Hein on 6/30/19.
//  Copyright © 2019 Anthony Hein. All rights reserved.
//

#include <stdio.h>

#define MAXLINE 1000
#define BOOL    int
#define TRUE    1
#define FALSE   0

int main(int argc, const char * argv[]) {
    
    char line[MAXLINE], c;
    char save;
    int l = 0;
    BOOL inString = FALSE;
    
    while ( (c = getchar()) != EOF) {
        
        if (c == '/' && !inString) {
            save = c;
            c = getchar();
            
            // Single line comment, ends at newline.
            if (c == '/')
                while ( (c = getchar()) != EOF && c != '\n');
            
            // Multi-line variable length comment, ends with */
            else if (c == '*') {
                while ( (c = getchar()) != EOF)
                    if ( c == '*')
                        if ( (c = getchar()) == '/')
                            break;
            }
            
            // Not a comment.
            else {
                line[l] = save;
                l++;
            }
                        
        }
        
        else if (c == '\n') {
            line[l] = '\0';
            
            for (int i = 0; line[i] != '\0'; i++)
                putchar(line[i]);
            
            putchar('\n');
            
            l = 0;
        }
        
        else if (c == '"' && !inString) {
            line[l] = c;
            inString = TRUE;
            l++;
        }
        
        else if (c == '"' && inString) {
            line[l] = c;
            inString = FALSE;
            l++;
        }
        
        else {
            line[l] = c;
            l++;
        }
    }
    
    return 0;
}
