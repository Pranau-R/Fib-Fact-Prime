/*
Module: fact.c
Function:
    To print the factorial of a number entered by user.
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
Name: factorial()
Function:
        To print the factorial of a number entered by user.
Definition:
        unsigned long int factorial (int);
    
Parameter and Arguments:
        An integer which is entered by user is passed inside the funtion as argument.
Description:
        It is an unsigned long int function and returns integer of int type.
Returns:
        Functions returning type int: integer values.
*/

unsigned long int factorial(unsigned int num)
    {
    if (num <= 1)
        {
        return 1;
        }
    else
        {
        return num * factorial(num - 1);
        }
    }