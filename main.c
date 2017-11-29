//
//  main.c
//  Strings2
//
//  Created by Eun Jae Lee on 29/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//  

#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    char name[10];
    int i = 0;
    
    printf("Enter your name: \n");
    scanf("%s",name);
    
    while (name[i] != '\0') {
        printf("%c is stored at %u \n", name[i],&name[i]);
        i++;
        
    }

    
}
