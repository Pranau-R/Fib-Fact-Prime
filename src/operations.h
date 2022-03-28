/*

Module: operations.h
Function:
    To declare extern functions and to extern the global variables for performing tasks such as
    fibonacci series, factorial and prime numbers.
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
#ifndef _OPERATIONS_H
#define _OPERATIONS_H

/****************************************************************************\
|
|   Global variable and Functions.
|
\****************************************************************************/

extern int num;

int fibonacci (int);
unsigned long int factorial (int);
int prime (int, int);

#endif