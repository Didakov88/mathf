#include <stdio.h>
#include "mathmacro.h"
#include "sets/sets.h"

int main()
{
    //char testA[] = {'a','b'}; 
    //char testB[] = {'a','b'};
    float testA[] = {1.1,2, 10}; 
    float testB[] = {1.3,2};
    //printf("result is: %d\n", mf_compare(testA, (unsigned long int)(sizeof(testA) / sizeof(testA[0])), testB, (unsigned long int)(sizeof(testB) / sizeof(testA[0]))));
    printf("result is: %d\n", mf_subset(testA, (unsigned long int)(sizeof(testA) / sizeof(testA[0])), testB, (unsigned long int)(sizeof(testB) / sizeof(testA[0]))));
}