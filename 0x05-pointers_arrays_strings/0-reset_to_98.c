#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
/**
 * reset_to_98 - A function that takes a pointer to an int as a parameter
 * and updates value to 98
 * @n: pointer to integer
 *
 * Return: void
 */

void reset_to_98(int *n)
{
    *n = 98;
}

#endif
