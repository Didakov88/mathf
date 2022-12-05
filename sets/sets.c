#include <stdio.h>
#include "sets.h"

int mf_compare (void* a, unsigned long int sizeA, void* b, unsigned long int sizeB)
{
    char *arrA = (char *)a;
    char *arrB = (char *)b;

    if (sizeA != sizeB){
        return 1;
    }
    
    for (int i=0; i<sizeA; i++){
        arrA += i, arrB += i;
        if (*arrA != *arrB)
            return 2;
    }

    return 3;
}

int mf_subset (void* a, unsigned long int sizeA, void* b, unsigned long int sizeB)
{
    char *arrA = (char *)a;
    char *arrB = (char *)b;
    char *smallerArray = sizeA <= sizeB ? arrA : arrB;
    char *biggerArray = sizeA >= sizeB ? arrA : arrB;
    unsigned long int smallerSize = sizeA <= sizeB ? sizeA : sizeB;
    unsigned long int biggerSize = sizeA >= sizeB ? sizeA : sizeB;

    for (unsigned long int i = 0; i<smallerSize; i++)
    {
        smallerArray += i;
        for (unsigned long int i = 0; i<biggerSize; i++)
        {
            if (*smallerArray == *(biggerArray + i))
            {
                break;
            }

            if ( (i == smallerSize) && (*smallerArray != *(biggerArray + i)))
            {
                return 0;
            }
        }
    }

    return 1;
}