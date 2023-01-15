#include "header.h"
#include <stdlib.h>
#include <stdio.h>

header_t *function1(uint8_t num1, uint8_t num2)
{
    header_t* res = (header_t*)malloc(sizeof(header_t));
    
    res->a = num1+ num2;
    res->b = num1 - num2;

    return res;
}

void helloWorld(void)
{
    printf("Hello world!\n");
}