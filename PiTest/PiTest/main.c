//
//  main.c
//  PiTest
//
//  Created by Ahmed Tourk on 4/9/18.
//  Copyright © 2018 AhmedTourk. All rights reserved.
//

#include <stdio.h>


void greetHoda(char *str)
{
	printf("%s\n", str);
}


void calc(int a, int b, int *add, int *product)
{
    *add = a+b;
    *product = a*b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    int y;
    
    printf("Hello, World!\n");
    printf("Welcome to my World!\n");
    calc(2,5,&x,&y);
    printf("2 + 5 = %d\n2 x 5 = %d\n", x, y);
    printf("This Commit is added to Trello Board!\n");

    greetHoda("Welcome to MacBook ya Hoda");


    return 0;
}
