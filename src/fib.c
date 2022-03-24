/*
Module: fib.c
Function:
    To print the fibonacci series in user entered number range.
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
|   Function.
|
\****************************************************************************/

/*
Name: fib()
Function:
        To print the fibonacci series in user entered number range.
Definition:
        int fib (int);
    
Parameter and Arguments:
        An integer which is entered by user is passed inside the funtion as argument.
Description:
        It is an int function and returns integer of int type.
Returns:
        Functions returning type int: integer values.
*/

int fibonacci (int num)
    {
    printf("---Inside Fun---\n");
    if (num <= 1)
        {
        printf("---Inside if---\n");
        return num;
        }
    else
        {
        printf("---Inside else---\n");
        return fibonacci(num - 1) + fibonacci(num - 2);
        }
    }