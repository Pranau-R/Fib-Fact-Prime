/*

Module: main.c

Function:
    To display an user interactive Menu for various functions such as 
    fibonacci series, factorial and prime numbers using switch cases.

Copyright notice:
    This file copyright (C) 2022 by

    MCCI Corporation
    3520 Krums Corners Road
    Ithaca, NY 14850

    An unpublished work. All rights reserved.

    This file is proprietary information, and may not be disclosed or
    copied without the prior permission of MCCI Corporation.

Author:
    Pranau R, MCCI Corporation   March 2022

*/

#include <stdio.h>
#include "operations.h"

/****************************************************************************\
|
|   Global Variable.
|
\****************************************************************************/

int num;

/****************************************************************************\
|
|   Main Function.
|
\****************************************************************************/

/*

Name: main()

Function:
        To display an user interactive Menu for various functions such as 
        fibonacci series, factorial and prime numbers using switch cases.

Definition:
        void main (void);

Returns:
        Functions returning type void: nothing.

*/

void main()
    {
    int ch;

    printf("\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("This is fib_fact_prime.exe v1.0.0\n");
    printf("It can able to find the fibonacci series, and prime numbers in a user given number range.\n");
    printf("It can also find the factorial of user given number.\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");

    printf("\nEnter a Number: \n");
    scanf("%f", &num);
 
    printf("======== MENU ======== \n");
    printf("1. Fibonacci Series: \n");
    printf("2. Factorial: \n");
    printf("3. Prime Numbers: \n");
    printf("4. Modify Range: \n");
    printf("5. Exit: \n");
    printf("\n");

    while(1)
        {
        printf("\nEnter the Choice: \n");
        scanf("%d", &ch);

        switch(ch)
            {
            case 1:
                {
                printf("---You selected fibonacci---\n");
                fibonacci(num);
                printf("The Series:\n");
                int i;
                for (i = 0; i <= num; ++i)
                    {
                    printf("%d\n", fibonacci(num));
                    }
                break;
                }
            case 2:
                {
                return;
                }
            default:
                {
                printf("Invalid Entry!!!\n\n");
                }
            }
        }
    }