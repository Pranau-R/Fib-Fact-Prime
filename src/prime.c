/*
Module: prime.c
Function:
    To print the prime numbers in user entered number range.
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
Name: prime()
Function:
        To print the prime numbers in user entered number range.
Definition:
        int prime (int, int);
Parameter and Arguments:
        It has two arguments. An iterating integer is passed inside the funtion as one of the argument.
        Also an input integer which is entered by user is passed inside the funtion as arguments.
Description:
        It is an int function and returns integer of int type.
Returns:
        Functions returning type int: integer values.
*/

int prime (int i, int num)
    {
    if (num == i)
        {
        return 0;
        }
    else
        {
        if (num % i == 0)
            {
            return 1;
            }
    else
        return prime (i + 1, num);
        }
    }